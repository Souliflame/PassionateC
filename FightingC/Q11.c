#include <stdio.h>

//[Q11-1_1] 길이가 5인 int형 배열에서 5개 정수를 입력받고 '입력이 끝난 뒤', 입력된 정수 중 최댓값, 최솟값, 총 합을 구하자.
void GetMaxMinSum(void) {

	int integerArr[5];

	for (int i = 0; i < 5; ++i) {
		printf("%d번째 정수 입력 : ", i + 1);
		scanf_s("%d", &integerArr[i]);
	}

	int max = integerArr[0];
	int min = integerArr[0];
	int sum = integerArr[0];
	for (int i = 1; i < 5; ++i) {
		max = max < integerArr[i] ? integerArr[i] : max;
		min = min > integerArr[i] ? integerArr[i] : min;
		sum += integerArr[i];
	}

	printf("최댓값: %d, 최솟값: %d, 합: %d\n", max, min, sum);

	return;
}

//[Q11-1_2] char형 1차원 배열 선원과 동시에 "Good time" 으로 초기화, 초기화 이후 저장된 내용을 출력하는 예제 작성
void PrintGoodTime(void) {
	char goodTimeStr[] = "Good time";

	int idx = 0;
	while (goodTimeStr[idx] != '\0') {
		printf("%c", goodTimeStr[idx]);
		idx++;
	}

	return;
}

//[Q11-2_1] 하나의 영단어를 입력받고, 입력 받은 영단어의 길이를 계산해 출력하는 프로그램을 작성하자
void PrintStringLength(void) {
	printf("단어 하나(256자 제한)를 입력 : ");
	char str[256];

	scanf_s("%s", str, 256);

	int count = 0;
	int idx = 0;
	while (str[idx] != '\0') {
		count++;
		idx++;
	}

	printf("영단어의 길이는 %d입니다.\n", count);

	return;
}

//[Q11-2_2] 영단어를 입력받아 char형 배열에 저장 후, 배열에 저장된 영단어를 역순으로 뒤집는다. 널 문자 위치는 변경되선 안된다.
void PrintStringReverse(void) {
	printf("영단어를 입력(256자 제한) : ");
	char string[256];
	scanf_s("%s", string, 256);

	int count = 0;
	int idx = 0;
	while (string[idx] != '\0') {
		count++;
		idx++;
	}

	for (idx = 0; idx < count / 2; ++idx) {
		char temp = string[idx];
		string[idx] = string[count - idx - 1];
		string[count - idx - 1] = temp;
	}

	idx = 0;
	while (string[idx] != '\0') {
		printf("%c", string[idx]);
		idx++;
	}
}

//[Q11-2_3] 영단어를 입력받고 영단어 구성 문자 중 아스키 코드 값이 가장 큰 문자를 찾아 출력하는 프로그램
void PrintMaxAscii(void) {
	printf("영단어를 입력(256자 제한) : ");
	char string[256];
	scanf_s("%s", string, 256);

	int max = 0;
	int idx = 0;
	while (string[idx] != '\0') {
		max = max < string[idx] ? string[idx] : max;
		idx++;
	}

	printf("영단어 중 최고 ASCII값은 %c입니다.\n", max);

	return;
}