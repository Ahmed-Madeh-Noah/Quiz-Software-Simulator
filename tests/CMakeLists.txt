# Fetch GoogleTest
add_subdirectory(libs/googletest)
include(GoogleTest)

# Enable testing
enable_testing()

# Add the test executable
add_executable(Session_Test Session_Test.cpp)

# Link the class
target_link_libraries(Session_Test Session gtest gtest_main)

# Discover tests
gtest_discover_tests(Session_Test)
