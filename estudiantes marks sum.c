int marks_summation(int* marks, int number_of_students, char gender) {
	int temp = 0;
	if(gender == 'b') {
		for(int i = 0; i < number_of_students; i += 2) temp += marks[i];
	} else {
		for(int j = 1; j < number_of_students; j += 2) temp += marks[j];
	}
	
	return temp;
}
