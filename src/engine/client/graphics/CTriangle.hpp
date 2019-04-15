#ifndef MINERSGATE_CTRIANGLE_HPP
#define MINERSGATE_CTRIANGLE_HPP

#include "IDrawable.hpp"

class CTriangle : public IDrawable
{
private:
	unsigned m_VAO;
	unsigned m_VBO;
	unsigned m_Program;
	float m_Vertices[9];
public:
	CTriangle(unsigned shader, float x1, float y1, float x2, float y2, float x3, float y3);

	void Draw();
	void Update() {};
};


#endif //MINERSGATE_CTRIANGLE_HPP
