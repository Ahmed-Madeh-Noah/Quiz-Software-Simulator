set(COMMON_INCLUDE_DIRS
        ../include
)
#        ../external/rapidcsv/src
#)
#
add_library(User STATIC User.cpp)
target_include_directories(User PUBLIC ${COMMON_INCLUDE_DIRS})

add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ${COMMON_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} User Session)
