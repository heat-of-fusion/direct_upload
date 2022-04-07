#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

char map[7][7] = {
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ '1', '1', '1', '1', '1', '1', '1' },
	{ 'a', 'b', 'c', 'd', 'e', 'f', 'g' }
};

void printMain() {
	printf("+====================================================================================================================+\n");
	printf("|                     ______                                                                                         |\n");
	printf("|     ______________/____/  |                                                                                        |\n");
	printf("|    /     /  ____________  |                                                                                        |\n");
	printf("|   |     |  |  __________| |                                                                                        |\n");
	printf("|   |     |  |  |_________  |                                                                                        |\n");
	printf("|   |     |  |__________  | |                                                                                        |\n");
	printf("|   |     |  ___________| | |                                                                                        |\n");
	printf("|   |     |  |____________| |        #      #         #########                                                      |\n");
	printf("|   |     |   ______________/       # #     #         #       #                                                      |\n");
	printf("|   |_____|__/                     #   #    #####     #########                                                      |\n");
	printf("|                                 #     #   #             #                                                          |\n");
	printf("|                                #       #  #       #############                                                    |\n");
	printf("|                                           #                                                                        |\n");
	printf("|                                           #          #######                                                       |\n");
	printf("|                                           #                #                                                       |\n");
	printf("|                                           #                #                                                       |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                              시작하려면 아무키나 누르세요                                                          |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("+====================================================================================================================+\n");
}

void printTip(int time) {
	printf("+====================================================================================================================+\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                 플레이하는 방법                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                       사목은 위에서 아래로 말을 떨어뜨려서                                         |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                     자신의 말로 가로, 세로, 대각선의 모양으로                                      |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                          연속 4개를 상대보다 먼저 만들면                                           |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                 이기는 게임입니다.                                                 |\n");
	printf("|                                                                                                                    |\n");
	printf("|             게임에서 이기는 방법은 오목과 같지만 5개가 아닌 4개로 선을 만들면 된다고 생각하시면 됩니다.            |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                           그러면 즐거운 게임 되십시오!!!                                           |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                            게임이 %d초 후에 시작됩니다.                                             |\n", time);
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("|                                                                                                                    |\n");
	printf("+====================================================================================================================+\n");
}

void whiteWin() {
	printf("+==================================================+\n");
	printf("|     #    #   #######           #      #####  #   |\n");
	printf("|   #####  #   #                # #         #  #   |\n");
	printf("|     #    #   #######         #   #    #####  #   |\n");
	printf("|    # #   #      #           #     #   #      #   |\n");
	printf("|     #    #   #######                  #####  #   |\n");
	printf("|          #    #####        #########         #   |\n");
	printf("|   ########        #                          #   |\n");
	printf("|     #         #####           ####           #   |\n");
	printf("|     #         #              #    #          #   |\n");
	printf("|     ######    #####           ####           #   |\n");
	printf("+==================================================+\n");
	Sleep(5000);
	exit(0);
}

void blackWin() {
	printf("+===========================================================+\n");
	printf("|  ####  #    ####      #######           #      #####  #   |\n");
	printf("|     #  #   #    #     #                # #         #  #   |\n");
	printf("|     ####   #    #     #######         #   #    #####  #   |\n");
	printf("|     #  #    ####         #           #     #   #      #   |\n");
	printf("|     #  #              #######                  #####  #   |\n");
	printf("|        #   #######     #####        #########         #   |\n");
	printf("|    #####                   #                          #   |\n");
	printf("|    #   #    #          #####           ####           #   |\n");
	printf("|    #   #    #          #              #    #          #   |\n");
	printf("|    #####    ######     #####           ####           #   |\n");
	printf("+===========================================================+\n");
	Sleep(5000);
	exit(0);
}

void drow() {
	printf("+=========================+\n");
	printf("|  #    #  #     ####  #  |\n");
	printf("|  #    #  #        #  #  |\n");
	printf("|  ######  #        #  #  |\n");
	printf("|  #    #  #           #  |\n");
	printf("|  ######  #       #####  |\n");
	printf("|          #       #   #  |\n");
	printf("|          #       #####  |\n");
	printf("+=========================+\n");
	Sleep(5000);
	exit(0);
}

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void noticeUp() {
	gotoxy(0, 8);
	printf("                          ");
	gotoxy(0, 8);
	printf("1 ~ 7까지의 수를 입력해주세요");
	Sleep(1000);
	gotoxy(0, 8);
	printf("                                     ");
	gotoxy(0, 8);
}

void goSlowly(int input, int playerNum, int downLimit) {
	if (playerNum == 1) {
		switch (input) {
		case 1:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(0, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][0] = '2';
					break;
				}
				else {
					gotoxy(0, i);
					printf("  ");
				}
			}
			break;
		case 2:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(2, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][1] = '2';
					break;
				}
				else {
					gotoxy(2, i);
					printf("  ");
				}
			}
			break;
		case 3:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(4, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][2] = '2';
					break;
				}
				else {
					gotoxy(4, i);
					printf("  ");
				}
			}
			break;
		case 4:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(6, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][3] = '2';
					break;
				}
				else {
					gotoxy(6, i);
					printf("  ");
				}
			}
			break;
		case 5:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(8, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][4] = '2';
					break;
				}
				else {
					gotoxy(8, i);
					printf("  ");
				}
			}
			break;
		case 6:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(10, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][5] = '2';
					break;
				}
				else {
					gotoxy(10, i);
					printf("  ");
				}
			}
			break;
		case 7:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(12, i);
				printf("○");
				Sleep(50);
				if (downLimit == i) {
					map[i][6] = '2';
					break;
				}
				else {
					gotoxy(12, i);
					printf("  ");
				}
			}
			break;
		}
	}
	else {
		switch (input) {
		case 1:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(0, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][0] = '3';
					break;
				}
				else {
					gotoxy(0, i);
					printf("  ");
				}
			}
			break;
		case 2:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(2, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][1] = '3';
					break;
				}
				else {
					gotoxy(2, i);
					printf("  ");
				}
			}
			break;
		case 3:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(4, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][2] = '3';
					break;
				}
				else {
					gotoxy(4, i);
					printf("  ");
				}
			}
			break;
		case 4:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(6, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][3] = '3';
					break;
				}
				else {
					gotoxy(6, i);
					printf("  ");
				}
			}
			break;
		case 5:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(8, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][4] = '3';
					break;
				}
				else {
					gotoxy(8, i);
					printf("  ");
				}
			}
			break;
		case 6:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(10, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][5] = '3';
					break;
				}
				else {
					gotoxy(10, i);
					printf("  ");
				}
			}
			break;
		case 7:
			for (int i = 0; i <= downLimit; i++) {
				gotoxy(12, i);
				printf("●");
				Sleep(50);
				if (downLimit == i) {
					map[i][6] = '3';
					break;
				}
				else {
					gotoxy(12, i);
					printf("  ");
				}
			}
			break;
		}
	}
}

