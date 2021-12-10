#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
	/*创建时，分，秒和“：”的编号*/
	int shiNum = 0;   //小时的编号
	int num1 = 1;    //第一个“：”的编号
	int fenNum = 2;  //分钟的编号
	int num2 = 3;    //第二个“：”的编号
	int miaoNum = 4; //秒的编号
	int y = 100;
	/*定义时，分，秒计数变量*/
	int sec = 0;    //秒计数
	int min = 0;    //分计数
	int hour = 0;   //时计数
	setGameSize(200, 200);
	/*创建时，分，秒和“：”的文本*/
	createText(shiNum, "0");
	createText(num1, ":");
	createText(fenNum, "0");
	createText(num2, ":");
	createText(miaoNum, "0");
	/*创建时，分，秒和“：”文本的位置*/
	setTextPosition(shiNum, 40, y);
	setTextPosition(num1, 60, y);
	setTextPosition(fenNum,80, y);
	setTextPosition(num2, 1000, y);
	setTextPosition(miaoNum, 120, y);
	/*时钟本体*/
	for (hour = 0; hour < 60; hour++)
	{
		char strHour[5] = { 0 };
		sprintf(strHour, "%02d", hour);
		setText(shiNum, strHour);
			for (min = 0; min < 24; min++)
			{
				char strMin[5] = { 0 };
				sprintf(strMin, "%02d", min);
				setText(fenNum, strMin);
				for (sec = 0; sec < 60; sec++)
				{
					char strSec[5] = { 0 };
					sprintf(strSec, "%02d", sec);
					setText(miaoNum, strSec);
					pauseGame(1000);
				}
			}
	}
	pauseGame(10000);
}

int main(void)
{
	rpInit(gameMain);
	return 0;
}