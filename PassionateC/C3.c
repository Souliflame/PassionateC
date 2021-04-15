#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//����! ���α׷���3

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
[C3-1] ���̰� 4x4�� int�� 2���� �迭�� ����
�� ���� 1~4, 5~8, 9~12, 13~16�� �ǵ��� �ʱ�ȭ
�� �迭�� ��Ҹ� 90���� �̵����Ѽ� ����� ����ϴ� ���α׷��� �ۼ�
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
 [C3-2] ������ �迭�� ����ϴ� �Լ�
 ���� n�� �Է¹��� ��, n*n�� ������ �迭 ���
*/
void PrintSnailArr(void) {

	//MS VS���� C99�� �����迭 ������ �Ұ����Ͽ� ����50*50�� Array�� ��ü
	int arr[50][50];

	int len;
	printf("�迭 ���� �Է�(1~50): ");
	scanf_s("%d", &len);
	if (len <= 0) {
		return;
	}

	int value = 1;
	int offset = 0;
	while (value <= len * len) {
		//��� ����������(��)
		for (int x = offset; x < len - offset; ++x) {
			arr[offset][x] = value++;
		}

		//���� �Ʒ���(��)
		for (int y = 1 + offset; y < len - offset; ++y) {
			arr[y][len - 1 - offset] = value++;
		}

		//�ϴ� ��������(��)
		for (int x = len - 2 - offset; x >= offset; --x) {
			arr[len - 1 - offset][x] = value++;
		}

		//���� ����(��)
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
[C3-3] 0�̻� RAND_MAX ������ ���� 5�� ���� (���� 0~99)
*/
void PrintRand1To99(void) {
	for (int i = 1; i <= 5; ++i) {
		printf("%d��° ����: %d\n", i, rand() % 100);
	}

	return;
}

/*
[C3-4] �ΰ��� �ֻ����� ������ �� ����� ����ϴ� ���α׷��� �ۼ�
(SRAND �Լ��� TIME �Լ��� Ȱ��)
*/
void GetDicesNum(int count) {
	srand((int)time(NULL));

	for (int i = 1; i <= count; ++i) {
		int num = (rand() % 6) + 1;
		printf("%d��° �ֻ���: %d\n", i, num);
	}
}

//[C3-5] ���������� ���
void PrintRSPResult(int result) {
	switch (result) {
	case -1:
		printf("�����ϴ�..\n");
		break;
	case 0:
		printf("�����ϴ�.\n");
		break;
	case 1:
		printf("�̰���ϴ�!\n");
		break;
	}
}
/*
[C3-5] ���������� ���α׷� �ۼ�
�� ������ �÷��� �����ϰ�, �� ��� ���� ���� ���
*/
void PlayRSP(void) {

	bool hasNoDefeat = true;

	int playerCommand;
	int aiCommand;
	int winCount = 0;
	int drawCount = 0;

	char* commandStr[] = { "����", "����", "��" };

	srand((int)time(NULL));

	while (hasNoDefeat) {
		printf("%s�� 1, %s�� 2, %s�� 3: ", commandStr[0], commandStr[1], commandStr[2]);
		scanf_s("%d", &playerCommand);

		if (playerCommand > 3 || playerCommand < 1) {
			printf("�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n");
			continue;
		}

		playerCommand--;
		aiCommand = (rand() % 3);

		printf("����� %s ����, ��ǻ�ʹ� %s ����, ", commandStr[playerCommand], commandStr[aiCommand]);

		switch (playerCommand)
		{
		case 0:	//����
			switch (aiCommand)
			{
			case 0:
				drawCount++;
				PrintRSPResult(0);
				break;
			case 1:	//����
				winCount++;
				PrintRSPResult(1);
				break;
			case 2:	//��
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			default:
				break;
			}
			break;
		case 1:	//����
			switch (aiCommand)
			{
			case 0:	//����
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			case 1:	//����
				drawCount++;
				PrintRSPResult(0);
				break;
			case 2:	//��
				winCount++;
				PrintRSPResult(1);
				break;
			default:
				break;
			}
			break;
		case 2:	//��
			switch (aiCommand)
			{
			case 0:	//����
				winCount++;
				PrintRSPResult(1);
				break;
			case 1:	//����
				hasNoDefeat = false;
				PrintRSPResult(-1);
				break;
			case 2:	//��
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

	printf("\n������ ���: %d ��, %d ��\n", winCount, drawCount);
}

