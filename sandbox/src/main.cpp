//
//  main.cpp
//  sandbox
//
//  Created by Jose Borrell on 2019-06-23.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#include <iostream>
#include <luna.h>

class Sandbox : public luna::Application {
public:
    Sandbox() {
        
    }
    
    ~Sandbox() {
        
    }
    
    
};

luna::Application* luna::createApplication() {
    return new Sandbox();
}
