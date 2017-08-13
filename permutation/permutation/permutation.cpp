#include <stdio.h>
#include <string.h>
#include <time.h>
int count = 0;

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void perm(char *a, int l, int r)
{
	int i;
	if (l == r) {
		//printf("%s\n", a);
		count++;
	}
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a + l), (a + i));
			perm(a, l + 1, r);
			swap((a + l), (a + i)); //backtrack
		}
	}
}

int main()
{
	//Calculate time
	clock_t start, end;
	start = clock();

	//main Prog.
	char str[16] ;
	gets_s(str);
	int n = strlen(str);
	perm(str, 0, n - 1);

	//Calculate time
	end = clock();
	double diff = end - start; // ms
	printf("Total Execution time: %f  ms", diff);
	//printf(" %f  sec", diff / CLOCKS_PER_SEC);
	printf("\nnumber of permutation: %d",count);
	return 0;
}