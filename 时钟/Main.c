#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
	/*����ʱ���֣���͡������ı��*/
	int shiNum = 0;   //Сʱ�ı��
	int num1 = 1;    //��һ���������ı��
	int fenNum = 2;  //���ӵı��
	int num2 = 3;    //�ڶ����������ı��
	int miaoNum = 4; //��ı��
	int y = 100;
	/*����ʱ���֣����������*/
	int sec = 0;    //�����
	int min = 0;    //�ּ���
	int hour = 0;   //ʱ����
	setGameSize(200, 200);
	/*����ʱ���֣���͡��������ı�*/
	createText(shiNum, "0");
	createText(num1, ":");
	createText(fenNum, "0");
	createText(num2, ":");
	createText(miaoNum, "0");
	/*����ʱ���֣���͡������ı���λ��*/
	setTextPosition(shiNum, 40, y);
	setTextPosition(num1, 60, y);
	setTextPosition(fenNum,80, y);
	setTextPosition(num2, 1000, y);
	setTextPosition(miaoNum, 120, y);
	/*ʱ�ӱ���*/
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