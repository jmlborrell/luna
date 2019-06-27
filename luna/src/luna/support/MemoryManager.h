//
//  MemoryManager.hpp
//  luna
//
//  Created by Jose Borrell on 2019-06-26.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#ifndef MemoryManager_h
#define MemoryManager_h

#include <stdio.h>

namespace Luna {
    class MemoryManager {
    public:
        MemoryManager();
        ~MemoryManager();
        void startUp();
        void shutDown();
    };
}

#endif /* MemoryManager_h */
