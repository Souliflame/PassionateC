#include <stdio.h>

/*
[Q14-1_1] num에 저장된 값의 제곱을 계산하는 함수 정의
두가지 형태로 Call-by-value 기반(정수를 인자로 받음), Call-by-reference 기반(주소를 인자로 받음)
*/
int SquareByValue(int num) {
	return num * num;
}
void SquareByReference(int* numPtr) {
	*numPtr *= *numPtr;
}

// [Q14-1_2] 세 변수에 저장된 값을 서로 교환하는 함수, num1 > num2 > num3 > num1
void Swap3(int* num1, int* num2, int* num3) {

	//값을 바꿔주는 형태(해당 주소를 서로 바꿔줄 수도 있으나, 해당 값이 어디서 쓰이는지 모르기 때문에 주소 자체를 바꾸긴 애매)
	*num1 ^= *num2;
	*num2 ^= *num1;
	*num1 ^= *num2;

	*num1 ^= *num3;
	*num3 ^= *num1;
	*num1 ^= *num3;
}