void goDown(int input, int playerNum) {
	if (playerNum == 1) {
		switch (input) {
		case 1:
			for (int i = 5; i >= 0; i--) {
				if (map[i][0] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 2:
			for (int i = 5; i >= 0; i--) {
				if (map[i][1] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 3:
			for (int i = 5; i >= 0; i--) {
				if (map[i][2] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 4:
			for (int i = 5; i >= 0; i--) {
				if (map[i][3] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 5:
			for (int i = 5; i >= 0; i--) {
				if (map[i][4] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 6:
			for (int i = 5; i >= 0; i--) {
				if (map[i][5] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 7:
			for (int i = 5; i >= 0; i--) {
				if (map[i][6] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		}
	}
	else {
		switch (input) {
		case 1:
			for (int i = 5; i >= 0; i--) {
				if (map[i][0] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 2:
			for (int i = 5; i >= 0; i--) {
				if (map[i][1] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 3:
			for (int i = 5; i >= 0; i--) {
				if (map[i][2] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 4:
			for (int i = 5; i >= 0; i--) {
				if (map[i][3] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 5:
			for (int i = 5; i >= 0; i--) {
				if (map[i][4] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 6:
			for (int i = 5; i >= 0; i--) {
				if (map[i][5] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		case 7:
			for (int i = 5; i >= 0; i--) {
				if (map[i][6] == '1') {
					goSlowly(input, playerNum, i);
					break;
				}
			}
			break;
		}
	}
}

int isDrow() {
	int count = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			if (map[i][j] != '1') {
				count++;
			}
			else {
				count += 0;
			}
		}
	}
	if (count == 42) {
		return 1;
	}
}

int isHorizontal() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			if (map[i][j] == '2' && map[i][j + 1] == '2' && map[i][j + 2] == '2' && map[i][j + 3] == '2') {
				return 1;
			}
			else if (map[i][j] == '3' && map[i][j + 1] == '3' && map[i][j + 2] == '3' && map[i][j + 3] == '3') {
				return 2;
			}
		}
	}
}

int isVertical() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (map[i][j] == '2' && map[i + 1][j] == '2' && map[i + 2][j] == '2' && map[i + 3][j] == '2') {
				return 1;
			}
			else if (map[i][j] == '3' && map[i + 1][j] == '3' && map[i + 2][j] == '3' && map[i + 3][j] == '3') {
				return 2;
			}
		}
	}
}

int isUpLeftToDown() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			if (map[i][j] == '2' && map[i + 1][j + 1] == '2' && map[i + 2][j + 2] == '2' && map[i + 3][j + 3] == '2') {
				return 1;
			}
			else if (map[i][j] == '3' && map[i + 1][j + 1] == '3' && map[i + 2][j + 2] == '3' && map[i + 3][j + 3] == '3') {
				return 2;
			}
		}
	}
}

int isDownLeftToUp() {
	for (int i = 5; i >= 0; i--) {
		for (int j = 0; j < 4; j++) {
			if (map[i][j] == '2' && map[i - 1][j + 1] == '2' && map[i - 2][j + 2] == '2' && map[i - 3][j + 3] == '2') {
				return 1;
			}
			else if (map[i][j] == '3' && map[i - 1][j + 1] == '3' && map[i - 2][j + 2] == '3' && map[i - 3][j + 3] == '3') {
				return 2;
			}
		}
	}
}

int main() {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
	system("color f0");

	printMain();
	_getch();
	system("cls");

	for (int i = 5; i >= 1; i--) {
		printTip(i);
		Sleep(1000);
		system("cls");
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			switch (map[i][j]) {
			case '1':
				printf("  ");
				break;
			case 'a':
				printf("1 ");
				break;
			case 'b':
				printf("2 ");
				break;
			case 'c':
				printf("3 ");
				break;
			case 'd':
				printf("4 ");
				break;
			case 'e':
				printf("5 ");
				break;
			case 'f':
				printf("6 ");
				break;
			case 'g':
				printf("7 ");
			}
		}
		printf("\n");
	}
	while (1) {
		gotoxy(0, 8);
		int playerOneInput;
		while (1) {
			printf("흰돌 차례 : ");
			scanf("%d", &playerOneInput);
			if (playerOneInput > 7 || playerOneInput < 1) {
				noticeUp();
			}
			else {
				break;
			}
		}
		goDown(playerOneInput, 1);
		if (isHorizontal() == 1 || isVertical() == 1 || isUpLeftToDown() == 1 || isDownLeftToUp() == 1) {
			gotoxy(0, 8);
			whiteWin();
		}
		else if (isDrow() == 1) {
			gotoxy(0, 8);
			drow();
		}
		gotoxy(0, 8);
		printf("                         ");
		gotoxy(0, 8);

		int playerTwoInput;
		while (1) {
			printf("검은돌 차례 : ");
			scanf("%d", &playerTwoInput);
			if (playerTwoInput > 7 || playerTwoInput < 1) {
				noticeUp();
			}
			else {
				break;
			}
		}
		goDown(playerTwoInput, 2);
		if (isHorizontal() == 2 || isVertical == 2 || isUpLeftToDown() == 2 || isDownLeftToUp() == 2) {
			gotoxy(0, 8);
			blackWin();
		}
		else if (isDrow() == 1) {
			gotoxy(0, 8);
			drow();
		}
		gotoxy(0, 8);
		printf("                         ");
	}
	_getch();
	return 0;
}