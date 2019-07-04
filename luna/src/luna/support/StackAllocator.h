//
//  StackAllocator.h
//  luna
//
//  Created by Jose Borrell on 2019-07-03.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#ifndef StackAllocator_h
#define StackAllocator_h

#include <stdio.h>

namespace luna {
    class StackAllocator {
    public:
        typedef void* Marker;
        
        explicit StackAllocator(size_t bytes);
        
        void* alloc(size_t bytes);
        Marker getMarker();
        void freeToMarker(Marker marker);
        
        void clear();
    private:
        Marker m_start;
        Marker m_top;
    };
};
#endif /* StackAllocator_h */
