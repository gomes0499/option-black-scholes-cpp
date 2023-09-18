cmake_minimum_required(VERSION 3.26)
project(option_black_scholes_cpp)

set(CMAKE_CXX_STANDARD 14)

# find_package(Boost 1.82.0 REQUIRED COMPONENTS math)
find_package(Boost 1.82.0 REQUIRED)

# Se o Boost foi encontrado, inclui os diretórios e vincula as bibliotecas
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(option_black_scholes_cpp main.cpp)
endif ()
