#include <stdio.h>

/*
[Q13-1_1] 길이 5인 int형 배열 arr 선언 후 1,2,3,4,5로 초기화
첫번째 요소를 가리키는 포인터 변수 ptr 선언
ptr에 저장된 값을 증가시키는 형태의 연산으로 모든 배열요소에 접근해 2씩 증가
그 후 증가된 값 확인
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
[Q13-1_2] 1번과 동일하나, ptr 값을 직접 바꾸지 않고 덧셈연산으로 해결
모든 배열요소에 접근해 2씩 증가
그 후 증가된 값 확인
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
[Q13-1_3] 길이 5인 int형 배열 arr 선언 후 1,2,3,4,5로 초기화
배열 마지막 요소를 가리키는 포인터 변수 ptr 선언
ptr에 저장된 값을 감소시키는 형태로 모든 배열요소에 접근
배열에 저장된 모든 정수를 더하여 그 결과를 출력
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
[Q13-1_4] 길이 6인 int형 배열 arr 선언 후 1,2,3,4,5,6로 초기화
배열에 저장된 순서가 6,5,4,3,2,1로 변경하는 코드 작성
배열과 앞과 뒤를 가리키는 포인터 변수 두 개 선언해 뒤바꿔야 한다.
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