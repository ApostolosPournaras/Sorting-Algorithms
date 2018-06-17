//----------- BubbleSort function ----------//
void BubbleSort(int *array, int length)		//
{											//
	int i,j,temp;							//
											//
	for(i=0;i<length;i++){					//
		for(j=0;j<i;j++){					//
			if(array[i] < array[j]){		//
				    temp = array[i]; //swap //
				array[i] = array[j];		//
				array[j] = temp;			//
			}								//
		}									//
	}										//
}											//
//------------------------------------------//
