#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n)
{
    int r = n;
    int m = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n = n / 10;
    }
    /*
     * if(r==m)
     *     return true;         //adade dade shode ba makoosash barabar ast :)
     * else
     *     return false;
     *  //the next line will do 4 above lines in the shortest way
     */
    return r == m;
}

int main()
{
    for (int i = 10; i < 100; i++)
    {
        for (int j = i; j < 100; j++)
        {
            if (isPalindrome(i * j))        //if(isPalindrome(i*j)==true)    // check if its motegharen :D
            {
                printf("%d * %d = %d\n",j,i,j * i);
            }
        }
    }
    return 0;
}