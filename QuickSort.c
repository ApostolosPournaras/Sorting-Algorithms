//----------------------- QuickSort function -----------------------//
void QuickSort(int *array, int n){									//
																	//
//this is used to stop retrospective execution						//
if(n<=1)															//
	return;															//
																	//
//i is an index pointer that runs the array from left to right		//
//j is an index pointer that runs the array from right to left		//
//pivot is the element based on which the partitioning will accure	//
//temp is is used for temporarly storing							//
int i, j, pivot, temp;												//
																	//
																	//
//give them initial values											//
pivot = array[n/2];													//
i = 0;																//
j = n;																//
																	//
																	//
//Partition the array in two partitions.							//
//The left has all the elements that are smaller than the pivot		//
//and the right has all the elements that are bigger than it.		//
	for(;;){														//
																	//
		//find the indeces from left and right of the pivot			//
		//that are bigger and smaller than it, respectively			//
		while(array[++i] < pivot && i < n) { }						//
		while(array[--j] > pivot) { }								//
																	//
		//if pointers crossesd boundaries, break					//
		if( i >= j )												//
			break;													//
																	//
		//make the nessesary swap between the elements so,			//
		//the bigger is now where the smaller was					//
		temp = array[i];											//
		array[i] = array[j];										//
		array[j] = temp;											//
	}																//
																	//
//place pivot where it should be in the sorted array				//
temp = array[i-1];													//
array[i-1] = array[0];												//
array[0] = temp;													//
																	//
//retrospectively, sort the two partitions							//
QuickSort(array, i-1);												//
QuickSort(array+i, n-i);											//
}																	//
//------------------------------------------------------------------//
