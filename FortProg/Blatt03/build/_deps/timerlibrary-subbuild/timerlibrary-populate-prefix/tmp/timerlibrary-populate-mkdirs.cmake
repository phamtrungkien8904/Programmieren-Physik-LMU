# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-src"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-build"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/tmp"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/src/timerlibrary-populate-stamp"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/src"
  "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/src/timerlibrary-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/src/timerlibrary-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/kien/Desktop/Github/Programmieren-Physik-LMU/FortProg/Blatt03/build/_deps/timerlibrary-subbuild/timerlibrary-populate-prefix/src/timerlibrary-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
