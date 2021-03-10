#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Сортирует целочисленные значения, начиная с наименьшего */
int compare_scores(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a - b;
}

/* Сортирует целочисленого значения, начиная с наибольшего */
int compare_scores_desc(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return b - a;
}

/* Сортирует прямоугольники по площади, начиная с наименьшего */
typedef struct
{
    int width;
    int height;
} rectangle;

int compare_areas(const void* a, const void* b)
{
    rectangle* ra = (rectangle*)a;
    rectangle* rb = (rectangle*)b;
    int area_a = (ra->width * ra->height);
    int area_b = (rb->width * rb->height);
    return area_a - area_b;
}

/* Сортирует список имен в алфавитном порядке, учитывая регистр */ 
int compare_names(const void* a, const void* b)
{
   char** sa = (char**)a;
   char** sb = (char**)b;
   return strcmp(*sa, *sb);
}

/* Сортирует прямоугольники по площади, начиная с наибольшей */
int compare_areas_desk(const void* a, const void* b)
{
    return compare_areas(b, a);
}

/* Сортирует список имен в обратном алфавитном порядке, учитывая регистр */
int compare_names_desc(const void* a, const void* b)
{
    return compare_names(b, a);
}

int main()
{
    int scores[] = {543, 323, 32, 554, 11, 3, 112};
    int i;
    qsort(scores, 7, sizeof(int), compare_scores_desc);
    puts("Это упорядоченные оценки:");
    for (i = 0; i < 7; i++)
    {
        printf("Оценка = %i\n", scores[i]);
    }

    char *names[] = {"Карен", "Марк", "Бретт", "Молли"};
    qsort(names, 4, sizeof(char*), compare_names);
    puts("Это упорядоченные имена:");
    for (i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}