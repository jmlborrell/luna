//
//  MemoryManager.cpp
//  luna
//
//  Created by Jose Borrell on 2019-06-26.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#include "MemoryManager.h"
#include "StackAllocator.h"

#define INIT_BYTES 5000

namespace luna {
    
    luna::StackAllocator* stack;
    
    MemoryManager::MemoryManager() {
        
    }
    
    MemoryManager::~MemoryManager() {
        
    }

    void MemoryManager::startUp() {
        stack = new luna::StackAllocator(INIT_BYTES);
    }
    
    void MemoryManager::shutDown() {
        stack->StackAllocator::clear();
        stack = nullptr;
    }
    
    void* MemoryManager::set(size_t bytes) {
        return stack->StackAllocator::alloc(bytes);
    }
}
