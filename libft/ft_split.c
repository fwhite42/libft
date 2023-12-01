#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char **ft_split(char const *s, char c)
{
	int i;
	int len;
	int wc;
	char **arr;
	char *t;

	i = 0;
	wc = 0;
	len = strlen(s);
	t =(char *) malloc(len);
	strcpy(t,s);

	if (t[0] != c)
		wc++;
	while(i < len - 1)
	{
		if(t[i] == c)
		{
			if (t[i + 1] != c)
				wc++;
			t[i] = 0;
		}
		i++;
	}
	arr = (char **)malloc((wc + 1) * sizeof(void *));
	i = 0;
	int j = 0;
	if (t[0] != c)
		arr[j++] = &t[0];
	while(i < len - 1)
	{
		if(t[i] == 0)
			if (t[i + 1] != 0)
				arr[j++] = &t[i + 1];
		i++;
	}
	arr[wc] = NULL; 
	return arr;
}

int main(int ac, char **av)
{
	if (ac == 0)
		return 1;
	char **arr = ft_split(av[1], ' ');
	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
}
