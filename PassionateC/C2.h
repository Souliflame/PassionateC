//도전! 프로그래밍2

void ShowArray(int* arr, int len);

/*
[C2-1] 길이 10인 배열 선언, 총 10개의 정수 입력받음
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성, 홀수가 먼저 출력됨
10개의 정수는 main에서 입력받고 배열 내에 홀수만 출력, 배열내 짝수만 출력하는 함수로 두 함수를 호출하는 방식으로 프로그래밍
*/
void PrintOddInArray(const int* const arr, int length);
void PrintEvenInArray(const int* const arr, int length);

/*
[C2-2] 프로그램 사용자로부터 10진수 형태로 양의 정수(0 포함)를 하나 입력 받은 다음, 2진수로 변환해 출력하는 프로그램
*/
void PrintDecimalToBinary(int num);

/*
[C2-3] 길이가 10인 배열 선언, 총 10개의 정수 입력받음
홀수면 배열의 앞에서, 짝수면 뒤에서부터 채워나가는 형식
*/
void GetOddFrontEvenRear(void);

