#include "CTriangle.hpp"
#include <GL/glew.h>
#include <GL/gl.h>
#include <glm/glm.hpp>

CTriangle::CTriangle(unsigned shader, float x1, float y1, float x2, float y2, float x3, float y3)
{
	m_Vertices[0] = x1;
	m_Vertices[1] = y1;
	m_Vertices[2] = 0;
	m_Vertices[3] = x2;
	m_Vertices[4] = y2;
	m_Vertices[5] = 0;
	m_Vertices[6] = x3;
	m_Vertices[7] = y3;
	m_Vertices[8] = 0;

	m_Program = shader;

	glGenVertexArrays(1, &m_VAO);
	glBindVertexArray(m_VAO);
	glGenBuffers(1, &m_VBO);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(m_Vertices), m_Vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
	glEnableVertexAttribArray(0);
}

void CTriangle::Draw()
{
	glUseProgram(m_Program);
	glBindVertexArray(m_VAO);
	glDrawArrays(GL_TRIANGLES, 0, 3);
}
