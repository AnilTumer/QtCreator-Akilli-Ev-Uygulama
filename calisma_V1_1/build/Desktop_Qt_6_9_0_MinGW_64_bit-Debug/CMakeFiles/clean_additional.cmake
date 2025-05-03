# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\calisma_V1_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\calisma_V1_1_autogen.dir\\ParseCache.txt"
  "calisma_V1_1_autogen"
  )
endif()
