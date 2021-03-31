#include <stdio.h>

//[Q11-1_1] ���̰� 5�� int�� �迭���� 5�� ������ �Է¹ް� '�Է��� ���� ��', �Էµ� ���� �� �ִ�, �ּڰ�, �� ���� ������.
void GetMaxMinSum(void) {

	int integerArr[5];

	for (int i = 0; i < 5; ++i) {
		printf("%d��° ���� �Է� : ", i + 1);
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

	printf("�ִ�: %d, �ּڰ�: %d, ��: %d\n", max, min, sum);

	return;
}

//[Q11-1_2] char�� 1���� �迭 ������ ���ÿ� "Good time" ���� �ʱ�ȭ, �ʱ�ȭ ���� ����� ������ ����ϴ� ���� �ۼ�
void PrintGoodTime(void) {
	char goodTimeStr[] = "Good time";

	int idx = 0;
	while (goodTimeStr[idx] != '\0') {
		printf("%c", goodTimeStr[idx]);
		idx++;
	}

	return;
}

//[Q11-2_1] �ϳ��� ���ܾ �Է¹ް�, �Է� ���� ���ܾ��� ���̸� ����� ����ϴ� ���α׷��� �ۼ�����
void PrintStringLength(void) {
	printf("�ܾ� �ϳ�(256�� ����)�� �Է� : ");
	char str[256];

	scanf_s("%s", str, 256);

	int count = 0;
	int idx = 0;
	while (str[idx] != '\0') {
		count++;
		idx++;
	}

	printf("���ܾ��� ���̴� %d�Դϴ�.\n", count);

	return;
}

//[Q11-2_2] ���ܾ �Է¹޾� char�� �迭�� ���� ��, �迭�� ����� ���ܾ �������� �����´�. �� ���� ��ġ�� ����Ǽ� �ȵȴ�.
void PrintStringReverse(void) {
	printf("���ܾ �Է�(256�� ����) : ");
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

//[Q11-2_3] ���ܾ �Է¹ް� ���ܾ� ���� ���� �� �ƽ�Ű �ڵ� ���� ���� ū ���ڸ� ã�� ����ϴ� ���α׷�
void PrintMaxAscii(void) {
	printf("���ܾ �Է�(256�� ����) : ");
	char string[256];
	scanf_s("%s", string, 256);

	int max = 0;
	int idx = 0;
	while (string[idx] != '\0') {
		max = max < string[idx] ? string[idx] : max;
		idx++;
	}

	printf("���ܾ� �� �ְ� ASCII���� %c�Դϴ�.\n", max);

	return;
}