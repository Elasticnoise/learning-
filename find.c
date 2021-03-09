void find()
{
    int i;
    puts("Search results:");
    puts("----------------------------------------");

    for (i = 0; i < NUM_ADS; i++)
    {
        if (strstr(ADS[i], "спорт") && !strstr(ADS[i], "Бибер"))
        {
            printf("%s\n", ADS[i]);
        }
    }
    puts("----------------------------------------");
}
