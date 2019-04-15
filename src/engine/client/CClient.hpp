#ifndef MINERSGATE_CCLIENT_HPP
#define MINERSGATE_CCLIENT_HPP

#include "CGraphics.hpp"
#include <memory>

class CClient
{
	CGraphics m_Graphics;
	bool m_Exit = false;

public:
	CGraphics &Graphics() { return m_Graphics; }

	int Run();
	void Exit();

	virtual void OnLoad() = 0;
	virtual void OnRender() = 0;
	virtual void OnUpdate() = 0;
	virtual void OnExit() = 0;
};


#endif //MINERSGATE_CCLIENT_HPP
