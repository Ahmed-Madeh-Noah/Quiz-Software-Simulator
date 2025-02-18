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

#add_executable(Database_Test Database_Test.cpp)
#target_link_libraries(Database_Test gtest_main Database)
#add_test(NAME Database_Test COMMAND Database_Test)
