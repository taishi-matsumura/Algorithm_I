#include <stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);


// メイン関数
int main() {
	int data[] = { 9,2,4,1,3 };

	printf("ソート前の状態：");
	PrintArray(data, 5);

	printf("\nソート開始\n");

	for (int i = 0; i <= 4; i++) {
		for (int j = i + 1; j <= 4; j++) {
			int temp = data[i];
			if (temp > data[j]) {
				data[i] = data[j];
				data[j] = temp;
			}
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
