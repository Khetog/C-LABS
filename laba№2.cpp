///* Задача 27 (Жёлтая карта):
//	Дан одномерный массив из N элементов. Вычислить количество элементов 
//	массива, меньших среднего арифметического всех элементов.
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//int main()
//{
//	int i, N, sum = 0,k=0;
//	float arifm = 0;
//	printf("Input size of array N: ");
//	scanf("%d", &N);				// размерность массива
//
//
//	while (N < 0 and N > 20) {
//		printf("Vvedite razmer povtorno");
//		scanf("%d", &N);
//	}
//
//		
//	int Arr[20];					// ввод данных массива
//	printf("Input elements of array: ");
//	for (i = 0; i < N; ++i) {
//		scanf("%d", &Arr[i]);
//		sum +=Arr[i];
//	}
//
//
//	arifm = sum / N;				// вычисление среднего арифметического
//
//
//	i = 0;
//	while (i < N) {					// подсчет кол-ва переменных, меньших, чем средн. арифм.
//		if (Arr[i] < arifm) k++;
//		i += 1;
//	}
//	printf("Result is: %d", k);
//}


//5-я лаба дан одномерный массив из N элементов. Вычислить количество элементов массива, меньших среднего арифметического всех элементов.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pamparam(int Arr[20], int N, int& k, float arif);

int vvod(int Arr[20], int& N) {
	printf("Input size of array: ");
	do {
		scanf("%d", &N);
	} while (N <= 0 || N > 20); 

	printf("Input elements: ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &Arr[i]);
	}

	return N;
}

void pamparam(int Arr[20], int N, int& k, float arif) {
	k = 0;
	for (int i = 0; i < N; i++) {
		if (Arr[i] < arif) {
			k += 1;
		}
	}
	printf("Result is: %d\n", k);
}

int main() {
	int Arr[20], N, k;
	float arif = 0.0, sum = 0.0;

	N = vvod(Arr, N);

	for (int i = 0; i < N; i++) {
		sum += Arr[i];
	}
	arif = sum / N;

	pamparam(Arr, N, k, arif);

	return 0;
}
