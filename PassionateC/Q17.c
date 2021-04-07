#include <stdio.h>

/*
[Q17-1_1] �� ���� int�� ������ ������ ���̰� 5�� int�� �迭�� ����(int* maxPtr, int* minPtr, int arr[5])
MaxAndMin �̸��� �Լ��� �����ϰ� �̸� ȣ���ϸ� ���� �迭�� �� ������ ������ ���� ������ ����
��ȣ���� �Ϸ���� �� ������ ���� maxPtr�� ���� ū ���� ����� �迭����� �ּ� ����, minPtr���� ���� ���� ���� ����� �迭����� �ּҰ��� ����
*/
void MaxAndMin(int** maxPtr, int** minPtr, int* arr, int size) {
	int* max;
	int* min;
	max = min = &arr[0];

	for (int i = 0; i < size; ++i) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*maxPtr = max;
	*minPtr = min;
}