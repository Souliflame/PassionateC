#include <stdio.h>

//[Q16-1_1] 가로 9, 세로 3인 2차원 int 배열 선언, 구구단 2, 3, 4단을 저장하고 출력을 진행
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

//[Q16-1_2] 2*4 배열을 선언 후 초기화 한 다음, 이 요소를 가져다 초기화하는 4*2 배열을 만들고 출력 진행
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