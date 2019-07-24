//
//  StackAllocator.cpp
//  luna
//
//  Created by Jose Borrell on 2019-07-03.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#include "StackAllocator.h"
#include <stdlib.h>

namespace luna {
    
    StackAllocator::StackAllocator(size_t bytes) {
        m_start = malloc(bytes);
        m_top = m_start;
    }
    
    void* StackAllocator::alloc(size_t bytes) {
        const size_t current = (size_t) m_top;
        m_top = (StackAllocator::Marker) (current + bytes);
        return m_top;
    }
    
    StackAllocator::Marker StackAllocator::getMarker() {
        return m_top;
    }
    
    void StackAllocator::freeToMarker(Marker marker) {
        m_top = marker;
    }
    
    void StackAllocator::clear() {
        m_top = m_start;
    }

    void* StackAllocator::allocAligned(size_t bytes, size_t alignment) {
        size_t expand = bytes + alignment;
        uintptr_t raw = reinterpret_cast<uintptr_t>(StackAllocator::alloc(expand));
        size_t mask = alignment - 1;
        uintptr_t misalignment = (raw & mask);
        uintptr_t adjustment = alignment-misalignment;
        
        uintptr_t aligned = raw + adjustment;
        uint8_t* pAlignedMem = reinterpret_cast<uint8_t*>(aligned);
        pAlignedMem[-1] = static_cast<uint8_t>(adjustment);
        return static_cast<void*>(pAlignedMem);
    }
    
}
