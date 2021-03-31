//도전! 프로그래밍1

//[C1-1] 10진수 정수를 입력 받아 16진수로 출력하는 프로그램
void TransIntToHex(void);

/*
 *	두 개의 정수를 받아 구구단 출력
 *	입력 순서와 상관없이 같은 결과를 출력
 */
void GetMultiplicationTable(void);

//[C1-3] 두 개의 정수를 입력 받아 최대공약수(GCD)를 구하는 프로그램
int GetGCD(int a, int b);

//[C1-4] 일정 돈으로 1개 이상씩 상품을 구매하며 잔돈 남기지 않는 경우의 수 구하기
void GetBuyingCases(void);

//[C1-5] count만큼의 소수를 출력하는 프로그램
void GetPrimeNumber(int count);

//[C1-6] 초(second)를 입력받은 후, [시, 분, 초]의 형태로 출력하는 프로그램
void TransSecondsToTimer(void);

//[C1-7] 사용자에게 숫자 n을 입력받는다. 2^k <= n을 성립하는 k의 최댓값을 계산해 출력하는 프로그램 작성
int GetMaximumPowerOfTwo(int n);

//[C1-8] 2의 n승을 구하는 재귀함수 구현
int GetPowerOfTwoRecursive(int n, int value);