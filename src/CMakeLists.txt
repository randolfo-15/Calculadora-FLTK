
# Math
add_library(Operations OBJECT math.cpp)

target_include_directories(Operations PUBLIC ${Heard})

# Form
add_library(Gui OBJECT form.cpp)

target_include_directories(Gui PUBLIC ${Heard})

target_link_libraries(Gui
    PUBLIC 
    Operations
    fltk
    fltk_images
)

add_executable(calc_fltk main.cpp)

target_link_libraries( calc_fltk
    PRIVATE
    Operations
    Gui
)

