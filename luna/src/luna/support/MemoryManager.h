//
//  MemoryManager.h
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
        
    private:
        class StackAllocator {
        public:
            typedef u_int32_t Marker;
            
            explicit StackAllocator(u_int32_t bytes);
            
            void* alloc(u_int32_t bytes);
            Marker getMarker();
            void freeToMarker(Marker marker);
            
            void clear();
        };
    };
}

#endif /* MemoryManager_h */
