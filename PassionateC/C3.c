#include <stdio.h>
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