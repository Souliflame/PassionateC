//����! ���α׷���3

void Show2DArray(int(*arr)[4]);

/*
[C3-1] ���̰� 4x4�� int�� 2���� �迭�� ����
�� ���� 1~4, 5~8, 9~12, 13~16�� �ǵ��� �ʱ�ȭ
�� �迭�� ��Ҹ� 90���� �̵����Ѽ� ����� ����ϴ� ���α׷��� �ۼ�
*/
void Set4x4Arr(int arr[][4]);
void RotateR90Arr(int arr[][4]);

/*
 [C3-2] ������ �迭�� ����ϴ� �Լ�
 ���� n�� �Է¹��� ��, n*n�� ������ �迭 ���
*/
void PrintSnailArr(void);

/*
[C3-3] 0�̻� RAND_MAX ������ ���� 5�� ���� (���� 0~99)
*/
void PrintRand1To99(void);

/*
[C3-4] �ΰ��� �ֻ����� ������ �� ����� ����ϴ� ���α׷��� �ۼ�
(SRAND �Լ��� TIME �Լ��� Ȱ��)
*/
void GetDicesNum(int count);