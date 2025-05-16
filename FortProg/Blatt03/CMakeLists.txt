cmake_minimum_required(VERSION 3.5)
project(CTutorial)

include(FetchContent)


FetchContent_Declare(
    TimerLibrary
    GIT_REPOSITORY https://gitlab.physik.uni-muenchen.de/R.Rasche/sose25_aprotech_uebung3_lib_repo.git
    GIT_TAG        v1.2
)
FetchContent_MakeAvailable(TimerLibrary)
# ---------------------------------


add_executable(main src/main.c)
target_link_libraries(main PRIVATE timer_lib)
target_include_directories(main PUBLIC include/)





