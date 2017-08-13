#include <stdio.h> 
#define n 5 

void GEN_PER(int *A, int m);

int main(void)
{
	int A[n];
	int i;
	for (i = 0; i < n; i++) A[i] = i + 1;
	GEN_PER(A, n);

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

void GEN_PER(int *A, int m)
{
	int i;
	if (m == 1) {
		for (i = 0; i < n; i++) printf("%d ", A[i]);
		printf("\n");
	}
	else {
		int j, k;
		int B[n], C[n];
		for (i = 0; i < m; i++) B[i] = A[i];

		i = m - 1;
		do {
			k = 0;
			for (j = 0; j < m; j++) {
				if (j != i) C[k++] = B[j];
			}

			for (; k < n; k++) C[k] = A[k];

			GEN_PER(C, m - 1);
			i--;
			A[m - 1] = B[i];
		} while (i >= 0);
	}
	return;
}