//
//  LoggerManager.h
//  luna
//
//  Created by Jose Borrell on 2019-06-30.
//  Copyright © 2019 Jose Borrell. All rights reserved.
//

#ifndef LoggerManager_h
#define LoggerManager_h

#include <stdio.h>
#include <memory>
#include <spdlog/spdlog.h>

namespace luna {
    class LoggerManager {
        
    private:
        static std::shared_ptr<spdlog::logger> core;
        static std::shared_ptr<spdlog::logger> client;
        
    public:
        LoggerManager();
        ~LoggerManager();
        void startUp();
        void shutDown();
    
        
        inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return core; }
        inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return client; }
        
    };
}

#define LUNA_TRACE(...) luna::LoggerManager::getCoreLogger()->trace(__VA_ARGS__)
#define LUNA_INFO(...) luna::LoggerManager::getCoreLogger()->info(__VA_ARGS__)
#define LUNA_WARN(...) luna::LoggerManager::getCoreLogger()->warn(__VA_ARGS__)
#define LUNA_ERROR(...) luna::LoggerManager::getCoreLogger()->error(__VA_ARGS__)
#define LUNA_FATAL(...) luna::LoggerManager::getCoreLogger()->fatal(__VA_ARGS__)

#define CLIENT_TRACE(...) luna::LoggerManager::getClientLogger()->trace(__VA_ARGS__)
#define CLIENT_INFO(...) luna::LoggerManager::getClientLogger()->info(__VA_ARGS__)
#define CLIENT_WARN(...) luna::LoggerManager::getClientLogger()->warn(__VA_ARGS__)
#define CLIENT_ERROR(...) luna::LoggerManager::getClientLogger()->error(__VA_ARGS__)
#define CLIENT_FATAL(...) luna::LoggerManager::getClientLogger()->fatal(__VA_ARGS__)



#endif /* LoggerManager_h */
