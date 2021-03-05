#include <unistd.h>
#include <stdio.h>

struct exercise 
{
    const char *description;
    float duration;
};

struct meal
{
    const char *ingredients;
    float weight;
};

struct preferences
{
    struct meal food;
    struct exercise exercise;
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

/* ex 0
 * Кличка: Зубастик
 * Разновидность: пиранья
 * Рацион: мясо
 * Кол-во пищи: 0.09 кг
 * Описание упражнения: купаться в джакузи
 * Продолжительность упражнения: 7.5 часов 
 */

struct fish snappy = {"Зубастик", "пиранья", 69,4,{{"мясо", 0.2},{"купаться в джакузи", 7.5}}};

/* ex 1
 * create func wich outputs the following:
 * Кличка: Зуюастик
 * Разновидность: пиранья
 * 4 года, 69 зубов
 * Давать 0.09 кг мяса и разрешать купаться в джакузи на протяжении 7.50 часов
 */

void label (struct fish a)
{
    printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов\n", 
            a.name, a.species, a.teeth, a.age);
    printf("Давать %2.2f кг %s и разрешать %s в джакузи на протяжении %2.2f часов\n", a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
};
