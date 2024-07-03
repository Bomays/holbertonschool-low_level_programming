README : Even more Pointers, arrays and strings
Chapter on double pointers and multi dimensional arrays

Task 3.strspn.c :

CODE A PREFERER sans break (donné par Fabien)
_________________________________________________________

unsigned int _strspn(char *s, char *accept)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0' && s[i] != accept[j])
        {
            j++;
        }

        if (accept[j] == '\0')
        {
            return (i);
        }
        i++;
    }

    return (i);
}



