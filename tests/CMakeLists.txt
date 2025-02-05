# Fetch GoogleTest
add_subdirectory(libs/googletest)
include(GoogleTest)

# Enable testing
enable_testing()

# Add the User test
add_executable(User_Test User_Test.cpp)
target_link_libraries(User_Test User gtest gtest_main)
gtest_discover_tests(User_Test)

# Add the Session test
add_executable(Session_Test Session_Test.cpp)
target_link_libraries(Session_Test Session User gtest gtest_main)
gtest_discover_tests(Session_Test)
