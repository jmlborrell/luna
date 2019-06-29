//
//  LoggerManager.hpp
//  luna
//
//  Created by Jose Borrell on 2019-06-27.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#ifndef LoggerManager_h
#define LoggerManager_h

#include <stdio.h>

namespace luna {
    class LoggerManager {
    public:
        LoggerManager();
        ~LoggerManager();
        void startUp();
        void shutDown();
    };
}
#endif /* LoggerManager_hpp */
