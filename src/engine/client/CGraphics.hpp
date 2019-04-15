#ifndef MINERSGATE_CGRAPHICS_HPP
#define MINERSGATE_CGRAPHICS_HPP

#include <memory>
#include <SDL.h>
#include <string>
#include "graphics/CTriangle.hpp"

class CGraphics
{
	SDL_Window *m_Window;
	SDL_GLContext m_GLContext;

	void SetGLAttributes();
	uint LoadShaders(std::string vertex_file_path, std::string fragment_file_path);
	uint m_ProgramID;
public:
	bool Initialize();
	void Clear();
	void SwapBuffer();
	void OnExit();
	uint Shader() { return m_ProgramID; }

	SDL_Window *Window() { return m_Window; }
};


#endif //MINERSGATE_CGRAPHICS_HPP
