//����! ���α׷���3

void Show2DArray() {

}
/*
[C3-1] ���̰� 4x4�� int�� 2���� �迭�� ����
�� ���� 1~4, 5~8, 9~12, 13~16�� �ǵ��� ��ȭ
�� �迭�� ��Ҹ� 90���� �̵����Ѽ� ����� ����ϴ� ���α׷��� �ۼ�
*/
int(*Set4x4Arr(void))[4] {

	int arr[4][4];

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			arr[i][j] = (4 * i) + j + 1;
		}
	}

	return arr;
}

void Rotate90R2DIntArr(int arr[][4], int len) {

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			
		}
	}
}