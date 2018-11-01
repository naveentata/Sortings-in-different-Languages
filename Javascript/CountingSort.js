function countingSort(array, min, max){
	var index1 = 0;
	var index2 = 0;
	count = [];
	for(index1 = min; index1 <= max; index1++){
		count[index1] = 0;
	}

	for(index1 = 0; i < array.length; index1++){
		count[array[index1]]++;
	}

	for(index1 = min; index1 <= max; index1++){
		while(count[index1]-- > 0){
			array[index2++] = index1;
		}
	}
}