#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

struct stone {
	char name[20];
	int age;
	char yearoflocation[20];  
	char birthplace[50];
	int weight;
	char gender[20];
};

void sort_by(struct stone* database, int num_stones, int choice);
void print_stone(struct stone x, int);
void Complete();
void read_from_txt(const char* filename, struct stone* database, int* num_stones);
void write_to_file(struct stone* database, int num_stones);


void print_stone(struct stone s, int num) {

	for (int i = 0; i < 113; i++) {
		if (i == 16 || i == 32 || i == 48 || i == 64 || i == 80 || i == 96) {
			printf("%c", -50);
		}
		if (i == 0) {
			printf("%c", -52);
		}
		if (i == 112) {
			printf("%c", -71);
		}
		else {
			printf("%c", -51);
		}
	}printf("\n");
	
	printf("%c", -70);
	printf("%-16d", num);
	printf("%c", -70);
	printf("%-16s", s.name);
	printf("%c", -70);
	printf("%-16d", s.age);
	printf("%c", -70);
	printf("%-16s", s.yearoflocation);
	printf("%c", -70);
	printf("%-16s", s.birthplace);
	printf("%c", -70);
	printf("%-16d", s.weight);
	printf("%c", -70);
	printf("%-16s", s.gender);
	printf("%c", -70);
	printf("\n");

}

