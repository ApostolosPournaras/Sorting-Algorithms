//--------------------------- Merge ----------------------------//
void Merge(int *array, int low, int high, int mid){				//
																//
    int i = low;			//i runs the array from low			//
    int j = mid + 1;		//j runs the array from mid+1		//
    int k = low;			//k indexes each new sorted element	//
    int array_temp[high+1];	//temporarly stores sorted fragment	//
																//
																//
//-------------- merge the sorted fragments, ---------------//	//
//           untill the end of either is reached			//	//
    while (i <= mid && j <= high){							//	//
        if (array[i] < array[j])							//	//
            array_temp[k++] = array[i++];					//	//
															//	//
        else												//	//
			array_temp[k++] = array[j++];					//	//
															//	//
    }														//	//
//----------------------------------------------------------//	//
																//
//----- add to the new merged fragment what's left -----//		//
    while (i <= mid)									//		//
        array_temp[k++] = array[i++];					//		//
														//		//
    while (j <= high)									//		//
        array_temp[k++] = array[j++];					//		//
//------------------------------------------------------//		//
																//
//--- copy the sorted fragment to the original array ---//		//
    for (i = low; i < k; i++)							//		//
        array[i] = array_temp[i];						//		//
//------------------------------------------------------//		//
																//
}																//
//--------------------------------------------------------------//


//-------------------- MergeSort -------------------//
int MergeSort(int *array, int low, int high){		//
													//
	int mid;		//the middle element			//
													//
    if (low < high){								//
        mid = (low + high) / 2;						//
													//
		//seperate the array into 2 halves,			//
		//sort them and merge them					//
		MergeSort(array, low, mid);					//
        MergeSort(array, mid + 1, high);			//
			Merge(array, low, high, mid);			//
    }												//
}													//
//--------------------------------------------------//
