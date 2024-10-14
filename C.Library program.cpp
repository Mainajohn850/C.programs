//Library system
#include<stdio.h>
int main(){
	int bookid,duedate,returndate,daysoverdue,fineamount;
	   
	   printf("Enter the books id");
	   scanf("%d",&bookid);
	   
       printf("Enter the books due date");
       scanf("%d",&duedate);
       
       printf("Enter the date of return");
       scanf("%d",&returndate);
       
       daysoverdue=returndate-duedate;
       
       if (daysoverdue<7){
		   fineamount=daysoverdue*20;
		   printf("The fine amount accumulated to:%d\n",fineamount);
		   
	   }
	   else if (daysoverdue>7 &&daysoverdue<=14){
		   fineamount=daysoverdue*50;
		   printf("The fine amount accumulated to:%d\n",fineamount);
		   
	   }
	   
	   else if (daysoverdue>=15){
		   fineamount=daysoverdue*100;
		   printf("The fine amount accumulated to:%d\n",fineamount);
	   }
		   return 0;
	   
    }