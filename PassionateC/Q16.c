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