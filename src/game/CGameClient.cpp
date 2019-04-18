#include "CGameClient.hpp"

void CGameClient::OnLoad()
{
	m_Triangle = new CTriangle(Graphics().Shader(), -1, -1, 0, -1, 1, 1);
	m_Quad = new CQuad(Graphics().Shader(), 0.8, 0.8, 0.8, -0.8, -0.8, -0.8, -0.8, 0.8);
}

void CGameClient::OnRender()
{
	//m_Triangle->Draw();
	m_Quad->Draw();
}

void CGameClient::OnUpdate()
{

}

void CGameClient::OnExit()
{
	free(m_Triangle);
	m_Triangle = nullptr;
	free(m_Quad);
	m_Quad = nullptr;
}
