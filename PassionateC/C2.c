#include <stdio.h>

void ShowArray(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		printf("%d ", *(arr + i));
	}
}

/*
[C2-1] 길이 10인 배열 선언, 총 10개의 정수 입력받음
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성, 홀수가 먼저 출력됨
10개의 정수는 main에서 입력받고 배열 내에 홀수만 출력, 배열내 짝수만 출력하는 함수로 두 함수를 호출하는 방식으로 프로그래밍
*/
void PrintOddInArray(const int* const arr, int length) {
	printf("홀수 출력: ");
	for (int i = 0; i < length; ++i) {
		if (*(arr + i) % 2) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}

void PrintEvenInArray(const int* const arr, int length) {
	printf("짝수 출력: ");
	for (int i = 0; i < length; ++i) {
		if (!(*(arr + i) % 2)) {
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");
}


//[C2-2] 프로그램 사용자로부터 10진수 형태로 양의 정수(0 포함)를 하나 입력 받은 다음, 2진수로 변환해 출력하는 프로그램
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
[C2-3] 길이가 10인 배열 선언, 총 10개의 정수 입력받음
홀수면 배열의 앞에서, 짝수면 뒤에서부터 채워나가는 형식
*/
void GetOddFrontEvenRear(void) {

	int arr[10];
	int l = 0, r = 9;

	printf("정수 10개를 입력해주세요\n");
	for (int i = 0; i < 10; ++i) {
		printf("입력 %d: ", i + 1);
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

