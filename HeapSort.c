//------------ parrent function ------------//
//this function returns the index			//
//of a child's parent, when we see			//
//the array as a heap struct				//
int parent(int i){							//
											//
if( i%2 == 0 )								//
    return (i / 2) - 1;						//
else										//
    return (i / 2);							//
}											//
//------------------------------------------//


//------------- left child -------------//
//this function return's the index		//
//of the left child of a node			//
int left(int i) {						//
  return (2 * i) + 1;					//
}										//
//--------------------------------------//


//------------ right child -------------//
//this function return's the index		//
//of the right child of a node			//
int right(int i) {						//
  return (2 * i) + 2;					//
}										//
//--------------------------------------//


//--------------------------- heapify ----------------------------------//
//convert the subtree defined by it's root i, into a heap struct		//
void heapify(int *array, int i, int heapSize) {							//
  int l = left(i);														//
  int r = right(i);														//
  int great, temp;														//
																		//
//find if left child is bigger than it's parent							//
if ( (array[l] > array[i]) && (l < heapSize))							//
	great = l;															//
																		//
//if not, parent is bigger												//
else																	//
	great = i;															//
																		//
																		//
//find if right child is bigger than it's parent						//
if ( (array[r] > array[great]) && (r < heapSize))						//
	great = r;															//
																		//
																		//
//if parent wasn't the biggest, alter parent with the bigest child		//
//and hipify again, now having as root of the subtree the biggest child //
if (great != i) {														//
	temp = array[i];													//
	array[i] = array[great];											//
	array[great] = temp;												//
	heapify(array, great, heapSize);									//
  }																		//
}																		//
//----------------------------------------------------------------------//


//-------------------------- buildmaxheap --------------------------//
//built the heap of the array by succesively call heapify function	//
void BuildMaxHeap(int *array, int heapSize) {						//
  int i, steps = 0;													//
  for (i = (heapSize - 1) / 2; i >= 0; i--)							//
		heapify(array, i, heapSize);								//
																	//
}																	//
//------------------------------------------------------------------//

//-------------------------- HeapSort --------------------------//
void HeapSort(int array[], int heapSize) {						//
																//
																//
//built the initial heap										//
BuildMaxHeap(array, heapSize);									//
																//
int i;															//
																//
	//the max element is the root of that heap!					//
	//move it to the last index and move the element			//
	//of that last index to the first ( 0 ).					//
	//heapify again for the new root to find the second bigest	//
	//element and so on...										//
	for (i = heapSize; i > 0; i--) {							//
		int temp = array[0];									//
		array[0] = array[heapSize - 1];							//
		array[heapSize - 1] = temp;								//
		heapSize = heapSize - 1;								//
		heapify(array, 0, heapSize);							//
	}															//
}																//
//--------------------------------------------------------------//
