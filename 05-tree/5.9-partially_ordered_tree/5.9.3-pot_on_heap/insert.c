void insert(int A[], int x, int* pn) {
	(*pn)++;
	A[*pn]=x;
	bubbleUp(A, *pn);
}