int main() {
	int max_stones = 10; // Максимальное количество камней
	struct stone database[10];
	int num_stones = 0; // Текущее количество камней

	while (1) {
		int choice;
		printf("\nWelcome to stones database ^_^ \nList of commands: \n");
		printf("1. Add a stone \n2 Add a certain number of stones (No complete) \n3. Edit a stone \n4. Delete a stone \n5. Display all stones \n6. Display a stone \n7. Write Data into file \n8. Read from file (No complete) \n9. Sort database \n10. Exit\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			system("cls");
			char input[20];
			int count;

			do {
				printf("Enter quantity stones, which you want to add: ");
				scanf("%s", &input);
				system("cls");

				if (isdigit(input[0])) {
					count = atoi(input); // Преобразование строки в целое число
					break;
				}
				else {
					system("cls");
					printf("Invalid input. Please enter a number.\n");
				}

			} while (1);
			if (count <= max_stones) {
				for (int i = 0; i < count; i++) {
					if (num_stones < max_stones) {
						struct stone new_stone;
						printf("Enter name of the stone: ");
						scanf("%s", new_stone.name);
						printf("Enter age of the stone: ");
						scanf("%d", &new_stone.age);
						printf("Enter year, when was found the stone: ");
						scanf("%s", new_stone.yearoflocation);
						printf("Enter where was found the stone: ");
						scanf(" %[^\n]", new_stone.birthplace);
						printf("Enter weight of the stone: ");
						scanf("%d", &new_stone.weight);
						printf("Enter gender of the stone: ");
						scanf("%s", new_stone.gender);
						database[num_stones] = new_stone;
						num_stones++;
						system("cls");
					}
				}
				Complete();

			}
			else {
				printf("Database is full. Cannot add more stones.\n");
			}
			break;
		case 2:
			system("cls");
			if (num_stones < max_stones) {
				struct stone new_stone = { 0 };
				database[num_stones] = new_stone;
				printf("Enter name of the stone: ");
				scanf("%s", new_stone.name);
				printf("Enter age of the stone: ");
				scanf("%d", &new_stone.age);
				printf("Enter year, when was found the stone: ");
				scanf("%s", new_stone.yearoflocation);
				printf("Enter where was found the stone: ");
				scanf(" %[^\n]", new_stone.birthplace);
				printf("Enter weight of the stone: ");
				scanf("%d", &new_stone.weight);
				printf("Enter gender of the stone: ");
				scanf("%s", new_stone.gender);
				num_stones++;
				system("cls");
				Complete();
			}
			else {
				printf("Database is full. Cannot add more stones.\n");
			}
			break;

		case 3:
			if (num_stones > 0) {
				printf("Enter the index of the stone to edit (0-%d): ", num_stones - 1);
				int index;
				scanf("%d", &index);

				if (index >= 0 && index < num_stones) {
					struct stone updated_stone;
					printf("Enter name of the stone: ");
					scanf("%s", updated_stone.name);
					printf("Enter age of the stone: ");
					scanf("%d", &updated_stone.age);
					printf("Enter year, when was found the stone: ");
					scanf("%s", updated_stone.yearoflocation);
					printf("Enter where was found the stone: ");
					scanf(" %[^\n]", updated_stone.birthplace);
					printf("Enter weight of the stone: ");
					scanf("%d", updated_stone.weight);
					printf("Enter gender of the stone: ");
					scanf("%s", updated_stone.gender);
					database[index] = updated_stone;
				}
				else {
					printf("Invalid index. Please enter a valid index.\n");
				}
			}
			else {
				printf("No stones to edit. Add a stone first.\n");
			}
			break;

		case 4:
			if (num_stones > 0) {
				printf("Enter the index of the stone to delete (0-%d): ", num_stones - 1);
				int index;
				scanf("%d", &index);

				if (index >= 0 && index < num_stones) {
					for (int i = index; i < num_stones - 1; i++) {
						database[i] = database[i + 1];
					}
					num_stones--;
					printf("Stone deleted successfully.\n");
				}
				else {
					printf("Invalid index. Please enter a valid index.\n");
				}
			}
			else {
				printf("No stones to delete. Add a stone first.\n");
			}
			break;

		case 5:
			system("cls");
			printf("Stones in the database:\n");
			// start of header--------------------->
			for (int i = 0; i < 113; i++) {
				if (i == 16 || i == 32 || i == 48 || i == 64 || i == 80 || i == 96) {
					printf("%c", -53);
				}
				if (i == 0) {
					printf("%c", -55);
				}
				if (i == 112) {
					printf("%c", -69);
				}
				else {
					printf("%c", -51);
				}
			}printf("\n");

			printf("%c", -70);
			printf("%-16s", "#");
			printf("%c", -70);
			printf("%-16s", "Name");
			printf("%c", -70);
			printf("%-16s", "Age");
			printf("%c", -70);
			printf("%-16s", "yearoflocation");
			printf("%c", -70);
			printf("%-16s", "birthplace");
			printf("%c", -70);
			printf("%-16s", "weight");
			printf("%c", -70);
			printf("%-16s", "gender");
			printf("%c", -70);
			printf("\n");
			// <-------------- end of header
			for (int i = 0; i < num_stones; i++) {
				print_stone(database[i], i);
			}
			// dnishe --------------->
			for (int i = 0; i < 113; i++) {
				if (i == 16 || i == 32 || i == 48 || i == 64 || i == 80 || i == 96) {
					printf("%c", -54);
				}
				if (i == 0) {
					printf("%c", -56);
				}
				if (i == 112) {
					printf("%c", -68);
				}
				else {
					printf("%c", -51);
				}
			}printf("\n");
			// <--------------- dnishe
			break;

		case 6:
			if (num_stones > 0) {
				printf("Enter the index of the stone to display (0-%d): ", num_stones - 1);
				int index;
				scanf("%d", &index);

				if (index >= 0 && index < num_stones) {
					printf("Stone %d:\n", index);
					print_stone(database[index], num_stones);
				}
				else {
					printf("Invalid index. Please enter a valid index.\n");
				}
			}
			else {
				printf("No stones to display. Add a stone first.\n");
			}
			break;
		case 7:
			write_to_file(database, num_stones);
		case 8:
		{
			system("cls");
			printf("Enter the name of the txt file to read: ");
			char filename[50];
			scanf("%s", filename);
			read_from_txt(filename, database, &num_stones);
			printf("Data read from the file successfully.\n");
			Sleep(1000);
			system("cls");
			break;
		}
		case 9: 
			system("cls");
			int sort_choice;
			printf("Sort by:\n");
			printf("1. by the name\n2. by the age\n3. by the year when was found a stone\n4. by birthplace\n5. by weight\n");
			scanf("%d", &sort_choice);

			sort_by(database, num_stones, sort_choice);

			break;
		case 10:
			printf("Exiting the program.\n");
			return 0;

		default:
			printf("Invalid choice, enter the correct command.\n");
		}
	}
	return 0;
}
void Complete() {
	system("cls");
	int delay_ms = 100;
	printf("Complete! ");
	for (int i = 0; i < 3; i++) {
		printf("| \b");
		Sleep(delay_ms);
		printf("\b");
		printf("/");
		printf("\b");
		Sleep(delay_ms);
		printf("-");
		printf("\b");
		Sleep(delay_ms);
		printf("\\");
		printf("\b");
		Sleep(delay_ms);
	}
	system("cls");
}

