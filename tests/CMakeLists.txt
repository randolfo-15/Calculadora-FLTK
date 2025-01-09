


add_executable(Tests tests.cpp)

target_link_libraries(Tests
    PRIVATE
    Gui
    Operations
    gtest
    gtest_main
    pthread
)

include(GoogleTest)
gtest_discover_tests(Tests)

add_test(NAME TESTS COMMAND Tests)


