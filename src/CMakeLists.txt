#set(COMMON_INCLUDE_DIRS
#        ../include
#        ../external/rapidcsv/src
#)
#
#add_library(Database STATIC Database.cpp)
#target_include_directories(Database PUBLIC ${COMMON_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME}) #target_link_libraries(${PROJECT_NAME} Session)
