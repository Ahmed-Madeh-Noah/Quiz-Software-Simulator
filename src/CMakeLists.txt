add_library(User STATIC User.cpp)
target_include_directories(User PUBLIC ../include)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} User)
