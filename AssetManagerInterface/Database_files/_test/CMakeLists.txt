cmake_minimum_required(VERSION 3.5)

project(Database_files_Test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Database_files_Test main.cpp AssetManagementDBTest.cpp)

find_package(Qt5 REQUIRED COMPONENTS Sql)
target_link_libraries(Database_files_Test PRIVATE Qt5::Sql)

#target_link_libraries(Database_files_Test PRIVATE Qt5::sql)
target_link_libraries(Database_files_Test PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(Database_files_Test PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

include_directories("${CMAKE_SOURCE_DIR}/googletest/googletest/include")
include_directories("${CMAKE_SOURCE_DIR}/googletest/googlemock/include")
include_directories("${CMAKE_SOURCE_DIR}/Database_files")

target_link_directories(Database_files_Test PUBLIC googletest)
target_link_libraries(Database_files_Test PUBLIC Database_files)
target_link_libraries(Database_files_Test PUBLIC gtest gmock)
