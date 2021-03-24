#include <stdio.h>
#include <math.h>

//도전! 프로그래밍1

//[C1-1] 10진수 정수를 입력 받아 16진수로 출력하는 프로그램
void TransIntToHex(void) {
	int input;

	printf("10진수 정수 입력: ");
	scanf_s("%d", &input);
	printf("16진수로 변환 출력: ");
	printf("%X\n", input);
}

/*
* [C1-2]
* 두개의 정수를 받아 구구단 출력
* 입력 순서와 상관없이 같은 결과를 출력
*/
void GetMultiplicationTable(void) {
	int from;
	int to;

	while (1) {
		printf("첫 번째 구구단 숫자 입력: ");
		scanf_s("%d", &from);
		printf("\n");

		printf("두 번째 구구단 숫자 입력: ");
		scanf_s("%d", &to);
		printf("\n");

		if (from >= 1 && to >= 1 && from <= 9 && to <= 9) {
			break;
		}
		printf("잘못된 숫자가 입력됐습니다.\n");
		printf("1 ~ 9 사이의 숫자를 입력해주세요.\n");
		printf("----------Input----------\n");
	}

	int temp;
	if (from > to) {
		temp = from;
		from = to;
		to = temp;
	}

	for (int i = from; i <= to; ++i) {
		printf("%d단의 구구단\n", i);
		for (int j = 1; j <= 9; ++j) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

//[C1-3] 두 개의 정수를 입력 받아 최대공약수(GCD)를 구하는 프로그램
int GetGCD(int a, int b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	//유클리드 호제(서로 나누기)법 사용
	return (a % b == 0) ? b : GetGCD(b, a % b);
}

//[C1-4] 일정 돈으로 1개 이상씩 상품을 구매하며 잔돈 남기지 않는 경우의 수 구하기
void GetBuyingCases(void) {
	//돈은 3500원, 크림빵 개당 500원, 새우깡 700원, 콜라 400원으로 가정

	int money = 3500;	//돈은 3500원
	int goods1 = 500;	//크림빵 개당 500원
	int goods2 = 700;	//새우깡 개당 700원
	int goods3 = 400;	//콜라 개당 400원

	int budgetFor1 = money - (goods2 + goods3);

	for (int i = 1; budgetFor1 >= i * goods1; ++i) {
		int budgetFor2 = money - ((i * goods1) + goods3);
		for (int j = 1; budgetFor2 >= j * goods2; ++j) {
			int budgetFor3 = money - ((i * goods1) + (j * goods2));
			for (int k = 1; budgetFor3 >= k * goods3; ++k) {
				int money1 = i * goods1;
				int money2 = j * goods2;
				int money3 = k * goods3;
				int total = money1 + money2 + money3;

				if (money - total == 0) {
					printf("크림빵 %d개(%d * %d = %d)\n", i, i, goods1, money1);
					printf("새우깡 %d개(%d * %d = %d)\n", j, j, goods2, money2);
					printf("콜라 %d개(%d * %d = %d)\n", k, k, goods3, money3);
					printf("총 %d원 입니다.\n\n", total);
				}
			}
		}
	}

}

//[C1-5] count만큼의 소수를 출력하는 프로그램
void GetPrimeNumber(int count) {
	int primeCount = 0;
	int num = 2;
	int sqrtNum;

	printf("소수 %d개를 출력\n", count);
	while (primeCount < count) {
		int divisorCount = 0;
		sqrtNum = (int)sqrt(num);

		for (int i = 1; i <= sqrtNum; ++i) {
			if (num % i == 0) {
				divisorCount++;
			}
		}

		if (divisorCount == 1) {
			printf("%d ", num);
			primeCount++;
		}

		num++;
	}
}

//[C1-6] 초(second)를 입력받은 후, [시, 분, 초]의 형태로 출력하는 프로그램
void TransSecondsToTimer(void) {
	int second;
	printf("초(second)를 입력 : ");
	scanf_s("%d", &second);

	printf("\n");
	const int UNIT_HOUR = 3600;
	const int UNIT_MINITE = 60;
	int hour = second / UNIT_HOUR;
	second = second - (hour * UNIT_HOUR);
	int minite = second / UNIT_MINITE;
	second = second - (minite * UNIT_MINITE);

	printf("[h:%d, m:%d, s:%d]", hour, minite, second);
}

//[C1-7] 사용자에게 숫자 n을 입력받는다. 2^k <= n을 성립하는 k의 최댓값을 계산해 출력하는 프로그램 작성
int GetMaximumPowerOfTwo(int n) {
	int k = 0;
	int max = 1;
	while (n >= max) {
		if ((max << 1) > n) {
			break;
		}
		max <<= 1;
		++k;
	}
	return k;
}

//[C1-8] 2의 n승을 구하는 재귀함수 구현
int GetPowerOfTwoRecursive(int n, int value) {
	if (n == 0) {
		return value;
	}

	return GetPowerOfTwoRecursive(n - 1, value * 2);
}