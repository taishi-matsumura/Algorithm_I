#include <stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);


// メイン関数
int main() {
	int data[] = { 5, 4, 3, 2, 1 };

	printf("ソート前の状態\n");
	PrintArray(data, 5);

	int tmp;
	int j;
	for (int i = 0; i <= 4; i++) {
		j = 4;
		while (j > i) {
			tmp = data[j];
			if (data[j - 1] > tmp) {
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}

			j--;
		
			PrintArray(data, 5);
		}
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
