#ifndef MINERSGATE_CGAMECLIENT_HPP
#define MINERSGATE_CGAMECLIENT_HPP

#include <engine/client/CClient.hpp>

class CGameClient : public CClient
{
public:
	void OnLoad() override;
	void OnRender() override;
	void OnUpdate() override;
	void OnExit() override;
};


#endif //MINERSGATE_CGAMECLIENT_HPP
