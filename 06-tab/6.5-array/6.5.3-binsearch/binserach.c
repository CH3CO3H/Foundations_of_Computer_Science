bool binsearch(int x, int A[], int low, int high) {
	int mid;
	if (low>high)
		return false;
	else {
		mid=(low+high)/2;
		if (x<A[mid])
			return binsearch(x, A, low, mid-1);
		else if (x>A[mid])
			return binsearch(x, A, mid+1, high);
		else
			return true;
	}
}