void read_from_txt(const char* filename, struct stone* database, int* num_stones) {
	FILE* file = fopen(filename, "r");

	if (file == NULL) {
		printf("Error opening file.\n");
		return;
	}

	*num_stones = 0;

	while (fscanf(file, "%s %d %s %s %d %s",
		database[*num_stones].name,
		&database[*num_stones].age,
		database[*num_stones].yearoflocation,
		database[*num_stones].birthplace,
		&database[*num_stones].weight,
		database[*num_stones].gender) == 6) {

		(*num_stones)++;
	}

	fclose(file);
}

void write_to_file(struct stone* database, int num_stones) {
	FILE* file;
	char filename[50];

	// Проверяем, есть ли уже файл, с которым работает программа
	if (num_stones > 0) {
		printf("1. Continue working in the current file\n2. Create new file\n");
		int choice;
		scanf("%d", &choice);

		if (choice == 1) {
			// Продолжаем работу с текущим файлом
			printf("Enter the current filename: ");
			scanf("%s", filename);
		}
		else if (choice == 2) {
			// Создаем новый файл
			printf("Enter the new filename: ");
			scanf("%s", filename);
		}
		else {
			printf("Invalid choice.\n");
			return;
		}
	}
	else {
		// Создаем новый файл, если нет данных в базе
		printf("Enter the new filename: ");
		scanf("%s", filename);
	}

	file = fopen(filename, "w");
	if (file == NULL) {
		printf("Error opening file for writing.\n");
		return;
	}

	for (int i = 0; i < num_stones; i++) {
		fprintf(file, "%s %d %s %s %d %s\n",
			database[i].name,
			database[i].age,
			database[i].yearoflocation,
			database[i].birthplace,
			database[i].weight,
			database[i].gender);
	}

	fclose(file);
	printf("Data written to file successfully.\n");
}

int compare_strings(const void* a, const void* b) {
	return strcmp(((struct stone*)a)->name, ((struct stone*)b)->name);
}

int compare_ints(const void* a, const void* b) {
	return ((struct stone*)b)->age - ((struct stone*)a)->age;
}

int compare_birthplace(const void* a, const void* b) {
	return strcmp(((struct stone*)a)->birthplace, ((struct stone*)b)->birthplace);
}

int compare_weights(const void* a, const void* b) {
	return ((struct stone*)b)->weight - ((struct stone*)a)->weight;
}

void sort_by(struct stone* database, int num_stones, int choice) {
	// Выберите соответствующую функцию сравнения в зависимости от выбора пользователя
	int (*compare_function)(const void*, const void*);

	switch (choice) {
	case 1:
		compare_function = compare_strings;
		break;
	case 2:
		compare_function = compare_ints;
		break;
	case 3:
		compare_function = compare_ints;
		break;
	case 4:
		compare_function = compare_birthplace;
		break;
	case 5:
		compare_function = compare_weights;
		break;
	default:
		printf("Invalid sort choice.\n");
		return;
	}

	// Используйте qsort для сортировки массива структур
	qsort(database, num_stones, sizeof(struct stone), compare_function);

	printf("Sorted database:\n");
	// start of header--------------------->
	for (int i = 0; i < 113; i++) {
		if (i == 16 || i == 32 || i == 48 || i == 64 || i == 80 || i == 96) {
			printf("%c", -53);
		}
		if (i == 0) {
			printf("%c", -55);
		}
		if (i == 112) {
			printf("%c", -69);
		}
		else {
			printf("%c", -51);
		}
	}printf("\n");

	printf("%c", -70);
	printf("%-16s", "#");
	printf("%c", -70);
	printf("%-16s", "Name");
	printf("%c", -70);
	printf("%-16s", "Age");
	printf("%c", -70);
	printf("%-16s", "yearoflocation");
	printf("%c", -70);
	printf("%-16s", "birthplace");
	printf("%c", -70);
	printf("%-16s", "weight");
	printf("%c", -70);
	printf("%-16s", "gender");
	printf("%c", -70);
	printf("\n");
	// <-------------- end of header

	for (int i = 0; i < num_stones; i++) {
		print_stone(database[i], num_stones);
	}
	// dnishe --------------->
	for (int i = 0; i < 113; i++) {
		if (i == 16 || i == 32 || i == 48 || i == 64 || i == 80 || i == 96) {
			printf("%c", -54);
		}
		if (i == 0) {
			printf("%c", -56);
		}
		if (i == 112) {
			printf("%c", -68);
		}
		else {
			printf("%c", -51);
		}
	}printf("\n");
	// <--------------- dnishe
}
