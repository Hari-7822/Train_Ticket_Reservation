

int main()

{
	
	char name[30];
	long long int phone_no;
	char arr[40];
	char dest[30];
	int train_no;
	int seat_no1, seat_no2; 
	int class1;
	int amt, amt_1, c;
	int n, temp;
	
	
	printf("\n\n\t\t\t -----------Welcome To Railway Reservation system-----------");
	
	printf("\n Enter your Name : ");
	gets(name);
	
	printf("\n Enter Your Arrival : ");
	gets(arr);
			
	printf("\n Enter the Destination : ");
	gets(dest);
	
	printf("\n Enter The Train number : ");
	scanf("%d", &train_no);
	
	printf("\n Enter Your Phone Number : ");
	scanf("%lld", &phone_no);
	
	printf("\n ___________________________________________________________________________________");
	
	
				
	printf("\n Enter the Class : ");
	scanf("%d", &class1);
	
	if(class1 > 2)
	{
		printf("\n\t\t\t ***** Something went Wrong. Please try again by entering Correct Entity. *****");	
		printf("\n Enter The Class : ");
		scanf("%d", &class1);
	}
			
	
	if(class1 == 1)
	{
		printf("\n\n\t\t\t You've Chosen First Class.'");
		
		printf("\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		
		printf("\n\n\t\t\t");
					{
					
		
						  int seat_no1,i; 
						  bool arr[100]={0}; 
						  time_t t; 
						  srand((unsigned)time(&t));
						  printf("Enter the Number Of Seats : ");
						  scanf("%d", &seat_no1);
			   
						  for(i=0; i<seat_no1; ++i) 
						  { 
						    int seat_no1=rand()%100; 
						    if(!arr[seat_no1]) 
						    {
							
					    		printf("%d ,",seat_no1); 
					    		
					    	}
					    	
							else
								{
								    i--; 
					    			arr[seat_no1]=1;
								}
			
								
					  	  }
					}
						
		printf("\n Enter The Fare : ");
		scanf("%d", &amt_1);		
		
		if(seat_no1 > 100)
			{
			
				printf("\n First Class Limit is 100 seats only.");
				printf("\n Enter seat number again : ");
				scanf("%d", &seat_no1);
				
				
			}
		else
			{
				printf("\n\n\t\t\t-----------Your ticket Registration Details-----------");
				printf("\n**************************************************************************");
				
				printf("\n* Your Name 				: %s ", name);
				printf("\n* Your Phone number 			: %lld ", phone_no);
				printf("\n* Your Arrival 				: %s", arr);
				printf("\n* The Destination 			: %s ", dest);
				printf("\n* The train Number 			: %d ", train_no);
				printf("\n* Your Class 				: %d st class", class1);
				printf("\n* Number of seats 			: %d ", seat_no1);
				printf("\n* The Seat Numbers 			: %d\t ", n);
				printf("\n* The Fare 				: Rs. %d ", amt_1);
				
				printf("\n**************************************************************************");
				
				sleep(2);
				
			}
			printf("\n Enter 1 to continue And Enter other numbers to cancel the Registration : ");
			scanf("%d", &c);
	
	if(c == 1)
	{
	
 		printf("\n\n\t\t ----------Your Registration is recorded-----------.");
		printf("\n\n\t\t /////////// We confirm your Booking Through SMS. ///////////");
	}
	
	
	else
	{
		
		printf("\n\n\t\t\t Your Registration Has been Cancelled.");
		printf("\n\n\t\t\t\t\t See You Again.");
		
	}

 }

	
	if(class1 == 2)
	{
		
		printf("\n\n\t\t\t You've chosen Second Class. ");
		
		printf("\n\n\t```````````````````````````````````````````````````````````````````");
		printf("\n\n\t\t\t");
		
	
		
				{
				 
						  int seat_no1,i; 
						  bool arr[100]={0}; 
						  time_t t; 
						  srand((unsigned)time(&t));
						  printf("Enter the Number Of Seats : ");
						  scanf("%d", &seat_no2);
					   
						  for(i; i<seat_no2; ++i) 
						  { 
						    int seat_no2=rand()%100; 
						    if(!arr[seat_no2]) 
						    {
							
					    		printf("%d\n",seat_no2); 
					    		
					    	}
					    	
							else
								{
								  
					      			i--; 
					    			arr[seat_no2]=1;
								}
					  	  }
								
				}	
		
		printf("\n Enter the Fare : ");
		scanf("%d", &amt);
		
		if(seat_no2 > 700)
		{
		
			printf("\n Second Class coach reached its limit.");
			printf("\n Try to book on another day.");
			printf("\n Sorry for the inconvenience caused.");
			
		}
		
		else
		{
			printf("\n\n\t\t\t----------- Your ticket Registration Details -----------");
			printf("\n_____________________________________________________________________________________");
			
		    printf("\n| Your Name 				: %s ", name);
	     	printf("\n| Your Phone number 			: %lld ", phone_no);
			printf("\n| Your Arrival 				: %s ", arr);
			printf("\n| The Destination 			: %s ", dest);
			printf("\n| The train Number 			: %d ", train_no);
			printf("\n| Your Class 				: %d nd class ", class1);
			printf("\n| The number of seats  			: %d ", seat_no2);
			printf("\n| The Seat Numbers		 	: %d ", n);
			printf("\n| The Fare 				: Rs. %d ", amt);
				
			printf("\n|_____________________________________________________________________________________");
				
			printf("\n Enter 1 to continue And Enter other numbers to cancel the Registration : ");
			scanf("%d", &c);
			
			sleep(2);
		}	
			
		if(c == 1)
		{
			
		 		printf("\n\n\t\t ----------Your Registration is recorded-----------.");
				printf("\n\n\t\t /////////// We confirm your Booking Through SMS. ///////////");
				
		}
	
	
		else
		{
			
			printf("\n\n\t\t\t Your Registration Has been Cancelled.");
			printf("\n\n\t\t\t\t\t See You Again.");
			
		}
				
		
	}
	
	
	
	

	printf("\n\n\t\t\t ********************** Thank You For Using Our Application. **********************");
	
sleep(4);


return 0;

	      
}
