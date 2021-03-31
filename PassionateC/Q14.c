#include <stdio.h>

/*
[Q14-1_1] num�� ����� ���� ������ ����ϴ� �Լ� ����
�ΰ��� ���·� Call-by-value ���(������ ���ڷ� ����), Call-by-reference ���(�ּҸ� ���ڷ� ����)
*/
int SquareByValue(int num) {
	return num * num;
}
void SquareByReference(int* numPtr) {
	*numPtr *= *numPtr;
}

// [Q14-1_2] �� ������ ����� ���� ���� ��ȯ�ϴ� �Լ�, num1 > num2 > num3 > num1
void Swap3(int* num1, int* num2, int* num3) {

	//���� �ٲ��ִ� ����(�ش� �ּҸ� ���� �ٲ��� ���� ������, �ش� ���� ��� ���̴��� �𸣱� ������ �ּ� ��ü�� �ٲٱ� �ָ�)
	*num1 ^= *num2;
	*num2 ^= *num1;
	*num1 ^= *num2;

	*num1 ^= *num3;
	*num3 ^= *num1;
	*num1 ^= *num3;
}

// [Q14-2_1] �Ʒ� �Լ����� const ������ �� ������?
void ShowAllData(const int* arr, int len) {

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	//Show�� ��ó�� ���� ����ϴµ�, ���� �������� �ʰ� �ּҰ��� �����ϵ��� const int* ������ �� ��
}

// [Q14-2_2] �Ʒ� �������� �����Ҹ��� ������ �����ΰ�?
void ShowData(const int* ptr) {
	int* rptr = ptr;	// int ������ ���� �� ptr �ּҸ� ������
	printf("%d \n", *rptr);	// rptr�� ���� ptr�� �ִ� ���� ������
	*rptr = 20;		// rptr�� ���� ptr���� �����ع���

	//�� Show�� ������ϴµ� ���� �����ϰ� �Ǿ���, const ������ ���ǹ�����
}