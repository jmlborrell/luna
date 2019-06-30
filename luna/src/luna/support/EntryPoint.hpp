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

extern luna::Application* luna::createApplication();

int main(int argc, const char * argv[]) {
    // insert code here..
    
    printf("Luna Engine\n");
    
    auto logger = new luna::LoggerManager();
    
    auto application = luna::createApplication();
    application->startUp();
    delete application;
    
    return 0;
}

#endif /* EntryPoint_hpp */

