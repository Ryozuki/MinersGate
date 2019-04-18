#ifndef MINERSGATE_CQUAD_HPP
#define MINERSGATE_CQUAD_HPP

#include "IDrawable.hpp"

class CQuad : public IDrawable
{
private:
	float m_Vertices[12] {};
	unsigned m_Indices[6] = {};
public:
	// top right, bottom right, bottom left, top left
	CQuad(unsigned shader, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	void Draw() override;
};


#endif //MINERSGATE_CQUAD_HPP
