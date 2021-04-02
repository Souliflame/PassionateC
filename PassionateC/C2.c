#include <stdio.h>

void ShowArray(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		printf("%d ", *(arr + i));
	}
}

/*
[C2-1] ���� 10�� �迭 ����, �� 10���� ���� �Է¹���
Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ�, Ȧ���� ���� ��µ�
10���� ������ main���� �Է¹ް� �迭 ���� Ȧ���� ���, �迭�� ¦���� ����ϴ� �Լ��� �� �Լ��� ȣ���ϴ� ������� ���α׷���
*/
void PrintOddInArray(const int* const arr, int length) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < length; ++i) {
		if (*(arr + i) % 2) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}

void PrintEvenInArray(const int* const arr, int length) {
	printf("¦�� ���: ");
	for (int i = 0; i < length; ++i) {
		if (!(*(arr + i) % 2)) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}


//[C2-2] ���α׷� ����ڷκ��� 10���� ���·� ���� ����(0 ����)�� �ϳ� �Է� ���� ����, 2������ ��ȯ�� ����ϴ� ���α׷�
void PrintDecimalToBinary(int num) {

	char binaryString[33];
	int index = 0;

	while (num > 0) {
		binaryString[index] = num % 2 == 0 ? '0' : '1';
		num /= 2;
		index++;
	}

	binaryString[index] = '\0';

	for (int i = index - 1; i >= 0; --i) {
		printf("%c", binaryString[i]);
		if (i % 4 == 0) {
			printf(" ");
		}
	}
}

/*
[C2-3] ���̰� 10�� �迭 ����, �� 10���� ���� �Է¹���
Ȧ���� �迭�� �տ���, ¦���� �ڿ������� ä�������� ����
*/
void GetOddFrontEvenRear(void) {

	int arr[10];
	int l = 0, r = 9;

	printf("���� 10���� �Է����ּ���\n");
	for (int i = 0; i < 10; ++i) {
		printf("�Է� %d: ", i + 1);
		int num;
		scanf_s("%d", &num);

		if (num % 2 == 0) {
			arr[r] = num;
			r--;
		}
		else {
			arr[l] = num;
			l++;
		}
	}

	ShowArray(arr, 10);

	return;
}

