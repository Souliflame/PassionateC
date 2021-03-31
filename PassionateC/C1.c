#include <stdio.h>
#include <math.h>

//����! ���α׷���1

//[C1-1] 10���� ������ �Է� �޾� 16������ ����ϴ� ���α׷�
void TransIntToHex(void) {
	int input;

	printf("10���� ���� �Է�: ");
	scanf_s("%d", &input);
	printf("16������ ��ȯ ���: ");
	printf("%X\n", input);
}

/*
* [C1-2]
* �ΰ��� ������ �޾� ������ ���
* �Է� ������ ������� ���� ����� ���
*/
void GetMultiplicationTable(void) {
	int from;
	int to;

	while (1) {
		printf("ù ��° ������ ���� �Է�: ");
		scanf_s("%d", &from);
		printf("\n");

		printf("�� ��° ������ ���� �Է�: ");
		scanf_s("%d", &to);
		printf("\n");

		if (from >= 1 && to >= 1 && from <= 9 && to <= 9) {
			break;
		}
		printf("�߸��� ���ڰ� �Էµƽ��ϴ�.\n");
		printf("1 ~ 9 ������ ���ڸ� �Է����ּ���.\n");
		printf("----------Input----------\n");
	}

	int temp;
	if (from > to) {
		temp = from;
		from = to;
		to = temp;
	}

	for (int i = from; i <= to; ++i) {
		printf("%d���� ������\n", i);
		for (int j = 1; j <= 9; ++j) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

//[C1-3] �� ���� ������ �Է� �޾� �ִ�����(GCD)�� ���ϴ� ���α׷�
int GetGCD(int a, int b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	//��Ŭ���� ȣ��(���� ������)�� ���
	return (a % b == 0) ? b : GetGCD(b, a % b);
}

//[C1-4] ���� ������ 1�� �̻� ��ǰ�� �����ϸ� �ܵ� ������ �ʴ� ����� �� ���ϱ�
void GetBuyingCases(void) {
	//���� 3500��, ũ���� ���� 500��, ����� 700��, �ݶ� 400������ ����

	int money = 3500;	//���� 3500��
	int goods1 = 500;	//ũ���� ���� 500��
	int goods2 = 700;	//����� ���� 700��
	int goods3 = 400;	//�ݶ� ���� 400��

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
					printf("ũ���� %d��(%d * %d = %d)\n", i, i, goods1, money1);
					printf("����� %d��(%d * %d = %d)\n", j, j, goods2, money2);
					printf("�ݶ� %d��(%d * %d = %d)\n", k, k, goods3, money3);
					printf("�� %d�� �Դϴ�.\n\n", total);
				}
			}
		}
	}

}

//[C1-5] count��ŭ�� �Ҽ��� ����ϴ� ���α׷�
void GetPrimeNumber(int count) {
	int primeCount = 0;
	int num = 2;
	int sqrtNum;

	printf("�Ҽ� %d���� ���\n", count);
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

//[C1-6] ��(second)�� �Է¹��� ��, [��, ��, ��]�� ���·� ����ϴ� ���α׷�
void TransSecondsToTimer(void) {
	int second;
	printf("��(second)�� �Է� : ");
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

//[C1-7] ����ڿ��� ���� n�� �Է¹޴´�. 2^k <= n�� �����ϴ� k�� �ִ��� ����� ����ϴ� ���α׷� �ۼ�
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

//[C1-8] 2�� n���� ���ϴ� ����Լ� ����
int GetPowerOfTwoRecursive(int n, int value) {
	if (n == 0) {
		return value;
	}

	return GetPowerOfTwoRecursive(n - 1, value * 2);
}