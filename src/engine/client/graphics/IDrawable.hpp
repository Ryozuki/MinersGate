#ifndef MINERSGATE_IDRAWABLE_HPP
#define MINERSGATE_IDRAWABLE_HPP

class IDrawable {
protected:
	unsigned m_VAO = 0;
	unsigned m_VBO = 0;
	unsigned m_EBO = 0;
	unsigned m_Program = 0;
public:
	virtual void Draw() = 0;
};

#endif //MINERSGATE_IDRAWABLE_HPP
