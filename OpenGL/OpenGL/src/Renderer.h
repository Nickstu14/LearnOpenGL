#pragma once

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "shader.h"

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
	x;\
	ASSERT(GLLogCall(#x, __FILE__, __LINE__));

bool GLLogCall(const char* function, const char* file, int line);
void GLClearError();


class Render
{
public :
	Render();
	~Render();
	void Clear() const;
	void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader)const;
};