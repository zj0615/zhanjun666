#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
	int spriteNum = 0;
	int x = 0;
	int y = 0;
	int i;
	setGameSize(1000, 1000);
	setGameTitle("³¬¼¶ÂíÀï°Â");
	createSprite(spriteNum, "mario");
	playSpriteAnimate(spriteNum, "walk");
	setSpritePosition(spriteNum, x, y);
	setSpriteFlipX(spriteNum, TRUE);
	for (i= 0; i <95 ; i++)
	{
		x = x + 10;
		y = y + 10;
		setSpritePosition(spriteNum, x, y);
		pauseGame(100);
	}
	pauseGame(100);
	pauseGame(10000);
}

int main(void)
{
	rpInit(gameMain);
	return 0;
}