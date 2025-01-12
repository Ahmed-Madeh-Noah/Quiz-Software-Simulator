add_library(ExampleClass ExampleClass.cpp ../include/ExampleClass.h)

target_include_directories(ExampleClass PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(Quiz_Software_Simulator main.cpp
        ExampleClass.cpp)

target_link_libraries(Quiz_Software_Simulator ExampleClass)
