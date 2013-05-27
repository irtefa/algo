#include <stdio.h>
#include <string.h>

#define M 12289
#define B 10
int mod(int a, int b)
{
	return (a % b + b) % b;
}

int rabin_karp(char text[], char pattern[])
{
	int t_len = strlen(text);
	int p_len = strlen(pattern);

	// return if pattern longer than text
	if(p_len > t_len)
	{
		return 0;
	}

	int hp = 0;
	// calculate the hash for the pattern
	int i, j;
	for(i = 0; i < p_len; i++)
	{
		hp = mod(hp * B + pattern[i], M);
	}

	// calculate if the first segment of the text matches the pattern
	int ht = 0;
	for(i = 0; i < p_len; i++)
	{
		ht = mod(ht * B + text[i], M);
	}
	if(ht == hp)
	{
		// the first p_len segment matches
		return 1;
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
