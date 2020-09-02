#include <stdio.h>

// 問1 (2)
// これは「挿入ソート」
void Sort(int data[], int arraySize) {
	for (int i = 1; i < arraySize; i++) {
		int tmp = data[i];

		if (data[i - 1] > tmp) {
			int j = i;

			do {
				data[j] = data[j - 1];
				j--;

				// 問1 (1)
				// この時点でのi、j、data[]の値を表示する
				printf("i = %d, j = %d, data = {", i, j);
				for (int index = 0; index < arraySize; index++) {
					printf(" %d", data[index]);
				}
				printf("}\n");

			} while (j > 0 && data[j - 1] > tmp);

			data[j] = tmp;
		}
	}
}

int main() {
	int array[] = { 3,1,5,4,2 };

	Sort(array, sizeof(array) / sizeof(int));
}
