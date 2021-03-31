#include <stdio.h>
#include <math.h>
#include "C1.h"
#include "Q11.h"
#include "Q13.h"
#include "Q14.h"

int main(void) {
	//C1-1(도전 프로그래밍1)
	/*TransIntToHex();
	*/

	//C1-2
	/*GetMultiplicationTable();
	*/

	//C1-3
	/*printf("\n");
	printf("----------C1-3----------\n");
	printf("두 정수를 입력 : ");
	int num1;
	int num2;
	scanf_s("%d%d", &num1, &num2);
	int gcd = GetGCD(num1, num2);
	printf("두 정수 %d %d의 최대공약수는 %d", num1, num2, gcd);*/

	//C1-4
	/*printf("\n");
	printf("----------C1-4----------\n");
	GetBuyingCases();*/

	//C1-5
	/*printf("\n");
	printf("----------C1-5----------\n");
	int count;
	printf("출력할 소수의 갯수 입력 : ");
	scanf_s("%d", &count);
	GetPrimeNumber(count);*/

	//C1-6
	/*printf("\n");
	printf("----------C1-6----------\n");
	TransSecondsToTimer();*/

	//C1-7
	/*printf("\n");
	printf("----------C1-7----------\n");
	printf("2^k <= n을 성립시키는 k의 최댓값을 구합니다.\n");
	printf("n을 입력 : ");
	int n;
	scanf_s("%d", &n);

	int k = GetMaximumPowerOfTwo(n);
	printf("2^k <= %d를 성립시키는 k의 최댓값\n", n);
	printf("k = %d, 2^%d = %d\n", k, k, (int)pow(2, k));*/

	//C1-8
	/*printf("\n");
	printf("----------C1-8----------\n");
	printf("n을 입력 : ");
	int n2;
	scanf_s("%d", &n2);

	int powerOfTwoValue = GetPowerOfTwoRecursive(n2, 1);
	printf("2 ^ %d = %d\n", n2, powerOfTwoValue);*/

	//Q11-1_1
	/*printf("\n");
	printf("----------C11-1_1----------\n");
	GetMaxMinSum();*/

	//Q11-1_2
	/*printf("\n");
	printf("----------C11-1_2----------\n");
	PrintGoodTime();*/

	//Q11-2_1
	/*printf("\n");
	printf("----------C11-2_1----------\n");
	PrintStringLength();*/

	//Q11-2_2
	/*printf("\n");
	printf("----------C11-2_2----------\n");
	PrintStringReverse();*/

	//Q11-2_3
	/*printf("\n");
	printf("----------C11-2_3----------\n");
	PrintMaxAscii();*/

	//Q13-1_1
	/*printf("\n");
	printf("----------C13-1_1----------\n");
	accessArrayWithPointerToPlusAddress();*/

	//Q13-1_2
	/*printf("\n");
	printf("----------C13-1_2----------\n");
	accessArrayWithPointerToPlusValue();*/

	//Q13-1_3
	/*printf("\n");
	printf("----------C13-1_3----------\n");
	accessArrayWithPointerToMinusAddress();*/

	//Q13-1_4
	/*printf("\n");
	printf("----------C13-1_4----------\n");
	accessArrayWithPointerToSwap();*/

	//Q14-1_1
	/*printf("\n");
	printf("----------C14-1_1----------\n");

	{
		int num = 10;
		printf("%d의 제곱은 %d\n", num, SquareByValue(num));
		SquareByReference(&num);
		printf("Call by Reference로 제곱 %d", num);
	}*/

	//Q14-1_2
	/*printf("\n");
	printf("----------C14-1_2----------\n");
	{
		int num1 = 10;
		int num2 = 20;
		int num3 = 30;
		printf("1번 %d, 2번 %d, 3번 %d > 1번 %d, 2번 %d, 3번 %d 로 변경\n", num1, num2, num3, num3, num1, num2);
		Swap3(&num1, &num2, &num3);
		printf("1번 %d, 2번 %d, 3번 %d\n", num1, num2, num3);
	}*/



	return;
}