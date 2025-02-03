# Create two separate classes
add_library(Session STATIC Session.cpp)
add_library(User STATIC User.cpp)

# Include directories for headers
target_include_directories(Session PUBLIC ../include)
target_include_directories(User PUBLIC ../include)

# Create main executable
add_executable(${PROJECT_NAME} main.cpp)

# Link the class to main executable
target_link_libraries(${PROJECT_NAME} Session User)
