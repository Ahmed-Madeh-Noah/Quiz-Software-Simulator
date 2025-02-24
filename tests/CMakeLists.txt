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

add_executable(UserDB_Test UserDB_Test.cpp)
target_link_libraries(UserDB_Test gtest_main UserDB)
add_test(NAME UserDB_Test COMMAND UserDB_Test)

add_executable(Session_Test Session_Test.cpp)
target_link_libraries(Session_Test gtest_main Session UserDB)
add_test(NAME Session_Test COMMAND Session_Test)
