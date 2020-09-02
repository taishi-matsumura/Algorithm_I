#include <stdio.h>

// プロトタイプ宣言
void BubbleSort(int data[], int size);
void Swap(int data[], int right, int left);
void PrintArray(int data[], int size);


// メイン関数
int main() {
	int array[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int arraySize = sizeof(array) / sizeof(int);

	printf("ソート前の状態\n");
	PrintArray(array, arraySize);

	BubbleSort(array, arraySize);
}

/// <summary>
/// バブルソート処理の本体
/// </summary>
/// <param name="data">ソート対象の配列</param>
/// <param name="size">配列の要素数</param>
void BubbleSort(int data[], int size) {
}

/// <summary>
/// 配列内の2つの要素を入れ替える
/// </summary>
/// <param name="data">入れ替える対象を含む配列</param>
/// <param name="index1">入れ替え対象の要素番号</param>
/// <param name="index2">入れ替え対象の要素番号</param>
void Swap(int data[], int index1, int index2) {
	int tmp = data[index1];
	data[index1] = data[index2];
	data[index2] = tmp;
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
