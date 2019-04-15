#include "CGameClient.hpp"

void CGameClient::OnLoad()
{
	m_Triangle = new CTriangle(Graphics().Shader(), -1, -1, 0, -1, 1, 1);
}

void CGameClient::OnRender()
{
	m_Triangle->Draw();
}

void CGameClient::OnUpdate()
{

}

void CGameClient::OnExit()
{
	free(m_Triangle);
	m_Triangle = nullptr;
}
