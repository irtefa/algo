#include <stdio.h>
#include <string.h>

#define M 101
#define B 256
int mod(int a, int b)
{
	return (a % b)	;
}

int rabin_karp(char text[], char pattern[])
{
	int t_len = strlen(text);
	int p_len = strlen(pattern);
	int i, j;

	// return if pattern longer than text
	if(p_len > t_len)
	{
		return 0;
	}

	// calculate if the first segment of the text matches the pattern
	for(i = 0; i < p_len; i++)
	{
		if(pattern[i] != text[i])
		{
			break;
		}
	}
	if(i == p_len)
	{
		printf("found at %d\n", i - p_len);
		return 1;
	}

	int hp = 0;
	int ht = 0;
	// calculate the hash for the pattern
	for(i = 0; i < p_len; i++)
	{
		hp = mod(hp * B + pattern[i], M);
	}
	// naive rabin karp
	for(i = 0; i < t_len; i++)
	{
		ht = 0;
		for(j = 0; j < p_len; j++)
		{
			ht = mod(ht * B + text[i + j], M);
		}
		if(ht == hp)
		{
			// check character by character if it matches
			for(j = 0; j < p_len; j++)
			{
				if(text[i + j] != pattern[j])
				{
					break;
				}
			}
			// text and pattern matches
			if(j == p_len)
			{
				printf("found at %d\n", i);
				return 1;
			}
		}
	}
	return 0;
}

int main(int argc, char * argv[])
{
	if(rabin_karp(argv[1], argv[2]) == 1)
	{
		printf("Pattern mathes text\n");
		return 0;
	}

	printf("Patter does not match text\n");
	return 0;
}
