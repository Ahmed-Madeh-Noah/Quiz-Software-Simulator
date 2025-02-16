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

add_executable(Database_Test Database_Test.cpp)
list(APPEND LIBS Database)
target_link_libraries(Database_Test ${LIBS})
add_test(NAME Database_Test COMMAND Database_Test)

add_executable(UserDB_Test UserDB_Test.cpp)
list(APPEND LIBS UserDB)
target_link_libraries(UserDB_Test ${LIBS})
add_test(NAME UserDB_Test COMMAND UserDB_Test)

add_executable(QuizDB_Test QuizDB_Test.cpp)
list(APPEND LIBS QuizDB)
target_link_libraries(QuizDB_Test ${LIBS})
add_test(NAME QuizDB_Test COMMAND QuizDB_Test)

add_executable(User_Test User_Test.cpp)
list(APPEND LIBS User)
target_link_libraries(User_Test ${LIBS})
add_test(NAME User_Test COMMAND User_Test)

add_executable(Session_Test Session_Test.cpp)
list(APPEND LIBS Session)
target_link_libraries(Session_Test ${LIBS})
add_test(NAME Session_Test COMMAND Session_Test)
