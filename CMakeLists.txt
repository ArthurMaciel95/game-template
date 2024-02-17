cmake_minimum_required(VERSION 3.28.3)

project(LightYears
    VERSION 1.0.0  
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_FIND_PACKAGE_PREFER_CONFIG ON)

#CREATES A VARIABLE.
set(LIGHT_YEARS_GAME_TARGET_NAME "LightYears")



add_subdirectory(LightYears)


include(FetchContent)

set(SFML_LIB_NAME SFML)

FetchContent_Declare(
    ${SFML_LIB_NAME}
    GIT_REPOSITORY "https://github.com/SFML/SFML.git"
    GIT_TAG "2.5.1"
    GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})

target_include_directories(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${LIGHT_YEARS_GAME_TARGET_NAME}/includes)



target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC sfml-graphics sfml-window sfml-system sfml-audio)

function(CopyLibToTarget LIB_NAME TARGET_NAME)
    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:${LIB_NAME}>
        $<TARGET_FILE_DIR:${TARGET_NAME}>
    )
endfunction()



file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${LIGHT_YEARS_GAME_TARGET_NAME}/assets DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/${LIGHT_YEARS_GAME_TARGET_NAME})
