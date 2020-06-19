cmake_minimum_required(VERSION 3.20.0)
project(CsvViewer
  VERSION 1.0.0
  DESCRIPTION "Csv Viewer"
  LANGUAGES CXX
)

enable_testing()
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party)
add_subdirectory(src)
