cmake_minimum_required(VERSION 3.9)
project(gameServer)

set(CMAKE_CXX_STANDARD 20)

set(nlohmann_json_DIR ./server/json)
find_package(nlohmann_json REQUIRED)

#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS network graphics window audio REQUIRED)

add_executable(gameServer
        server/server.cpp
        server/Game.cpp
        server/GameObject.cpp
        server/systems/CommandReceiverSystem.cpp
        server/components/HPComponent.cpp
        server/components/CoordinateComponent.cpp
        server/GameObjectsConfigCreator.cpp
        server/GameObjectFactory.cpp
        server/components/ComponentArgs.cpp
        server/components/DamageComponent.cpp
        server/components/SizeComponent.cpp
        server/Player.cpp
        server/components/PlayerBelongingComponent.cpp
        server/components/MoveOrder.cpp
        server/components/AttackOrder.cpp
        server/systems/MoveSystem.cpp
        )

target_link_libraries(gameServer
        sfml-network
        nlohmann_json::nlohmann_json
        )

add_executable(gameClient
        client/client.cpp client/Client.cpp client/Client.h client/screens/game/GameScreen.cpp client/screens/game/GameScreen.h client/screens/BaseScreen.h client/screens/connect/ConnectScreen.cpp client/screens/connect/ConnectScreen.h client/Connection.h client/widgets/TextInput.cpp client/widgets/TextInput.h client/widgets/BaseWidget.h client/Settings.h client/widgets/Button.cpp client/widgets/Button.h)

target_link_libraries(gameClient sfml-network sfml-graphics sfml-window sfml-audio)
