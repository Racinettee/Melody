cmake_minimum_required (VERSION 3.0)
project (melody-engine)

set(melody_include ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
set(melody_lib_path ${CMAKE_CURRENT_SOURCE_DIR}/../bin/libmelody.a PARENT_SCOPE)

set(CXX_STANDARD_REQUIRED ON)

set(engine_source
	Camera2D.cpp
	Camera2D.hpp
	Errors.cpp
	Errors.hpp
	GLSLProgram.cpp
	GLSLProgram.hpp
	GLTexture.hpp
	ImageLoader.cpp
	ImageLoader.hpp
	InputManager.cpp
	InputManager.hpp
	IOManager.cpp
	IOManager.hpp
	Mengine.cpp
	Mengine.hpp
	picoPNG.cpp
	picoPNG.hpp
	ResourceManager.cpp
	ResourceManager.hpp
	Sprite.cpp
	Sprite.hpp
	SpriteBatch.cpp
	SpriteBatch.hpp
	SpriteFont.cpp
	SpriteFont.hpp
	TextureCache.cpp
	TextureCache.hpp
	Timing.cpp
	Timing.hpp
	vertex.hpp
	Window.cpp
	Window.hpp)

add_library(melody STATIC ${engine_source})

set_property(TARGET melody PROPERTY CXX_STANDARD 14)

install(TARGETS melody
	LIBRARY DESTINATION ../bin
	ARCHIVE DESTINATION ../bin)