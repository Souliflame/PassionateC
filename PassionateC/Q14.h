/*
[Q14-1_1] num에 저장된 값의 제곱을 계산하는 함수 정의
두가지 형태로 Call-by-value 기반(정수를 인자로 받음), Call-by-reference 기반(주소를 인자로 받음)
*/
int SquareByValue(int num);
void SquareByReference(int* numPtr);

// [Q14-1_2] 세 변수에 저장된 값을 서로 교환하는 함수, num1 > num2 > num3 > num1
void Swap3(int* num1, int* num2, int* num3);

// [Q14-2_1] 아래 함수에서 const 선언을 한 이유가?
void ShowAllData(const int* arr, int len);

// [Q14-2_2] 아래 예제에서 지적할만한 사항은 무엇인가?
void ShowData(const int* ptr);