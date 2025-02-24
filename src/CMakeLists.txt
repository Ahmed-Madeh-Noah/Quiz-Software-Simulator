add_library(UserDB STATIC UserDB.cpp)
target_include_directories(UserDB PUBLIC ../include)

add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ../include)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Session UserDB)
