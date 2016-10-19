cmake_minimum_required(VERSION 3.5)
project(Pizzeria )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES Pizza.cpp Pizza.h Olio_Tartufato.cpp Olio_Tartufato.h Bufala.cpp Bufala.h Funghi_Porcini.cpp Funghi_Porcini.h Order.cpp Order.h Client.cpp Client.h)
add_executable(Pizzeria main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Pizzeria core)
