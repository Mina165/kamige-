# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.24
cmake_policy(SET CMP0009 NEW)

# SOURCE_LIST at CMakeLists.txt:10 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "C:/Users/t-913/CPPP/kamige-/src/*.cc")
set(OLD_GLOB
  "C:/Users/t-913/CPPP/kamige-/src/Game.cc"
  "C:/Users/t-913/CPPP/kamige-/src/Rendering/Renderer.cc"
  "C:/Users/t-913/CPPP/kamige-/src/World/World.cc"
  "C:/Users/t-913/CPPP/kamige-/src/main.cc"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/t-913/CPPP/kamige-/build/CMakeFiles/cmake.verify_globs")
endif()