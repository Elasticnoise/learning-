void (*replies[])(response) = {dump, second_chance, marriage};

int main()
{
    response r[] = {
        {"Майк", DUMP}, {"Луис", SECOND_CHANCE},
        {"Мэттью", SECOND_CHANCE}, {"Уильям", MARRIAGE}
    };
    int i;
    for (i = 0; i < 4; i++)
    {
        (replies[r[i].type])(r[i]);
    }
    return 0;
}
