# Create the User library
add_library(User STATIC User.cpp)
target_include_directories(User PUBLIC ../include)

# Create the Session library
add_library(Session STATIC Session.cpp)
target_include_directories(Session PUBLIC ../include)

# Create main executable
add_executable(${PROJECT_NAME} main.cpp)

# Link the class to main executable
target_link_libraries(${PROJECT_NAME} Session User)
