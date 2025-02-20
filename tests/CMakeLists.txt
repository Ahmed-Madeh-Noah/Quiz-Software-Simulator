include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(LIBS gtest_main)

add_executable(User_Test User_Test.cpp)
target_link_libraries(User_Test gtest_main User)
add_test(NAME User_Test COMMAND User_Test)

add_executable(Session_Test Session_Test.cpp)
target_link_libraries(Session_Test gtest_main Session User)
add_test(NAME Session_Test COMMAND Session_Test)
