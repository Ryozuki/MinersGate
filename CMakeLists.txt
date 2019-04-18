cmake_minimum_required(VERSION 3.13)
project(MinersGate)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 17)

# https://github.com/aminosbh/sdl2-cmake-modules

find_package(SDL2 REQUIRED)
find_package(SDL2_net REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(Freetype REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glm REQUIRED)

file(COPY assets DESTINATION .)

set(CLIENT_SOURCES
        src/main.cpp
        src/engine/client/CGraphics.cpp
        src/engine/client/CGraphics.hpp
        src/engine/client/CClient.cpp
        src/engine/client/CClient.hpp
        src/game/CGameClient.cpp
        src/game/CGameClient.hpp
        src/engine/client/CIO.cpp
        src/engine/client/CIO.hpp
        src/engine/client/graphics/CTriangle.cpp
        src/engine/client/graphics/CTriangle.hpp
        src/engine/client/graphics/CQuad.cpp
        src/engine/client/graphics/CQuad.hpp
        src/engine/client/graphics/IDrawable.hpp)

include_directories(src ${FREETYPE_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIR} ${glm_INCLUDE_DIR})
add_executable(MinersGate ${CLIENT_SOURCES})
target_link_libraries(MinersGate
        SDL2::Main SDL2::Net SDL2::Mixer
        ${FREETYPE_LIBRARIES} ${GLEW_LIBRARIES}
        ${OPENGL_LIBRARIES} ${glm_LIBRARIES})
