/*

    A character string is given. Remove from it all the words of odd length. Words are separated by one space

*/

#include <stdio.h>

int main()
{
    constexpr int s = 40;
    char M[s];
    gets(M);
    int x,y;
    int n = 0;
    int i = 0;
    while(M[i] != 0)
    {
        x = i;
        for(; M[i] == ' ' && M[i] != 0; ++i);
        y = i;
        for(; M[i] != ' ' && M[i] != 0; ++i);
        if(((i - y) & 1) == 0)
        {
            for(; x < i; ++x, ++n)
            {
                M[n] = M[x];
                printf("%c", M[n]);
            }
        }
    }
    return 0;
}
