# Create two separate classes
add_library(Session STATIC ../include/Session.h Session.cpp)
add_library(User STATIC ../include/User.h User.cpp)

# Include directories for headers
target_include_directories(Session PUBLIC ../include)
target_include_directories(User PUBLIC ../include)

# Create main executable
add_executable(Quiz_Software_Simulator main.cpp)

# Link the class to main executable
target_link_libraries(Quiz_Software_Simulator Session User)
