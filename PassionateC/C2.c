#include <stdio.h>

/*
[C2-1] 길이 10인 배열 선언, 총 10개의 정수 입력받음
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성, 홀수가 먼저 출력됨
10개의 정수는 main에서 입력받고 배열 내에 홀수만 출력, 배열내 짝수만 출력하는 함수로 두 함수를 호출하는 방식으로 프로그래밍
*/
void PrintOddInArray(int* arr, int length) {
	printf("홀수 출력: ");
	for (int i = 0; i < length; ++i) {
		if (*(arr + i) % 2) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}

void PrintEvenInArray(int* arr, int length) {
	printf("짝수 출력: ");
	for (int i = 0; i < length; ++i) {
		if (!(*(arr + i) % 2)) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}