cmake_minimum_required(VERSION 3.10)
project(Battleships)

set(CMAKE_CXX_STANDARD 14)

add_executable(Battleships main.cpp src/MainMenu.h src/MainMenu.cpp src/GameManager.cpp src/GameManager.h src/Helper.cpp src/Helper.h src/Helper.h src/MainMenu.h src/GameManager.h src/game/Field.cpp src/game/Field.h src/game/ships/Ship.cpp src/game/ships/Ship.h)