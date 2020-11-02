#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "startscreen.h"
#include "save.h"
#include "whitewin.h"
#include "blackwin.h"
#include "leaderboard.h"
#define N 20

void create_board(char (*board)[N]);
void print_board(char (*board)[N]);
void print_info(int flag, int person);
void gotoxy(int xpos, int ypos);
int play_chess(char (*board)[N], int *person, int *x, int *y);
int check_board(char (*board)[N], int *person, int x, int y);

int main(void) {
    startscreen();
    int input;
    gotoxy(35, 15);
    printf("���ګ�1��\n");
    gotoxy(35, 17);
    printf("��2�i�Ʀ�]\n");
    gotoxy(35, 19);
    printf("��3���}");
    scanf("%d", &input);
    while (input != 3) {
        if (input == 1) {
            system("cls");
            save();
            system("cls");
            system("color e0");
            char board[N][N];
            int person = 0, flag = 0, x = 0, y = 0;

            create_board(board);
            while (1) {
                print_board(board);
                print_info(flag, person);
                if (flag == 1) {
                    puts(" ");
                }
                if ((flag = play_chess(board, &person, &x, &y)) == -1 || flag == 3) {
                    continue;//flag=-1���ɭԸ��L�����j��(�N���J�����D)
                } else if (flag == 2) {
                    return 0;//�����C��
                }
                flag = check_board(board, &person, x, y);
            }
        }
        if (input == 2) {
            leaderboard();
        }
        system("cls");
        startscreen();
        gotoxy(35, 15);
        printf("���ګ�1��\n");
        gotoxy(35, 17);
        printf("��2�i�Ʀ�]\n");
        gotoxy(35, 19);
        printf("��3���}");
        scanf("%d", &input);
    }
    return 0;
    system("pause");
}

void create_board(char (*board)[N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            board[i][j] = '+';
        }
    }

    return;
}

void print_board(char (*board)[N]) {
    int i, j;

    system("cls");
    printf("\n");
    printf("  ");
    for (i = 1; i < N; i++) {
        printf("%2d  ", i);
    }
    printf("\n");
    printf("  -----------------------------------------------------------------------------\n");
    for (i = 1; i < N; i++) {
        printf("%2d|", i);
        for (j = 1; j < N; j++) {
            printf("%-2c  ", board[i][j]);
        }
        printf("|\n\n");

    }
    printf("  -----------------------------------------------------------------------------\n");

    return;
}

void print_info(int flag, int person) {
    if (flag == 1) {
        if (person == 0) {
            blackwin();
            printf("�´� ��!!\n");
            return;
        } else {
            whitewin();
            printf("�մ� ��!!\n");
            return;
        }
    } else {
        if (flag == -1) {
            printf("���~!�ЦA��J�@��!\n");
        }
        if (person == 0) {
            printf("�� �´�!(��q���}�C��)\n");
        } else {
            printf("�� �մ�!(��q���}�C��)\n");
        }
    }
}

int play_chess(char (*board)[N], int *person, int *x, int *y) {
    char choice;

    printf("��J��m(x,y): ");
    while ((scanf("%d,%d", x, y) != 2) || *x < 0 || *x > N - 1 || *y < 0 || *y > N - 1) {
        choice = getchar();
        if (choice == 'q' && getchar() == '\n') {
            return 2;//quit the game
        } else if (choice == 'r' && getchar() == '\n') {
            if (board[*x][*y] == '+') {
                printf("You have already rescinded!\n");
                return -1;
            }
            board[*x][*y] = '+';
            *person = (*person + 1) % 2;
            return 3;
        }
        return -1;
    }
    if (board[*x][*y] != '+') {
        return -1;
    }
    if (*person == 0) {
        board[*x][*y] = 'X';
    } else {
        board[*x][*y] = 'O';
    }
    return 0;
}

int check_board(char (*board)[N], int *person, int x, int y) {
    int i, j;
    int pos_x = x, pos_y = y;
    int cnt, sign;
    int a[4][2] = {{0, 1}, {1, 1}, { -1, 0}, { -1, 1}};

    for (i = 0; i < 4; i++) {
        cnt = sign = 1;
        j = 0;
        while (1) {
            pos_x += sign * a[i][j];
            pos_y += sign * a[i][j + 1];
            if ((board[pos_x][pos_y] == board[x][y]) && pos_x >= 0 && pos_x <= N - 1 && pos_y >= 0 && pos_y <= N - 1)
                cnt++;
            else {
                if (sign == -1) {
                    break;
                }
                sign = -1;
                pos_x = x;
                pos_y = y;
            }
            if (cnt == 5) {
                return 1;//���l�s�u
            }
        }
    }
    *person = (*person + 1) % 2;

    return 0;
}
void gotoxy(int xpos, int ypos) {
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos; scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput, scrn);
}
