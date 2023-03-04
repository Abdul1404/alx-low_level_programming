char *leet(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
    {
        while (!(s[i] >= 'a' && s[i] <= 'z'))
            i++;

        if (s[i - 1] == 'a' ||
            s[i - 1] == 'A' ||
            s[i - 1] == 'e' ||
            s[i - 1] == 'E' ||
            s[i - 1] == 'O' ||
            s[i - 1] == 'o' ||
            s[i - 1] == 't' ||
            s[i - 1] == 'T' ||
            s[i - 1] == 'l' ||
            s[i - 1] == 'L' ||)
            {
                s[i] = 32;
            }

    }
    return (s);
}
