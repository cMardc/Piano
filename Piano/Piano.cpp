#include "Piano.h"
using namespace std;

#pragma comment(lib, "Winmm.lib")

int main(int argc, char* argv[])
{
	while (true)
	{
		if (_kbhit())
		{
			int press = getch();
			char btn = press;
			btn = tolower(btn);
			if (btn == 'a')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyA.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'b')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyB.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'c')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyC.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'd')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyD.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'e')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyE.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'f')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyF.wav", NULL, SND_FILENAME);
			}
			else if (btn == 'g')
			{
				PlaySound("D:\\Piano\\Piano\\Piano Keys\\keyG.wav", NULL, SND_FILENAME);
			}
		}
	}
}