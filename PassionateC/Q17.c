#include <stdio.h>

/*
[Q17-1_1] 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언(int* maxPtr, int* minPtr, int arr[5])
MaxAndMin 이름의 함수를 정의하고 이를 호출하며 위의 배열과 두 포인터 변수에 대한 정보를 전달
함호출이 완료됐을 때 포인터 변수 maxPtr엔 가장 큰 값이 저장된 배열요소의 주소 값이, minPtr에는 가장 작은 값이 저장된 배열요소의 주소값이 저장
*/
void MaxAndMin(int** maxPtr, int** minPtr, int* arr, int size) {
	int* max;
	int* min;
	max = min = &arr[0];

	for (int i = 0; i < size; ++i) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*maxPtr = max;
	*minPtr = min;
}