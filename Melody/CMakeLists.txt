cmake_minimum_required (VERSION 3.0)
project (melody-game)

set(CXX_STANDARD_REQUIRED ON)

include_directories(AFTER "${melody_include}")

set(game_source
	Bullet.cpp
	Bullet.hpp
	melody.cpp
	MelodyGame.cpp
	MelodyGame.hpp)

add_executable(melodygame ${game_source})

target_link_libraries(melodygame melody SDL2 GLEW GL)

set_property(TARGET melodygame PROPERTY CXX_STANDARD 14)

install(TARGETS melodygame
	RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../bin)