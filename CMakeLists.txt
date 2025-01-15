cmake_minimum_required(VERSION 3.10)

project(
    Calculadora-FLTK
    VERSION 1.0.0
    DESCRIPTION "Uma calculadora simples desenvolvida em C++ utilizando a biblioteca FLTK (Fast Light Toolkit)."
    HOMEPAGE_URL git@github.com:randolfo-15/Calculadora-FLTK.git
    LANGUAGES CXX
)

set(CMAKE_BUILD_TYPE DEBUG CACHE STRING "Tipo de construção.")
set(Heard "${CMAKE_SOURCE_DIR}/inc" CACHE STRING "Cabeçalhos")
set(Img_Icon "${CMAKE_SOURCE_DIR}/img/icon.png")

add_definitions(-DImg_Icon=\"${Img_Icon}\")

include_directories(${Heard})

add_subdirectory(src)

enable_testing()

add_subdirectory(tests)

install(TARGETS calc_fltk DESTINATION ${CMAKE_SOURCE_DIR})
