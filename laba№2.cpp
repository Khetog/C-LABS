/* Задача 27 (Жёлтая карта):
	Дан одномерный массив из N элементов. Вычислить количество элементов 
	массива, меньших среднего арифметического всех элементов.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, N, sum = 0, k = 0;
	float arifm = 0;
	printf("Input size of array N: ");
	scanf("%d", &N);				// размерность массива

	while ((N < 1) or (N > 20)) {
		printf("Input another size of array: ")
		scanf("%d", &N);
	}

		
	int Arr[20];					// ввод данных массива
	printf("Input elements of array: ");
	while (i < N) {
		scanf("%d", &Arr[i]);
		sum += Arr[i];
		i++;
	}

	arifm = sum / N;				// вычисление среднего арифметического


	i = 0;
	while (i < N) {					// подсчет кол-ва переменных, меньших, чем средн. арифм.
		if (Arr[i] < arifm) k++;
		i += 1;
	}
	printf("Result is: %d", k);
}




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


//AAA,sdsa.asdAAA.sac,asc

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("Input text string: ");
    int ch;
    int prevCh = ' '; // Предыдущий символ, начальное значение - пробел

    while ((ch = getchar()) != '\n)') {
        if ((ch != ',' and ch != '.' and ((ch < 65 and ch > 90) or (ch < 97 and ch > 122)))) {
            printf("Input text again: ");
        }
        else {
        }
        if (ch == '.' && prevCh >= 'a' && prevCh <= 'z') {
            prevCh -= 32;  // Преобразуем строчную букву перед точкой в заглавную
        }
        else if (ch == ',' && prevCh >= 'A' && prevCh <= 'Z') {
            prevCh += 32;  // Преобразуем заглавную букву перед запятой в строчную
        }
        putchar(prevCh);
        prevCh = ch; // Сохраняем текущий символ для последующей проверки
    }

    return 0;
}
