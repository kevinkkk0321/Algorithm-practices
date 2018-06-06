void quicksort(int *array, int left, int right)
{
	int i, j, pivot;
    
    pivot = array[left];
    i = left+1;
    j = right;
    
    while(1){
        while(i<=right && array[i]<=pivot) i++;
        while(left<i && array[j]>= pivot) j--;
        if(i>j) break;   
        swap(array[i], array[j]);
    }
    
    swap(array[left], array[j]);
    quicksort(array, left, j-1);
    quicksort(array, j, right);    
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}