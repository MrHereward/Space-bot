#include "Space bot.h"

void SpaceBot::Bot()
{
	while (true)
	{
		LPCWSTR WindowTitle = L"Jump King";
		HWND MainHwnd = FindWindow(NULL, WindowTitle);

		if (GetAsyncKeyState(VK_F1))
		{
			Jump(100);
 		}
		else if (GetAsyncKeyState(VK_F2))
		{
			Jump(200);
		}
		else if (GetAsyncKeyState(VK_F3))
		{
			Jump(300);
		}
		else if (GetAsyncKeyState(VK_F4))
		{
			Jump(400);
		}
		else if (GetAsyncKeyState(VK_F5))
		{
			Jump(500);
		}
		else if (GetAsyncKeyState(VK_F6))
		{
			Jump(600);
		}
		else if (GetAsyncKeyState(VK_F7))
		{
			Jump(700);
		}
		else if (GetAsyncKeyState(VK_F8))
		{
			Jump(800);
		}
		else if (GetAsyncKeyState(VK_F9))
		{
			Jump(900);
		}
		else if (GetAsyncKeyState(VK_F10))
		{
			Jump(1000);
		}
	}
}

void SpaceBot::Jump(int Miliseconds)
{
	keybd_event(VK_SPACE, 0x39, NULL, NULL);

	Sleep(Miliseconds);

	keybd_event(VK_SPACE, 0x39, KEYEVENTF_KEYUP, NULL);
}