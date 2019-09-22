//ITSC:
#include "implementation.h"
#include <string.h>

Result getLargestConsecutiveChar(char *str)
{
    Result r;
    char string1[100], visited[100];
    int count[100] = {0}, flag = 0;
    
    short i, j = 0, k = 0, l, max, index;
 
    l = strlen(str);
 
    for (i = 0; i < l; i++)
    {
        if (i == 0)
        {
            visited[j++] = string1[i];
            count[j - 1]++;
        }
        else
        {
            for (k = 0; k  < j; k++)
            {
                if (string1[i] == visited[k])
                {
                    count[k]++;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                visited[j++] = string1[i];
                count[j - 1]++;
            }
            flag = 0;
        }
    }    
 
    for (i = 0; i < j; i++)
    {
        if ((i == 0) && (visited[i] != ' '))
        {
            max = count[i];
            continue;
        }
        if ((max < count[i]) && (visited[i] != ' '))
        {
            max = count[i];
            index = i;
            r.length = index;
        }
    }
    return r;
}