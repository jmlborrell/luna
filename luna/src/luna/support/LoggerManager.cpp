//
//  LoggerManager.cpp
//  luna
//
//  Created by Jose Borrell on 2019-06-30.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#include "LoggerManager.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace luna {
    
    std::shared_ptr<spdlog::logger> luna::LoggerManager::core;
    std::shared_ptr<spdlog::logger> luna::LoggerManager::client;
    
    LoggerManager::LoggerManager() {
        startUp();
        LUNA_INFO("test");
    }
    
    LoggerManager::~LoggerManager() {
        
    }
    
    void LoggerManager::startUp() {
        core   = spdlog::stdout_color_mt("LUNA");
        core->set_level(spdlog::level::trace);
        
        client = spdlog::stdout_color_mt("CLIENT");
        client->set_level(spdlog::level::trace);
    }
    
    void LoggerManager::shutDown() {
        core = nullptr;
        client = nullptr;
    }
}
