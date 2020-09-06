#include <stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);
void BubbleSort(int data[], int ArraySize);
void Swap(int* Swap_target, int* Swap_base);

// メイン関数
int main() {
	int data[] = { 5, 3, 1, 8, 2, 4, 6 };
	int ArraySize = sizeof(data) / sizeof(int);

	printf("ソート前の状態\n");
	PrintArray(data, ArraySize);
	printf("ソート後の状態\n");
	BubbleSort(data, ArraySize);

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

void BubbleSort(int data[], int ArraySize)
{
	int Element_number_MAX = ArraySize - 1;
	for (int i = 0; i < ArraySize; i++) {
		for (int j = Element_number_MAX; j > i; j--) {
			if (data[j] < data[j - 1]) {
				Swap(&data[j - 1], &data[j]);
			}
			PrintArray(data, ArraySize);
		}
	}
}

void Swap(int* Swap_target, int* Swap_base)
{
	int tmp = *Swap_base;
	*Swap_base = *Swap_target;
	*Swap_target = tmp;
}

