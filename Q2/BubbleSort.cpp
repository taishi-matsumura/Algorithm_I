#include<stdio.h>

// プロトタイプ宣言
void PrintArray(int data[], int size);
void BubbleSort(int data[], int ArraySize);
void Swap(int* SwapTarget, int* SwapBase);


const int ElementNumberMIN = 0;		//要素番号の最初は確定で０、かつ変動しないのでグローバル変数に

// メイン関数
int main() {
	int data[] = { 5, 3, 1, 8, 2, 9, 4, 6, 7 };
	int ArraySize = sizeof(data) / sizeof(int);		//要素数＝要素/要素１つ当たりの長さ（のイメージ）

	printf("ソート前の状態\n");
	PrintArray(data, ArraySize);
	printf("ソート後の状態\n");
	BubbleSort(data, ArraySize);
	PrintArray(data, ArraySize);
}

/// <summary>
/// 配列の内容を画面に表示する
/// </summary>
/// <param name="data">表示する配列</param>
/// <param name="size">配列の要素数</param>
void PrintArray(int data[], int ArraySize) {
	printf("%d", data[ElementNumberMIN]);
	for (int i = 1; i < ArraySize; i++) {
		printf(", %d", data[i]);
	}

	printf("\n");
}

/// <summary>
/// バブルソートの処理を行う
/// </summary>
/// <param name="data">ソート対象の配列</param>
/// <param name="ArraySize">配列の要素数</param>
void BubbleSort(int data[], int ArraySize)
{
	int ElementNumberMAX = ArraySize - 1;
	for (int i = ElementNumberMIN; i < ArraySize; i++) {
		for (int j = ElementNumberMAX; j > i; j--) {		//j,j-1を置き換えることも考えたけれど
			if (data[j] < data[j - 1]) {					//弄ることもない上に見た目もわかりやすいのでこのままに
				Swap(&data[j - 1], &data[j]);
			}
		}
	}
}

/// <summary>
/// 配列の要素を入れ替える
/// </summary>
/// <param name="Swap_target">入れ替え対象の要素</param>
/// <param name="Swap_base">入れ替えの基となる要素</param>
void Swap(int* SwapTarget, int* SwapBase)
{
	int tmp = *SwapBase;
	*SwapBase = *SwapTarget;
	*SwapTarget = tmp;
}

