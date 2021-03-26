#include <stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);
void SortArray(int data[], int size);


// メイン関数
int main() {
	int data[] = { 3,4,1,5,2 };

	printf("ソート前の状態：");
	PrintArray(data, 5);

	printf("\nソート開始\n");

	SortArray(data, 5);

}

void SortArray(int data[], int size) {

	for (int i = size - 1; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			int temp = data[i];
			if (temp < data[j]) {
				data[i] = data[j];
				data[j] = temp;
			}
		}
		PrintArray(data, size);
	}
}

/// <summary>
/// 配列の内容を画面に表示する
/// </summary>
/// <param name="data">表示する配列</param>
/// <param name="size">配列の要素数</param>
void PrintArray(int data[], int size) {
	printf("%d", data[0]);

	for (int i = 1; i < size; i++) {
		printf(", %d", data[i]);
	}

	printf("\n");
}
