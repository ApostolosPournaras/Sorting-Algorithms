//------------- CountingSort function --------------//
void CountingSort(int *array, int n){				//
													//
int i, min, max;									//
													//
min = max = array[0];								//
													//
//find the min and the max value in the array		//
for(i = 1; i < n; i++){								//
	if (array[i] < min)								//
		min = array[i];								//
													//
	else if (array[i] > max)						//
		max = array[i];								//
}													//
													//
//calculate the range between them and				//
//create an auxilary array which will hold			//
//the number of appearances of each number in range	//
//in the original array								//
int range = max - min + 1;							//
int count[range];									//
													//
//initially all are set to zero						//
for(i = 0; i < range; i++)							//
	count[i] = 0;									//
													//
//count the appearances								//
for(i = 0; i < n; i++)								//
	count[ array[i] - min ]++;						//
													//
int j, z = 0;										//
													//
//the place of each element is determinded by		//
//the number of its appearces						//
for(i = min; i <= max; i++)							//
	for(j = 0; j < count[ i - min ]; j++)			//
		array[z++] = i;								//
													//
}													//
//--------------------------------------------------//
