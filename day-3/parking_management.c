#include <stdio.h>
#include <stdlib.h>

int nob=0,noc=0,nor=0, amount=0,count=0;
int ch=0;
void bus();
void cycle();
void riksha();
int menu();
void showDetails();
void clear();
void Delete();

int main() {
	//code
	while(1){
    	switch(menu()){
    	    case 1:
    	        bus();
    	        break;
    	    case 2:
    	        cycle();
    	        break;
    	    case 3:
    	        riksha();
    	        break;
    	    case 4:
    	        showDetails();
    	        break;
    	    case 5:
    	        Delete();
    	        break;
    	    case 6:
    	        exit(0);
    	    default:
    	        printf("\nInvalid choice!");
    	}
	}
	
	return 0;
}

void Delete(){
    nob=0;
    noc=0;
    nor=0;
    count=0;
    amount=0;
}


void showDetails(){
    printf("\nNumber of Buses parked: %d",nob);
    printf("\nNumber of Cycles parked: %d",noc);
    printf("\nNumber of Riksha parked: %d",nor);
    printf("\nTotal number of vehicles parked: %d",count);
    printf("\nTotal gained amount: %d\n\n",amount);
    
}

int menu(){
    printf("\n1. Enter bus");
    printf("\n2. Enter cycle");
    printf("\n3. Enter riksha");
    printf("\n4. show status");
    printf("\n5. Delete");
    printf("\n6. Exit");
    printf("\n\nPlease enter your choice:");
    scanf("%d",&ch);
    return(ch);
}

void bus(){
    printf("\nOne Bus enterd successfully!\n\n");
    nob++;
    amount += 100;
    count++;
    
}

void cycle(){
    printf("\nOne Cycle enterd successfully!\n\n");
    noc++;
    amount += 20;
    count++;
}

void riksha(){
    printf("\nOne Riksha enterd successfully!\n\n");
    nor++;
    amount += 50;
    count++;
}
