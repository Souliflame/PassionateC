//도전! 프로그래밍3

void Show2DArray() {

}
/*
[C3-1] 길이가 4x4인 int형 2차원 배열을 선언
각 행이 1~4, 5~8, 9~12, 13~16이 되도록 쵝화
각 배열의 요소를 90도씩 이동시켜서 결과를 출력하는 프로그램을 작성
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