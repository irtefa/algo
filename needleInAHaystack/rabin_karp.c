#include <stdio.h>
#include <string.h>

#define M 3571
#define B 256

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
	int h = 1;
	// calculate h = B ^ (m - 1)
	for (i = 0; i < p_len - 1; i++)
	{
            	h = (h*B)%M;
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

	// calculate the hash for the pattern
	int hp = 0;
	int ht = 0;
	for(i = 0; i < p_len; i++)
	{
		hp = (hp * B + pattern[i]) % M;
		ht = (ht * B + text[i]) % M;
	}
	// naive rabin karp
	for(i = 0; i < t_len; i++)
	{
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
		// update hash[text] from previous hash
		// subtract previous character and add the next character
		// (B * (hash - prev character * d^(m - 1))  + next character) mod M
		ht = (B * (ht - text[i] * h) + text[i + p_len]) % M;
		if(ht < 0)
		{
			ht = ht + M;
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
