#include "main.h"
int _atoi(char *s)
{
int sign = 1; 
int i = 0;
int result = 0;

while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
{
i++;
}

while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
    sign = sign * -1;
}
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
result = result * sign;
    return (result);
}
