cmake_minimum_required (VERSION 3.0)
project (melody-game)

set(CXX_STANDARD_REQUIRED ON)

include_directories(AFTER "${melody_include}" "${schemy_include}")

set(game_source
	Agent.cpp
	Agent.h
	Bullet.cpp
	Bullet.h
	Gun.cpp
	Gun.h
	Human.cpp
	Human.h
	Level.cpp
	Level.h
	main.cpp
	MainGame.cpp
	MainGame.h
	Player.cpp
	Player.h
	Zombie.cpp
	Zombie.h)

add_executable(zombiegame ${game_source})

target_link_libraries(zombiegame melody SDL2 SDL2_ttf GLEW GL)

set_property(TARGET zombiegame PROPERTY CXX_STANDARD 14)

install(TARGETS zombiegame
	RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../bin)