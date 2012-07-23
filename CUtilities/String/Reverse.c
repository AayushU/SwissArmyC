void reverse(char s[])
{
    int c, i, j;
    int len = strlen(s)

    for (i = 0, j = len-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
