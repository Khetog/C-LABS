//#define Black \033[0;30m
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<locale.h>
// 
//void raschet();
//int check_size(int N, int M);
//void input_array(int arr[20][20], int N, int M);
//
//int main() {
//	setlocale(LC_ALL, "ru_RU.KOI8-R");
//	
//	int i, j, N, M, playField[20][20];  // объявление переменных и массива
//
//	printf("Input size of array N*M: ");
//
//	do {
//		scanf("%d %d", &N, &M);
//	} while (check_size(N, M) == 0);    //Обращение к функции проверки массива
//
//	input_array(playField, N, M);		// Обращение к функции ввода массива
//
//	for (i = 0; i < N; i++) {			// Вывод заполненного массива
//		printf("\n");
//		for (j = 0; j < M; j++) {
//			printf("%d ", playField[i][j]);
//		}
//	}
//
//	printf("Choose place for mark (i x j): ");
//	scanf("%d %d", &i, &j);
//	for (i; i <= N; i++) {
//		for (j; j <= M; j++) {
//			raschet(N, M, playField, i, j);
//
//		}
//	}
//
//}
//
//int check_size(int N, int M) {
//	if ((N > 0 && N <= 20) || (N > 0 && N <= 20)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}				// проверка массива на допустимые значения
//
//void input_array(int arr[20][20], int N, int M) {
//	printf("Input elements: \n");
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			do {
//				scanf("%d", &arr[i][j]);
//			} while (arr[i][j] >= -100 && arr[i][j] <= 100); //ограничиваем допустимые значения
//		}													 //ввода  элементов в массив
//	}
//}
//
//void raschet(int N, int M, int playField[20][20], int ii, int jj) {
//	for (int ii; ii <= N; ii++) {
//		for (int jj = 0; jj <= M; jj++) {
//			if (ii == 3 && (jj > 2 && ii <= 5)) {
//				printf("\033[47;1m");
//				printf("| %d |", playField[ii][jj]);
//				printf("\033[0m");
//			}
//			else if (ii > 3 && jj == 3) {
//				printf("\033[47;1m");
//				printf("| %d |", playField[ii][jj]);
//				printf("\033[0m");
//			}
//			else if (ii == 6 && (jj >= 0 && jj <= 3)) {
//				printf("\033[47;1m");
//				printf("| %d |", playField[ii][jj]);
//				printf("\033[0m");
//			}
//			else {
//				printf("\033[44;1m");
//				printf("| %d |", playField[ii][jj]);
//				printf("\033[0m");
//			}
//
//		}
//	}
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define RED     "\033[0;31m"
#define RESET   "\033[0m"


int check_size(int N, int M);
void input_array(int arr[7][6], int N, int M);
void raschet(int N, int M, int playField[7][6], int start_i, int start_j, int *count);
void result(int count, int pos_i, int pos_j);

int main() {
  

    int N = 7, M = 6, playField[7][6]; // Размеры поля

    // Ввод и заполнение поля
    input_array(playField, N, M);

    // Вывод начального поля
    printf("initial field:\n");
    for (int i = 0; i < N; i++) {
        printf(" \n");
        for (int j = 0; j < M; j++) {
            if (i == 3 && (j > 2 && j <= 5)) {
                printf("\033[47;1m");
                printf("| %d |", playField[i][j]);
                printf("\033[0m");
            }
            else if (i > 3 && j == 3) {
                printf("\033[47;1m");
                printf("| %d |", playField[i][j]);
                printf("\033[0m");
            }
            else if (i == 6 && (j >= 0 && j <= 3)) {
                printf("\033[47;1m");
                printf("| %d |", playField[i][j]);
                printf("\033[0m");
            }
            else {
                printf("\033[44;1m");
                printf("| %d |", playField[i][j]);
                printf("\033[0m");
            }                                                   //Вывод массива
        }
    }

    int start_i, start_j;
    printf("specify the starting position of the markers  (i and j): ");
    scanf("%d %d", &start_i, &start_j);
    int pos_i = start_i;
    int pos_j = start_j;
    int count = 0;

    // Подсчет количества удовлетворяющих условию элементов
    raschet(N, M, playField, start_i, start_j, &count);

    // Вывод результатов
    
    result(count, pos_i, pos_j);

    
    return 0;
}

int check_size(int N, int M) {
    return (N > 0 && N <= 7) && (M > 0 && M <= 6);
}

void input_array(int arr[7][6], int N, int M) {
    printf("Input elements of array (7x6):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void raschet(int N, int M, int playField[7][6], int start_i, int start_j,int *count) {
    int k = 0;

    for (start_i; start_i < N; start_i++) {
        printf(" \n");
        for (int start_j = 0; start_j < M; start_j++) {
        	if (start_i == 3 && (start_j > 2 && start_i <= 5)) {
        		printf("\033[47;1m");
        		printf("| %d |", playField[start_i][start_j]);
        		printf("\033[0m");
                if (playField[start_i][start_j] > 0) k++;
        	}
        	else if (start_i > 3 && start_j == 3) {
        		printf("\033[47;1m");
        		printf("| %d |", playField[start_i][start_j]);
        		printf("\033[0m");
                if (playField[start_i][start_j] > 0) k++;
        	}
        	else if (start_i == 6 && (start_j >= 0 && start_j <= 3)) {
        		printf("\033[47;1m");
        		printf("| %d |", playField[start_i][start_j]);
        		printf("\033[0m");
                if (playField[start_i][start_j] > 0) k++;
        	}
        	else {
        		printf("\033[44;1m");
        		printf("| %d |", playField[start_i][start_j]);
        		printf("\033[0m");
        	}
        
        }
    }
    *count = k;
}

void result(int count, int pos_i, int pos_j){
    printf("\n");

    setlocale(LC_ALL, "ru_RU.KOI8-R");

    /*for (int i = 1; i <= 256; i++) {
        printf("%d - ", ch);
        printf("%c \n", ch);
        ch++;
    }*/
    printf(RED);
    for (int i = 0; i <= 20; i++) {
        if (!(i % 5) && (i != 0) && (i != 20)) {
            printf("%c", -53);
        }
        else if (i == 0) {
            printf("%c", -55);
        }
        else if (i == 20) { printf("%c", -69); }
        if (i != 20) { printf("%c", -51); }

    }
    printf(RESET "\n");
    printf(RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET "  %c  " RED "%c" RESET, -70, -4, -70, 105, -70, 106, -70, 67, -70);

    printf("\n" RED);
    for (int i = 0; i <= 20; i++) {
        if (!(i % 5) && (i != 0) && (i != 20)) {
            printf("%c", -50);
        }
        else if (i == 0) {
            printf("%c", -52);
        }
        else if (i == 20) { printf("%c", -71); }
        if (i != 20) { printf("%c", -51); }
    }
    printf(RESET "\n");

    printf(RESET);
    printf(RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET "  %d  " RED "%c" RESET "\n", -70, 1, -70, pos_i, -70, pos_j, -70, count, -70);

    printf(RED);
    for (int i = 0; i <= 20; i++) {
        if (!(i % 5) && (i != 0) && (i != 20)) {
            printf("%c", -54);
        }
        else if (i == 0) {
            printf("%c", -56);
        }
        else if (i == 20) { printf("%c", -68); }
        if (i != 20) { printf("%c", -51); }
    }
    printf(RESET);
}