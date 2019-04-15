#include "CClient.hpp"

int CClient::Run()
{
	Graphics().Initialize();
	OnLoad();

	while (!m_Exit)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				m_Exit = true;
		}

		OnUpdate();
		Graphics().Clear();
		Graphics().DrawTriangle();
		OnRender();
		Graphics().SwapBuffer();
	}

	OnExit();

	Graphics().OnExit();

	return EXIT_SUCCESS;
}

void CClient::Exit()
{
	m_Exit = true;
}
