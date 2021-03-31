#include <stdio.h>

/*
[Q13-1_1] ���� 5�� int�� �迭 arr ���� �� 1,2,3,4,5�� �ʱ�ȭ
ù��° ��Ҹ� ����Ű�� ������ ���� ptr ����
ptr�� ����� ���� ������Ű�� ������ �������� ��� �迭��ҿ� ������ 2�� ����
�� �� ������ �� Ȯ��
*/
void accessArrayWithPointerToPlusAddress(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];

	for (int i = 0; i < 5; ++i) {
		*ptr += 2;
		printf("%d\n", *ptr);
		ptr++;
	}

	return;
}

/*
[Q13-1_2] 1���� �����ϳ�, ptr ���� ���� �ٲ��� �ʰ� ������������ �ذ�
��� �迭��ҿ� ������ 2�� ����
�� �� ������ �� Ȯ��
*/
void accessArrayWithPointerToPlusValue(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];

	for (int i = 0; i < 5; ++i) {
		*(ptr + i) += 2;
		printf("%d\n", *(ptr + i));
	}

	return;
}

/*
[Q13-1_3] ���� 5�� int�� �迭 arr ���� �� 1,2,3,4,5�� �ʱ�ȭ
�迭 ������ ��Ҹ� ����Ű�� ������ ���� ptr ����
ptr�� ����� ���� ���ҽ�Ű�� ���·� ��� �迭��ҿ� ����
�迭�� ����� ��� ������ ���Ͽ� �� ����� ���
*/
void accessArrayWithPointerToMinusAddress(void) {
	int arr[5] = { 1,2,3,4,5 };
	int arrLength = sizeof(arr) / sizeof(int) - 1;
	int* ptr = &arr[arrLength];

	for (int i = arrLength; i >= 0; --i) {
		*ptr -= 2;
		printf("%d\n", *ptr);
		ptr--;
	}

	return;
}

/*
[Q13-1_4] ���� 6�� int�� �迭 arr ���� �� 1,2,3,4,5,6�� �ʱ�ȭ
�迭�� ����� ������ 6,5,4,3,2,1�� �����ϴ� �ڵ� �ۼ�
�迭�� �հ� �ڸ� ����Ű�� ������ ���� �� �� ������ �ڹٲ�� �Ѵ�.
*/
void accessArrayWithPointerToSwap(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptrLeftIndex = &arr[0];
	int arrLength = sizeof(arr) / sizeof(int);
	int* ptrRightIndex = &arr[arrLength - 1];

	for (int i = 0; i < arrLength / 2; ++i) {
		*ptrLeftIndex ^= *ptrRightIndex;
		*ptrRightIndex ^= *ptrLeftIndex;
		*ptrLeftIndex ^= *ptrRightIndex;

		ptrLeftIndex++;
		ptrRightIndex--;
	}

	for (int i = 0; i < arrLength; ++i) {
		printf("%d\n", arr[i]);
	}

	return;
}