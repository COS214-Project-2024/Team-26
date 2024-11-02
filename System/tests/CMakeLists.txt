# List test files
set(TEST_SOURCES
    Tests.cpp
)

# Add executable for unit tests
add_executable(runUnitTests ${TEST_SOURCES})

# Link Google Test, MyLibrary, and set up test discovery
target_link_libraries(runUnitTests PRIVATE GTest::gtest_main MyLibrary)

# Enable CTest for running the tests
include(GoogleTest)
gtest_discover_tests(runUnitTests)
