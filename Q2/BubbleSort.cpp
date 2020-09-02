#include <stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);


// メイン関数
int main() {
	int data[] = { 5, 4, 3, 2, 1 };

	printf("ソート前の状態：");
	PrintArray(data, 5);

	printf("\nソート開始\n");

	for (int i = 0; i <= 4; i++) {
		int temp = data[i];
		if (data[i - 1] > temp) {
			int j = i;
			do {
				data[j] = data[j - 1];
				j = j - 1;
			} while (j > 0 && data[j - 1] > temp);
			data[j] = temp;
		}

		PrintArray(data, 5);
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
