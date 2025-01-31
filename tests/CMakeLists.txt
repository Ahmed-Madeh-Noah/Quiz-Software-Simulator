# Fetch GoogleTest
add_subdirectory(libs/googletest)
include(GoogleTest)

# Enable testing
enable_testing()

# Add test executable
add_executable(User_Test User_Test.cpp)
add_executable(Session_Test Session_Test.cpp)

# Link the classes
target_link_libraries(User_Test User gtest gtest_main)
target_link_libraries(Session_Test Session User gtest gtest_main)

# Discover tests
gtest_discover_tests(User_Test)
gtest_discover_tests(Session_Test)
