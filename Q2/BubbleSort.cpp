#include <stdio.h>

// プロトタイプ宣言
void BubbleSort(int data[], int size);
void Swap(int* number_X, int* number_Y);

// 配列の要素数を定義
#define DATA_MAX 9

// 値の０を示す
int num = 0;

// ソート内のループが何回回っているか図るための変数
int count = 0;

// メイン関数
int main()
{
	int array[DATA_MAX] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	printf("ソート前の状態\n");
	printf("%d", array[num]);
	for (int i = 1; i < DATA_MAX; i++)
	{
		printf(", %d", array[i]);
	}

	printf("\n");

	BubbleSort(array, DATA_MAX);

	printf("\n%d回ループした\n", count);
	printf("\n");

	printf("ソート後の状態\n");
	printf("%d", array[num]);
	for (int j = 1; j < DATA_MAX; j++)
	{
		printf(", %d", array[j]);
	}
	printf("\n");
}

/// <summary>
/// バブルソート処理の本体
/// </summary>
/// <param name="data">ソート対象の配列</param>
/// <param name="size">配列の要素数</param>
void BubbleSort(int data[], int size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		count++;
		for (j = size - 1; j > i; j--)
		{
			if (data[j] < data[j - 1])
			{
				Swap(&data[j], &data[j - 1]);
			}
		}
	}
}

/// <summary>
/// 配列内の2つの要素を入れ替える
/// </summary>
/// <param name="data">入れ替える対象を含む配列</param>
/// <param name="index1">入れ替え対象の要素番号</param>
/// <param name="index2">入れ替え対象の要素番号</param>
void Swap(int* number_X, int* number_Y)
{
	int temp = *number_X;
	*number_X = *number_Y;
	*number_Y = temp;
}
