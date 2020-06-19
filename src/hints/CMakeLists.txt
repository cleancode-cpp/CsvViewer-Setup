
add_library(hints_lib STATIC
    "hints/Hints.cpp"
    "hints/Hints.h"
)
target_include_directories(hints_lib PUBLIC .)

# unit tests
add_executable(hints_tests
    "hints/Hints.test.cpp"
)
target_link_libraries(hints_tests
    PRIVATE gtest_main hints_lib
)
add_test(NAME hints COMMAND hints_tests)
