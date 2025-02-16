set(COMMON_INCLUDE_DIRS
        ../include
        ../external/rapidcsv/src
)

add_library(Database STATIC Database.cpp)
target_include_directories(Database PUBLIC ${COMMON_INCLUDE_DIRS})

add_library(UserDB STATIC UserDB.cpp)
target_include_directories(UserDB PUBLIC ${COMMON_INCLUDE_DIRS})

add_library(QuizDB STATIC QuizDB.cpp)
target_include_directories(QuizDB PUBLIC ${COMMON_INCLUDE_DIRS})

add_library(User STATIC User.cpp)
target_include_directories(User PUBLIC ${COMMON_INCLUDE_DIRS})

add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ${COMMON_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Session User UserDB QuizDB Database)
