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
    
}
