/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
char temp[500];
int length = 0;
int i = 0;

/* Counts the length of the string and assigns it to variable length*/
while (s[length] != '\0')
{
length++;
}
/* 'i' is used to assign s[0] to temp[length - 1] as temp[length] is a '\0'*/
while (i < length)
{
temp[length - 1 - i] = s[i];
i++;
}
i = 0;
/* reassigns the original s array to copy the reversed temp array*/
while (i < length)
{
s[i] = temp[i];
i++;
}
s[length] = '\0';
}
