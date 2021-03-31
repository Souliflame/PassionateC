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