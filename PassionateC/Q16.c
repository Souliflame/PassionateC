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

/*
[Q16-1_3] 성적관리 프로그램 작성
과목 4과목 - 국어, 영어, 수학, 국사, 학생 4명 - 철희, 철수, 영희, 영수
과목별 총점, 학생별 총점을 출력
*/
void WriteRecord(void) {
	char studentNames[4][5] = { {"철희"}, {"철수"}, {"영희"}, {"영수"} };
	char subjectNames[4][5] = { {"국어"}, {"영어"}, {"수학"}, {"국사"} };

	int scores[5][5];
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%s의 %s의 점수: ", studentNames[i], subjectNames[j]);
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