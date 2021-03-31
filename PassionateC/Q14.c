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

// [Q14-2_1] 아래 함수에서 const 선언을 한 이유가?
void ShowAllData(const int* arr, int len) {

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	//Show인 것처럼 값을 출력하는데, 값을 변경하지 않고 주소값만 변경하도록 const int* 선언을 한 것
}

// [Q14-2_2] 아래 예제에서 지적할만한 사항은 무엇인가?
void ShowData(const int* ptr) {
	int* rptr = ptr;	// int 포인터 선언 후 ptr 주소를 가져옴
	printf("%d \n", *rptr);	// rptr을 통해 ptr에 있는 값을 보여줌
	*rptr = 20;		// rptr을 통해 ptr값을 수정해버림

	//즉 Show만 해줘야하는데 값을 수정하게 되었음, const 선언이 무의미해짐
}