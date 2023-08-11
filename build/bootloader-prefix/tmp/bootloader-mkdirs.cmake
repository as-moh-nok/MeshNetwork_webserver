# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v5.1/components/bootloader/subproject"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/tmp"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/src/bootloader-stamp"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/src"
  "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/Asma/hardProgramming/esp32/MeshNetwork_webserver/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
