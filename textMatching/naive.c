#include <stdio.h>
#include <string.h>

int brute_force(char text[], char pattern[])
{
	int t_len = strlen(text);
	int p_len = strlen(pattern);
	int i,j;

	for(i=0; i < t_len; i++) {
		for(j=0; j < p_len && i + j < t_len; j++) {
			// does not match
			if(text[i + j] != pattern[j]) {
				break;
			}
		}
		if(j == p_len) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char * argv[])
{
	if(brute_force(argv[1], argv[2]) == 1) {
		printf("There is a match\n");
		return 0;
	}

	printf("The pattern is not present\n");
	return 0;
}
