#include <stdio.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island amity = {"Остров дружбы", "09:00", "17:00", NULL};
island craggy = {"Скалистый", "09:00", "17:00", NULL};
island isla_nublar = {"Туманный", "09:00", "17:00", NULL};
island shutter = {"остров Проклятых", "09:00", "17:00", NULL};

amity.next = &craggy;
craggy.next = &isla_nublar;
isla_nublar.next = &shutter;
island skull = {"остров Черепа", "09:00", "17:00", NULL};
isla_nublar.next = &skull;
skull.next = &shutter;
display(&amity);
