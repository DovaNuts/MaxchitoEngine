#include "Window.h"

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
	Window wnd(800, 600, "Maxchito Engine");

	MSG msg = { 0 };
	BOOL gResult;
	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0) // If no error or quit
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	if (gResult == -1) // If GetMessage() returns -1, then something went wrong
	{
		return -1;
	}
	else // Else, the user quit
	{
		return msg.wParam;
	}
}