cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(untitled
        Board.cpp
        Board.hpp
        City.hpp
        Color.hpp
        Demo1.cpp
        #        Demo2.cpp
        Dispatcher.cpp
        Dispatcher.hpp
        FieldDoctor.cpp
        FieldDoctor.hpp
        GeneSplicer.cpp
        GeneSplicer.hpp
        Medic.cpp
        Medic.hpp
        OperationsExpert.cpp
        OperationsExpert.hpp
        Player.cpp
        Player.hpp
        Researcher.cpp
        Researcher.hpp
        Scientist.cpp
        Scientist.hpp
        #        TestCounter.cpp
        Virologist.cpp
        Virologist.hpp)