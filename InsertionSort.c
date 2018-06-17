//---------- InsertionSort function --------//
void InsertionSort(int *array, int n) {		//
											//
	int k; //run the array					//
	for (k = 1; k < n; k++) {				//
		int key = array[k];					//
		int i = k - 1;						//
											//
		//if there is an element that is	//
		//bigger than the key and it is		//
		//at it's right, move it to the left//
		while((i >= 0) && (key < array[i])){//
			array[i + 1] = array[i];		//
			i--;							//
		}									//
			array[i + 1] = key;				//
	}										//
}											//
//------------------------------------------//
