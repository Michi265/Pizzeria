cmake_minimum_required(VERSION 3.5)
project(Pizzeria )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES main.cpp MainFrame.cpp MainFrame.h PizzaFactory.cpp PizzaFactory.h Pizza.cpp Pizza.h Olio_Tartufato.cpp Olio_Tartufato.h Bufala.cpp Bufala.h Funghi_Porcini.cpp Funghi_Porcini.h RegistrationOrder.cpp RegistrationOrder.h Client.cpp Client.h Order.cpp Order.h Date.cpp Date.h FrameProgetto.h FrameProgetto.cpp Margherita.cpp Margherita.h Marinara.cpp Marinara.h Napoli.cpp Napoli.h main.h Communicate.cpp Communicate.h Panels.cpp Panels.h IngredientsFactory.cpp IngredientsFactory.h Ingredient.cpp Ingredient.h)
add_executable(Pizzeria ${SOURCE_FILES} )
add_library(core ${SOURCE_FILES} main.h MyFrame.cpp MyFrame.h)

find_package(wxWidgets REQUIRED net gl core base)
include(${wxWidgets_USE_FILE})
target_link_libraries(Pizzeria ${wxWidgets_LIBRARIES})



