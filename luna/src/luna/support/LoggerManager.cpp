//
//  LoggerManager.cpp
//  luna
//
//  Created by Jose Borrell on 2019-06-27.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#include "LoggerManager.h"
#include "spdlog/spdlog.h"

#define LUNA_INFO(...) spdlog::info(__VA_ARGS__)
#define LUNA_ERROR(...) spdlog::error(__VA_ARGS__)
#define LUNA_WARN(...) spdlog::warn(__VA_ARGS__)
#define LUNA_CRITICAL(...) spdlog::critical(__VA_ARGS__)

namespace luna {
    LoggerManager::LoggerManager() {
        LUNA_CRITICAL("Booted up engine");
    }
    
    LoggerManager::~LoggerManager() {
        
    }
    
    void LoggerManager::startUp() {
        
    }
    
    void LoggerManager::shutDown() {
        
    }
}
