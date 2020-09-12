#include <stdio.h>

// プロトタイプ宣言
void BubbleSort(int data[], int size);
void PrintArray(int data[], int size);


// メイン関数
int main() {
	int array[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int arraySize = sizeof(array) / sizeof(int);

	printf("ソート前の状態：");
	PrintArray(array, arraySize);

	printf("\nソート開始\n");
	BubbleSort(array, arraySize);
}

/// <summary>
/// バブルソート処理の本体
/// </summary>
/// <param name="data">ソート対象の配列</param>
/// <param name="size">配列の要素数</param>
void BubbleSort(int data[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j > i; j--) {
			if (data[j - 1] > data[j]) {
				int tmp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = tmp;
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
