#include <stdio.h>
#include <windows.h>
void gotoxy(int xpos, int ypos);
void startscreen() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);//�©��G���r�C
	int ch;
	printf("----------------------------------------------------------------------------------------\n");
	printf("-����������������������           ����������������                ��        ��    ��   - \n");
	printf("-        ��                                   ��              ����������  ������������ - \n");
	printf("-        ��                                 ��                 �� ����      ��    ��   - \n");
	printf("-        ��                               ��                  ��  �� ��     ��������   - \n");
	printf("-   ����������������          ��������������������������     ��   ��  ��    ��    ��   - \n");
	printf("-        ��       ��                      ��                      ��        ��������   - \n");
	printf("-        ��       ��                      ��                      ��        ��    ��   - \n");
	printf("-        ��       ��                      ��                      ��      ������������ - \n");
	printf("-        ��       ��                    ����                      ��         ��    ��  - \n");
	printf("- ����������������������                  ��                      ��       ��        ��- \n");
	printf("----------------------------------------------------------------------------------------\n");
	gotoxy(35, 12);
	printf("��Enter��}�l");
	ch = getchar();
}

