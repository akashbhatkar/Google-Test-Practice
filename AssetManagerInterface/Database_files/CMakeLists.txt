cmake_minimum_required(VERSION 3.5)

project(Database_files)

add_library(Database_files SHARED AssetManagerDBServiceInterface.h AssetManagerDBService.cpp AssetManagerDBService.h )

add_subdirectory(_test)

#find_package(Qt5 REQUIRED COMPONENTS Core Quick Sql)

find_package(Qt5 REQUIRED COMPONENTS Sql)
target_link_libraries(Database_files PRIVATE Qt5::Sql)


target_link_libraries(Database_files PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(Database_files PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_link_libraries(Database_files PRIVATE Qt5::Sql)

