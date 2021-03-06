#pragma once
#include <GL/glew.h>


namespace Mengine {
struct Position
{
	float x;
	float y;
};
	
struct ColorRGBA8
{
	ColorRGBA8() : r(0), g(0), b(0), a(0) {}
	ColorRGBA8(GLubyte R, GLubyte G, GLubyte B, GLubyte A) :
	 r(R), g(G), b(B), a(A) {}
	GLubyte r;
	GLubyte g;
	GLubyte b;
	GLubyte a;
};
typedef ColorRGBA8 Color;

struct UV 
{
	float u;
	float v;
};

struct Vertex 
{
	Position position;
	
	ColorRGBA8 color;
	
	//UV texture coordinates
	UV uv;
	
	void SetColor(GLubyte r, GLubyte g, GLubyte b, GLubyte a)
	{
		color.r = r;
		color.b = b;
		color.g = g;
		color.a = a;
	}
	
	void setUV(float u, float v)
	{
		uv.u = u;
		uv.v = v;
	}
	
	void setPosition(float x, float y)
	{
		position.x = x;
		position.y = y;
	}
};
}