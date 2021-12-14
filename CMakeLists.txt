cmake_minimum_required(VERSION 3.9)
project(gameServer)

set(CMAKE_CXX_STANDARD 17)

set(nlohmann_json_DIR ./server/json)
find_package(nlohmann_json REQUIRED)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS network graphics window audio REQUIRED)

add_executable(gameServer
        server/server.cpp
        server/Game.cpp
        server/GameObject.cpp
        server/GameSystem.cpp
        server/CommandReceiverSystem.cpp
        server/components/HPComponent.cpp
        server/components/CoordinateComponent.cpp
        server/GameObjectsConfigCreator.cpp
        server/GameObjectFactory.cpp
        server/components/ComponentArgs.cpp
        server/components/DamageComponent.cpp server/components/DamageComponent.h server/components/BelongingComponent.cpp server/components/BelongingComponent.h server/components/SizeComponent.cpp server/components/SizeComponent.h)

target_link_libraries(gameServer sfml-network nlohmann_json::nlohmann_json)

add_executable(gameClient
        client/client.cpp)

target_link_libraries(gameClient sfml-network sfml-graphics sfml-window sfml-audio)
