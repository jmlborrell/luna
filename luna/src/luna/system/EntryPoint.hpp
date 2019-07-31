//
//  EntryPoint.hpp
//  luna
//
//  Created by Jose Borrell on 2019-06-25.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#pragma once

#ifndef EntryPoint_hpp
#define EntryPoint_hpp

#include <stdio.h>
#include "LoggerManager.h"
#include "MemoryManager.h"
#include <stddef.h>
#include <stdalign.h>

extern luna::Application* luna::createApplication();

luna::LoggerManager* logger;
luna::MemoryManager* memory;

template<class target>
inline void memory_init(target* ptr) {
    ptr = (target*) memory -> set(sizeof(target), alignof(target));
    *ptr = target();
}

int main(int argc, const char * argv[]) {
    
    printf("Luna Engine\n");
    
    memory = new luna::MemoryManager();
    memory->startUp();
    
    memory_init(logger);
    logger->startUp();
    
    auto application = luna::createApplication();
    application->startUp();
    delete application;
    
    logger->shutDown();
    memory->shutDown();
    
    return 0;
}

#endif /* EntryPoint_hpp */

