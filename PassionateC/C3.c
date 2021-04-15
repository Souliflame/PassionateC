#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//도전! 프로그래밍3

void Show2DArray(int(*arr)[4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	return;
}
/*
[C3-1] 길이가 4x4인 int형 2차원 배열을 선언
각 행이 1~4, 5~8, 9~12, 13~16이 되도록 초기화
각 배열의 요소를 90도씩 이동시켜서 결과를 출력하는 프로그램을 작성
*/
void Set4x4Arr(int arr[][4]) {

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			arr[i][j] = (4 * i) + j + 1;
		}
	}

	return;
}
void RotateR90Arr(int arr[][4]) {

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j) {
			arr[i][j] ^= arr[3 - i][j];
			arr[3 - i][j] ^= arr[i][j];
			arr[i][j] ^= arr[3 - i][j];
		}
	}

	for (int i = 1; i < 4; ++i) {
		for (int j = 0; j < i; ++j) {
			arr[i][j] ^= arr[j][i];
			arr[j][i] ^= arr[i][j];
			arr[i][j] ^= arr[j][i];
		}
	}

	return;
}

/*
 [C3-2] 달팽이 배열을 출력하는 함수
 숫자 n을 입력받은 후, n*n의 달팽이 배열 출력
*/
void PrintSnailArr(void) {

	//MS VS에선 C99의 가변배열 선언이 불가능하여 길이50*50의 Array로 대체
	int arr[50][50];

	int len;
	printf("배열 길이 입력(1~50): ");
	scanf_s("%d", &len);
	if (len <= 0) {
		return;
	}

	int value = 1;
	int offset = 0;
	while (value <= len * len) {
		//상단 오른쪽으로(→)
		for (int x = offset; x < len - offset; ++x) {
			arr[offset][x] = value++;
		}

		//우측 아래로(↓)
		for (int y = 1 + offset; y < len - offset; ++y) {
			arr[y][len - 1 - offset] = value++;
		}

		//하단 왼쪽으로(←)
		for (int x = len - 2 - offset; x >= offset; --x) {
			arr[len - 1 - offset][x] = value++;
		}

		//좌측 위로(↑)
		for (int y = len - 2 - offset; y >= 1 + offset; --y) {
			arr[y][offset] = value++;
		}

		offset++;
	}

	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return;
}

/*
[C3-3] 0이상 RAND_MAX 이하의 난수 5개 생성 (범위 0~99)
*/
void PrintRand1To99(void) {
	for (int i = 1; i <= 5; ++i) {
		printf("%d번째 난수: %d\n", i, rand() % 100);
	}

	return;
}

/*
[C3-4] 두개의 주사위를 던졌을 때 결과를 출력하는 프로그램을 작성
(SRAND 함수와 TIME 함수를 활용)
*/
void GetDicesNum(int count) {
	srand((int)time(NULL));

	for (int i = 1; i <= count; ++i) {
		int num = (rand() % 6) + 1;
		printf("%d번째 주사위: %d\n", i, num);
	}
}

//[C3-5] 가위바위보 출력
void PrintRSPResult(int result) {
	switch (result) {
	case -1:
		printf("졌습니다..\n");
		break;
	case 0:
		printf("비겼습니다.\n");
		break;
	case 1:
		printf("이겼습니다!\n");
		break;
	}
}
/*
[C3-5] 가위바위보 프로그램 작성
질 때까지 플레이 가능하고, 질 경우 이전 성적 출력
*/
void PlayRSP(void) {

	bool hasNoDefeat = true;

	int playerCommand;
	int aiCommand;
	int winCount = 0;
	int drawCount = 0;

	char* commandStr[] = { "바위", "가위", "보" };

	srand((int)time(NULL));

	while (hasNoDefeat) {
		printf("%s는 1, %s는 2, %s는 3: ", commandStr[0], commandStr[1], commandStr[2]);
		scanf_s("%d", &playerCommand);

		if (playerCommand > 3 || playerCommand < 1) {
			printf("잘못된 선택입니다. 다시 입력해주세요.\n");
			continue;
		}

		playerCommand--;
		aiCommand = (rand() % 3);

		printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", commandStr[playerCommand], commandStr[aiCommand]);

		switch (playerCommand)
		{
		case 0:	//바위
			switch (aiCommand)
			{
			case 0:
				drawCount++;
				PrintRSPResult(0);
				break;
			case 1:	//가위
				winCount++;
				PrintRSPResult(1);
				break;
			case 2:	//보
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			default:
				break;
			}
			break;
		case 1:	//가위
			switch (aiCommand)
			{
			case 0:	//바위
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			case 1:	//가위
				drawCount++;
				PrintRSPResult(0);
				break;
			case 2:	//보
				winCount++;
				PrintRSPResult(1);
				break;
			default:
				break;
			}
			break;
		case 2:	//보
			switch (aiCommand)
			{
			case 0:	//바위
				winCount++;
				PrintRSPResult(1);
				break;
			case 1:	//가위
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			case 2:	//보
				drawCount++;
				PrintRSPResult(0);
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}

	printf("\n게임의 결과: %d 승, %d 무\n", winCount, drawCount);
}

