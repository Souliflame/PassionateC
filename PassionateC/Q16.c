#include <stdio.h>

//[Q16-1_1] ���� 9, ���� 3�� 2���� int �迭 ����, ������ 2, 3, 4���� �����ϰ� ����� ����
void GetTablesOfTwoToFour(void) {
	int tablesOfTwoToFour[3][9];

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 9; ++j) {
			tablesOfTwoToFour[i][j] = (i + 2) * (j + 1);
			printf("%2d ", tablesOfTwoToFour[i][j]);
		}
		printf("\n");
	}

	return;
}

//[Q16-1_2] 2*4 �迭�� ���� �� �ʱ�ȭ �� ����, �� ��Ҹ� ������ �ʱ�ȭ�ϴ� 4*2 �迭�� ����� ��� ����
void GetMatrixRotated(void) {

	int matrix[2][4] = { {1,2,3,4},{5,6,7,8} };
	int rotatedMatrix[4][2];

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 2; ++j) {
			rotatedMatrix[i][j] = matrix[j][i];
			printf("%d ", rotatedMatrix[i][j]);
		}
		printf("\n");
	}

	return;
}

/*
[Q16-1_3] �������� ���α׷� �ۼ�
���� 4���� - ����, ����, ����, ����, �л� 4�� - ö��, ö��, ����, ����
���� ����, �л��� ������ ���
*/
void WriteRecord(void) {
	char studentNames[4][5] = { {"ö��"}, {"ö��"}, {"����"}, {"����"} };
	char subjectNames[4][5] = { {"����"}, {"����"}, {"����"}, {"����"} };

	int scores[5][5];
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%s�� %s�� ����: ", studentNames[i], subjectNames[j]);
			scanf_s("%d", &scores[i][j]);
		}
	}

	for (int i = 0; i <= 4; ++i) {
		scores[4][i] = scores[0][i] + scores[1][i] + scores[2][i] + scores[3][i];
		scores[i][4] = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3];
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}

	return;
}