
add_executable(csv_viewer_app
  "main.cpp"
)
target_link_libraries(csv_viewer_app
  PRIVATE hints_lib
)
