#include "CQuad.hpp"
#include <GL/glew.h>
#include <GL/gl.h>
#include <glm/glm.hpp>

CQuad::CQuad(unsigned shader, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	m_Program = shader;
	// top right
	m_Vertices[0] = x1;
	m_Vertices[1] = y1;
	m_Vertices[2] = 0;

	// bottom right
	m_Vertices[3] = x2;
	m_Vertices[4] = y2;
	m_Vertices[5] = 0;

	// bottom left
	m_Vertices[6] = x3;
	m_Vertices[7] = y3;
	m_Vertices[8] = 0;

	// top left
	m_Vertices[9] = x4;
	m_Vertices[10] = y4;
	m_Vertices[11] = 0;

	// first triangle
	m_Indices[0] = 0;
	m_Indices[1] = 1;
	m_Indices[2] = 3;

	// second
	m_Indices[3] = 1;
	m_Indices[4] = 2;
	m_Indices[5] = 3;

	glGenVertexArrays(1, &m_VAO);
	glBindVertexArray(m_VAO);

	glGenBuffers(1, &m_VBO);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(m_Vertices), m_Vertices, GL_STATIC_DRAW);

	glGenBuffers(1, &m_EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(m_Indices), m_Indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
	glEnableVertexAttribArray(0);

	// For safety
	glBindVertexArray(0);
}

void CQuad::Draw()
{
	glUseProgram(m_Program);
	glBindVertexArray(m_VAO);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
	glBindVertexArray(0);
}
