//----- fill the array of n ellements with -----//
// random numbers in range of 3 times it's size	//
void RandomSmall( int *array, int n){			//
												//
	int k = 0;									//
	for(k=0 ; k<n ; k++)						//
		array[k]=rand()%(3*n);					//
												//
}												//
//----------------------------------------------//


//----- fill the array of n elements with ------//
//          random numbers of big range			//
void RandomBig( int *array, int n){				//
												//
	int k = 0;									//
	for(k=0 ; k<n ; k++)						//
		array[k]=rand()%2000000;				//
												//
}												//
//----------------------------------------------//


//------- Create a partially sorted array ------//
void Partial( int* array, int n){				//
												//
	int k = 0;									//
	int temp;									//
	int index1, index2;							//
												//
	//random first element						//
	array[0] = rand()%100;						//
												//
	//create a sorted array of medium range		//
	for(k=1; k<n; k++)							//
		array[k] = rand()%100 + array[k-1];		//
												//
	//suffle aproximently 20% of the elements	//
	for(k=1; k<n/10; k++){						//
		index1 = rand()%n;						//
		index2 = rand()%n; 						//
		temp = array[index1];					//
		array[index1] = array[index2];			//
		array[index2] = temp;					//
	}											//
}												//
//----------------------------------------------//


//--------- create a reversed sorted array ---------//
void Reverse( int *array, int n){					//
													//
	int k;											//
													//
	//random last element							//
	array[n-1] = rand()%100;						//
													//
	//create an invert sorted array of medium range //
	for(k=n-2; k>=0; k--)							//
		array[k] = rand()%100 + array[k+1];			//
													//
}													//
//--------------------------------------------------//


//------ create an array of few uniqe elements -----//
void FewUniqe( int* array, int n){					//
													//
	int k = 0;										//
													//
	//fill 10% of the array with					//
	//random numbers of big range					//
	for(k=0 ; k<n/10 ; k++)							//
		array[k]=rand()%2000000;					//
													//
	//fill the rest 90% by randomly picking			//
	//elements from the first 100					//
	for(k=(n/10)+1; k<n; k++)						//
		array[k] = array[rand()%(n/10)];			//
}													//
//--------------------------------------------------//
