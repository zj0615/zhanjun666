#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
	int i;
	int txtNum = 0;
	setGameSize(500, 500);
	createText(txtNum, "10");
	setTextPosition(txtNum, 250, 250);
	for (i = 10; i >= 0; i--)
	{
		char str[10] = { 0 };
		sprintf(str, "%d", i);
		setText(txtNum, str);
		pauseGame(1000);
	}
	pauseGame(10000);
	/*int txtNum = 0;
	int fontSize = 0;
	setGameSize(600, 600);
	setGameTitle("Õ²¾þ520");
	createText(txtNum, "Õ²¾þ520");
	setTextPosition(txtNum, 250, 250);
	while (1)
	{
		for (fontSize = 20; fontSize < 40; fontSize++)
		{
			setTextFontSize(txtNum, fontSize);
			pauseGame(100);
		}
		for (fontSize = 40; fontSize > 20; fontSize--)
		{
			setTextFontSize(txtNum, fontSize);
			pauseGame(100);
		}
	}*/
}

int main(void)
{
	rpInit(gameMain);
	return 0;
}