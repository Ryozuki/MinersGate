#ifndef MINERSGATE_IDRAWABLE_HPP
#define MINERSGATE_IDRAWABLE_HPP

class IDrawable {

public:
	virtual void Update() = 0;
	virtual void Draw() = 0;
};

#endif //MINERSGATE_IDRAWABLE_HPP
