/*
[Q14-1_1] num�� ����� ���� ������ ����ϴ� �Լ� ����
�ΰ��� ���·� Call-by-value ���(������ ���ڷ� ����), Call-by-reference ���(�ּҸ� ���ڷ� ����)
*/
int SquareByValue(int num);
void SquareByReference(int* numPtr);

// [Q14-1_2] �� ������ ����� ���� ���� ��ȯ�ϴ� �Լ�, num1 > num2 > num3 > num1
void Swap3(int* num1, int* num2, int* num3);

// [Q14-2_1] �Ʒ� �Լ����� const ������ �� ������?
void ShowAllData(const int* arr, int len);

// [Q14-2_2] �Ʒ� �������� �����Ҹ��� ������ �����ΰ�?
void ShowData(const int* ptr);