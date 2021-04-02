#include <stdio.h>
#include <stdbool.h>

void ShowArray(int arr[], int len) {
	for (int i = 0; i < len; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}

void Swap(int* num1, int* num2) {
	*num1 ^= *num2;
	*num2 ^= *num1;
	*num1 ^= *num2;

	return;
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

//[C2-4] ���ܾ ���ڷ� ���޹޾� ȸ������ �ƴ��� �Ǵ��ϴ� �Լ�
void CheckPalindrome(char* str, int len) {

	bool isPalindrome = true;

	for (int i = 0; i < len / 2; ++i) {
		if (str[i] != str[len - 1 - i]) {
			isPalindrome = false;
			break;
		}
	}

	printf("���ڿ� �Է�: %s\n", str);

	if (isPalindrome) {
		printf("ȸ�� �Դϴ�.\n");
	}
	else {
		printf("ȸ���� �ƴմϴ�.\n");
	}
}

//[C2-5] Bubble Sort ��������, �������� �Լ�
void BubbleSort(int arr[], int len, bool isAsc) {

	//while�� for ����
	if (isAsc) {
		int l, r = len - 1;
		while (0 < r) {
			for (l = 0; l < r; l++) {
				if (arr[l] > arr[l + 1]) {
					Swap(&arr[l], &arr[l + 1]);
				}
			}
			r--;
		}
	}
	//for �ݺ� 2ȸ
	else {
		for (int i = 0; i < len - 1; ++i) {
			for (int j = 0; j < len - i - 1; ++j) {
				if (arr[j] < arr[j + 1]) {
					Swap(&arr[j], &arr[j + 1]);
				}
			}
		}
	}

	return;
}