/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

void clear_input_buffer();
int check_size(int N, int M);
void input_array(int playField[20][20], int N, int M);
void raschet(int N, int M, int playField[20][20], int start_i, int start_j, int prog_it);

int main(){
    int N, M, playField[20][20];
    printf("Vvodi razmer:");
    do {
        if (scanf("%d %d", &N, &M) != 2) {
            printf("Invalid input. Please enter two numbers.\n");
            clear_input_buffer();
        }
    } while (!check_size(N, M));

    input_array(playField, N, M);

    int prog_it = 1;
    int return_prog = 0;

neprroknulo:
    if (return_prog == 0) printf("\n"); {

    } 
    if (return_prog == 1) {
        printf(RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET "  %c  " RED "%c" RESET "\n", -70, -4, -70, 105, -70, 106, -70, 67, -70);
    }// Если метка была введена неправильно, строка начинает вывод по-новому


    printf(RED);// Выводим крышку таблицы
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
    printf(RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET "  %c  " RED "%c" RESET "\n", -70, -4, -70, 105, -70, 106, -70, 67, -70);
    //Вывели верхнюю часть таблицы
    for (prog_it; prog_it < 10; prog_it++) {
        printf(RED);
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
        printf(RESET);
        int start_i, start_j;

        // ограничение ввода маркера, !!!НАЧАЛО!!!
        do {
            scanf("%d %d", &start_i, &start_j);
            if (start_i > N || start_i <= 0 || start_j > M || start_j <= 0) {
                return_prog = 0;
                printf("Mark is outside the field, input mark again \n");
                goto neprroknulo;
            }
        } while (start_i > N || start_i < 0 || start_j >M || start_j < 0); // ограничение ввода маркера, !!!КОНЕЦ!!!
        raschet(N, M, playField, start_i, start_j, prog_it);
    }
}

int check_size(int N, int M) {
    if (N > 0 && N <= 20 && M > 0 && M <= 20) {
        return 1;
    }
    else {
        printf("Try again: ");
        return 0;
    }
}


void input_array(int playField[20][20], int N, int M) {
    printf("Input elements of array (NxM):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &playField[i][j]);
        }
    }
}

void raschet(int N, int M, int playField[20][20], int start_i, int start_j, int prog_it) {
    int k = 0;
    int i = start_i - 1;
    int j = start_j - 1;

    for (i; i < N; i++) {
        for (j; j < M; j++) {
            if (i == 3 && (j >= 3 && j <= 5)) { if (playField[i][j] > 0) k++; }
            if (j == 3 && (i >= 4 && i <= 6)) { if (playField[i][j] > 0) k++; }
            if (i == 6 && (j >= 0 && j < 3)) { if (playField[i][j] > 0) k++; }
        }
        // Сбрасываем j на начальное значение для следующей строки
        j = 0;
    }
    if (k >= 10) {
        printf(RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET " %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
    else if (k >= 10 && prog_it >= 10) {
        printf(RED "%c" RESET  " %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET " %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
    else {
        printf(RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET "  %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
}
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

void clear_input_buffer();
int check_size(int N, int M);
void input_array(int playField[20][20], int N, int M);
void raschet(int N, int M, int playField[20][20], int start_i, int start_j, int prog_it);


int main(){
    int N, M, playField[20][20];
    printf("Vvodi razmer:");
    do {
        if (scanf("%d %d", &N, &M) != 2) {
            printf("Invalid input. Please enter two numbers.\n");
            clear_input_buffer();
        }
    } while (!check_size(N, M));

    input_array(playField, N, M);

    int prog_it = 1;
    int return_prog = 0;

neprroknulo:
    if (return_prog == 0) printf("\n"); {

    } 
    if (return_prog == 1) {
        printf(RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET "  %c  " RED "%c" RESET "\n", -70, -4, -70, 105, -70, 106, -70, 67, -70);
    }// Если метка была введена неправильно, строка начинает вывод по-новому


    printf(RED);// Выводим крышку таблицы
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
    printf(RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET  "  %c  " RED "%c" RESET "  %c  " RED "%c" RESET "\n", -70, -4, -70, 105, -70, 106, -70, 67, -70);
    //Вывели верхнюю часть таблицы
    for (prog_it; prog_it < 10; prog_it++) {
        printf(RED);
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
        printf(RESET);
        int start_i, start_j;

        // ограничение ввода маркера, !!!НАЧАЛО!!!
        do {
            scanf("%d %d", &start_i, &start_j);
            if (start_i > N || start_i <= 0 || start_j > M || start_j <= 0) {
                return_prog = 0;
                printf("Mark is outside the field, input mark again \n");
                goto neprroknulo;
            }
        } while (start_i > N || start_i < 0 || start_j >M || start_j < 0); // ограничение ввода маркера, !!!КОНЕЦ!!!
        raschet(N, M, playField, start_i, start_j, prog_it);
    }
}

int check_size(int N, int M) {
    if (N > 0 && N <= 20 && M > 0 && M <= 20) {
        return 1;
    }
    else {
        printf("Try again: ");
        return 0;
    }
}

void input_array(int playField[20][20], int N, int M) {
    printf("Input elements of array (NxM):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &playField[i][j]);
        }
    }
}

void raschet(int N, int M, int playField[20][20], int start_i, int start_j, int prog_it) {
    int k = 0;
    int i = start_i - 1;
    int j = start_j - 1;

    for (i; i < N; i++) {
        for (j; j < M; j++) {
            if (i == 3 && (j >= 3 && j <= 5)) { if (playField[i][j] > 0) k++; }
            if (j == 3 && (i >= 4 && i <= 6)) { if (playField[i][j] > 0) k++; }
            if (i == 6 && (j >= 0 && j < 3)) { if (playField[i][j] > 0) k++; }
        }
        // Сбрасываем j на начальное значение для следующей строки
        j = 0;
    }
    if (k >= 10) {
        printf(RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET " %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
    else if (k >= 10 && prog_it >= 10) {
        printf(RED "%c" RESET  " %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET " %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
    else {
        printf(RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET  "  %d  " RED "%c" RESET "  %d  " RED "%c" RESET "\n", -70, prog_it, -70, start_i, -70, start_j, -70, k, -70);
    }
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
