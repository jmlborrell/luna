//
//  Application.h
//  luna
//
//  Created by Jose Borrell on 2019-06-26.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#ifndef Application_h
#define Application_h

#include <stdio.h>

namespace luna {
    
    class Application
    {
    public:
        Application();
        ~Application();
        virtual void startUp();
        void shutDown();
    };
    
    // Defined in client
    Application* createApplication();
    
}

#endif /* Application_h */
