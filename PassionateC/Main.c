#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

#include "C1.h"
#include "C2.h"
#include "C3.h"

#include "Q11.h"
#include "Q13.h"
#include "Q14.h"
#include "Q16.h"
#include "Q17.h"

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
	printf("----------Q11-1_1----------\n");
	GetMaxMinSum();*/

	//Q11-1_2
	/*printf("\n");
	printf("----------Q11-1_2----------\n");
	PrintGoodTime();*/

	//Q11-2_1
	/*printf("\n");
	printf("----------Q11-2_1----------\n");
	PrintStringLength();*/

	//Q11-2_2
	/*printf("\n");
	printf("----------Q11-2_2----------\n");
	PrintStringReverse();*/

	//Q11-2_3
	/*printf("\n");
	printf("----------Q11-2_3----------\n");
	PrintMaxAscii();*/

	//Q13-1_1
	/*printf("\n");
	printf("----------Q13-1_1----------\n");
	accessArrayWithPointerToPlusAddress();*/

	//Q13-1_2
	/*printf("\n");
	printf("----------Q13-1_2----------\n");
	accessArrayWithPointerToPlusValue();*/

	//Q13-1_3
	/*printf("\n");
	printf("----------Q13-1_3----------\n");
	accessArrayWithPointerToMinusAddress();*/

	//Q13-1_4
	/*printf("\n");
	printf("----------Q13-1_4----------\n");
	accessArrayWithPointerToSwap();*/

	//Q14-1_1
	/*printf("\n");
	printf("----------Q14-1_1----------\n");

	{
		int num = 10;
		printf("%d의 제곱은 %d\n", num, SquareByValue(num));
		SquareByReference(&num);
		printf("Call by Reference로 제곱 %d", num);
	}*/

	//Q14-1_2
	/*printf("\n");
	printf("----------Q14-1_2----------\n");
	{
		int num1 = 10;
		int num2 = 20;
		int num3 = 30;
		printf("1번 %d, 2번 %d, 3번 %d > 1번 %d, 2번 %d, 3번 %d 로 변경\n", num1, num2, num3, num3, num1, num2);
		Swap3(&num1, &num2, &num3);
		printf("1번 %d, 2번 %d, 3번 %d\n", num1, num2, num3);
	}*/

	//C2-1
	/*{
		printf("\n");
		printf("----------C2-1----------\n");

		int* arr[10];
		const int* const ptr = &arr[0];
		for (int i = 0; i < 10; ++i) {
			printf("입력 %d:", i + 1);
			scanf_s("%d", (ptr + i));
		}

		PrintOddInArray(ptr, 10);
		PrintEvenInArray(ptr, 10);
	}*/

	//C2-2
	/*{
		printf("0을 포함한 양의 정수 입력: ");
		int num;
		scanf_s("%d", &num);
		PrintDecimalToBinary(num);
	}*/

	//C2-3
	/*{
	printf("\n");
	printf("----------C2-3----------\n");

	GetOddFrontEvenRear();
	}*/

	//C2-4
	/*{
		printf("\n");
		printf("----------C2-4----------\n");

		printf("문자열(32자 제한) 입력: ");
		char str[33];
		scanf_s("%s", str, sizeof(str));

		int idx = 0;
		while (true) {
			if (str[idx] == '\0') {
				break;
			}
			idx++;
		}

		CheckPalindrome(str, idx);
	}*/

	//C2-5
	/*{
		printf("\n");
		printf("----------C2-5----------\n");

		printf("정수 7개 입력\n");
		int arr[7];
		for (int i = 0; i < 7; ++i) {
			printf("입력 %d: ", i + 1);
			scanf_s("%d", &arr[i]);
		}

		BubbleSort(arr, 7, true);
		ShowArray(arr, 7);

		BubbleSort(arr, 7, false);
		ShowArray(arr, 7);
	}*/

	//Q16-1_1
	/*{
		printf("\n");
		printf("----------Q16-1_1----------\n");

		GetTablesOfTwoToFour();
	}*/

	//Q16-1_2
	/*{
		printf("\n");
		printf("----------Q16-1_2----------\n");

		GetMatrixRotated();
	}*/

	//Q16-1_3
	/*{
		printf("\n");
		printf("----------Q16-1_3----------\n");

		WriteRecord();
	}*/

	//Q17-1_1
	/*{
		printf("\n");
		printf("----------Q17-1_1----------\n");

		int* maxPtr;
		int* minPtr;
		int arr[5];

		for (int i = 0; i < 5; ++i) {
			printf("정수 입력 %d: ", i + 1);
			scanf_s("%d", &arr[i]);
		}

		MaxAndMin(&maxPtr, &minPtr, arr, 5);
		printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	}*/

	//C3-1
	/*{
		printf("\n");
		printf("----------C3-1----------\n");
		int arr[4][4];

		Set4x4Arr(arr);
		Show2DArray(arr);
		printf("\n");

		RotateR90Arr(arr);
		Show2DArray(arr);
		printf("\n");

		RotateR90Arr(arr);
		Show2DArray(arr);
		printf("\n");

		RotateR90Arr(arr);
		Show2DArray(arr);
		printf("\n");
	}*/

	//C3-2
	/*{
		printf("\n");
		printf("----------C3-2----------\n");

		PrintSnailArr();
	}*/

	//C3-3
	/*{
		printf("\n");
		printf("----------C3-3----------\n");

		PrintRand1To99();
	}*/

	//C3-4
	/*{
		printf("\n");
		printf("----------C3-4----------\n");

		int count;
		printf("주사위 갯수: ");
		scanf_s("%d", &count);

		GetDicesNum(count);
	}*/

	//C3-5
	/*{
		printf("\n");
		printf("----------C3-5----------\n");

		PlayRSP();
	}*/

	//C3-6
	/*{
		printf("\n");
		printf("----------C3-6----------\n");

		PlayBaseballGame();
	}*/

	//Q21-1_1
	{
		
	}

	return;
}