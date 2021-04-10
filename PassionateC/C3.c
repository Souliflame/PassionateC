#include <stdio.h>
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