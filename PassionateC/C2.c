#include <stdio.h>

/*
[C2-1] ���� 10�� �迭 ����, �� 10���� ���� �Է¹���
Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ�, Ȧ���� ���� ��µ�
10���� ������ main���� �Է¹ް� �迭 ���� Ȧ���� ���, �迭�� ¦���� ����ϴ� �Լ��� �� �Լ��� ȣ���ϴ� ������� ���α׷���
*/
void PrintOddInArray(int* arr, int length) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < length; ++i) {
		if (*(arr + i) % 2) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}

void PrintEvenInArray(int* arr, int length) {
	printf("¦�� ���: ");
	for (int i = 0; i < length; ++i) {
		if (!(*(arr + i) % 2)) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}