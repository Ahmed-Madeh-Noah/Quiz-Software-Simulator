# Create the class files
add_library(Session STATIC ../include/Session.h Session.cpp)

# Include the directory for the header
target_include_directories(Session PUBLIC ../include)

# Create main executable
add_executable(Quiz_Software_Simulator main.cpp)

# Link the class to main executable
target_link_libraries(Quiz_Software_Simulator Session)
