add_library(Database STATIC Database.cpp)
target_include_directories(Database PUBLIC ../include ../external/rapidcsv/src)

add_library(UserDB STATIC UserDB.cpp)
target_include_directories(UserDB PUBLIC ../include ../external/rapidcsv/src)

add_library(QuizDB STATIC QuizDB.cpp)
target_include_directories(QuizDB PUBLIC ../include ../external/rapidcsv/src)

add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ../include ../external/rapidcsv/src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Session UserDB QuizDB Database)
