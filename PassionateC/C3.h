//도전! 프로그래밍3

void Show2DArray(int(*arr)[4]);

/*
[C3-1] 길이가 4x4인 int형 2차원 배열을 선언
각 행이 1~4, 5~8, 9~12, 13~16이 되도록 초기화
각 배열의 요소를 90도씩 이동시켜서 결과를 출력하는 프로그램을 작성
*/
void Set4x4Arr(int arr[][4]);
void RotateR90Arr(int arr[][4]);

/*
 [C3-2] 달팽이 배열을 출력하는 함수
 숫자 n을 입력받은 후, n*n의 달팽이 배열 출력
*/
void PrintSnailArr(void);

/*
[C3-3] 0이상 RAND_MAX 이하의 난수 5개 생성 (범위 0~99)
*/
void PrintRand1To99(void);

/*
[C3-4] 두개의 주사위를 던졌을 때 결과를 출력하는 프로그램을 작성
(SRAND 함수와 TIME 함수를 활용)
*/
void GetDicesNum(int count);