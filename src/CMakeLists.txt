add_subdirectory(../external/rapidcsv)

add_library(Database STATIC Database.cpp)
target_include_directories(
    Database PUBLIC
    ../include
    ../include/external/rapidcsv/src
)

add_library(UserDB STATIC UserDB.cpp)
target_include_directories(UserDB PUBLIC ../include)

add_library(QuizDB STATIC QuizDB.cpp)
target_include_directories(QuizDB PUBLIC ../include)

add_library(User STATIC User.cpp)
target_include_directories(User PUBLIC ../include)

add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ../include)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Session User UserDB QuizDB Database)
