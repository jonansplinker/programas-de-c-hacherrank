int main()
{
	int i;
	int total_number_of_shelves;
	scanf("%d", &total_number_of_shelves);
	
	int total_number_of_queries;
	scanf("%d", &total_number_of_queries);
	total_number_of_books=(int *)calloc(total_number_of_shelves,sizeof(int));
	total_number_of_pages=(int **)calloc(total_number_of_shelves,sizeof(int *));
	for(i=0;i<total_number_of_shelves;i++){
		total_number_of_pages[i]=(int *)calloc(1100,sizeof(int));
	}
	while (total_number_of_queries--) {
		int type_of_query;
		scanf("%d", &type_of_query);
		
		if (type_of_query == 1) {
			
			
			int x, y;
			scanf("%d %d", &x, &y);
			for(i=0;i<1100;i++){
				if((*(total_number_of_pages+x))[i]==0){
					(*(total_number_of_pages+x))[i]=y;
					total_number_of_books[x]+=1;
					break;
				}
			}
