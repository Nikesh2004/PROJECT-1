/*write a c program to generate bill of a store
DEV:Nikesh
DoE:23/06/2022*/
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
struct shop{
	char str[100],name[50],cn;
	float EM,DIS,DIS1,DIS2,DIS3,tc;
	int num,n,x,cvv,check,otp,emi,cd,ch,cho,choi,choic;
	long long int mb,emb;
};
int rec=100;
main()
{
	struct shop s;
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	FILE *f;
	char items[12][100]={"SYMPHONY COOLER","HAVELLS COOLER","BAJAJ COOLER","KENSTAR COOLER",
	"BLUE STAR(5-star)","LLOYD(5-star)","Whirpool(3-star)","KENSTAR(3-star)",
	"CROMPTON(3-Blade)","HAVELLS(4-Blade)","BAJAJ(3-Blade)","USHA(4-Blade)"};
	int i,j,cost[12],a[12];
	for(i=0;i<12;i++)
	a[i]=0;
	printf("\nEnter Customer Name:");
	scanf("%s",&s.str);
	printf("\nEnter Mobile Number:");
	scanf("%lld",&s.mb);
	printf("****************WELCOME TO WARANGAL AIR HUB STORE********************\n");
	do{
		printf("Select You Products:\n");       //SELECTING PRODUCTS
		printf(" 1.AIR COOLERS\n 2.AIR-CONDITIONERS\n 3.FANS\n 4.Payment Option\n 5.New Customer\n");
		scanf("%d",&s.ch);
		switch(s.ch)
		{
			case 1:             //AIR COOLERS
					printf("Select Your Brands:\n");
					printf(" 1.SYMPHONY-Rs.18,000\n 2.HAVELLS-Rs.15,000\n 3.BAJAJ-Rs.10,000\n 4.KENSTAR-Rs.8,900\n");
					scanf("%d",&s.cho);
					cost[0]=18000;
					cost[1]=15000;
					cost[2]=10000;
					cost[3]=8900;
					switch(s.cho)
					{
						case 1:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[0]++;
								s.tc+=18000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 2:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[1]++;
								s.tc+=15000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 3:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[2]++;
								s.tc+=10000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 4:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[3]++;
								s.tc+=8900;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						default:
						   printf("Invalid Brand\n");				
					    }
				break;
				case 2:                                  //AIR CONDITIONERS
					printf("Select Your Brands:\n");
					printf(" 1.BLUE STAR(5-star)-Rs.48,000\n 2.LLOYD(5-star)-Rs.38,000\n 3.Whirpool(3-star)-Rs.30,000\n 4.KENSTAR(3-star)-Rs.28,000\n");
					scanf("%d",&s.choi);
					cost[4]=48000;
					cost[5]=38000;
					cost[6]=30000;
					cost[7]=28000;
					switch(s.choi)
					{
						case 1:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[4]++;
								s.tc+=48000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 2:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[5]++;
								s.tc+=38000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 3:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[6]++;
								s.tc+=30000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 4:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[7]++;
								s.tc+=28000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						default:
						   printf("Invalid Brand\n");				
					    }
				break;
				case 3:      	//CELLING FANS
					printf("Select Your Brands:\n");
					printf(" 1.CROMPTON(3-Blade)-Rs.3,800\n 2.HAVELLS(4-Blade)-Rs.4,500\n 3.BAJAJ(3-Blade)-Rs.1,000\n 4.USHA(4-Blade)-Rs.4,900\n");
					scanf("%d",&s.choic);
					cost[8]=3800;
					cost[9]=4500;
					cost[10]=1000;
					cost[11]=4900;
					switch(s.choic)
					{
						case 1:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[8]++;
								s.tc+=3800;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 2:
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[9]++;
								s.tc+=4500;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 3:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[10]++;
								s.tc+=1000;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						case 4:
							
							printf("Please Conform to order press(1) or to cancel order(press 0)\n");
							scanf("%d",&s.num);
							if(s.num==1)
							{
								a[11]++;
								s.tc+=4900;
							}
							if(s.num==0)
							break;
							printf("Product Cost is %f\n",s.tc);
							break;
						default:
						   printf("Invalid Brand\n");				
					    }
				  break;
				case 4:             //Payment Option
				  	printf("Select Your Payment Option:\n");
				  	printf(" 1.CASH(10 percent discount)\n 2.CREDIT CARD(7 percent discount)\n 3.DEBIT CARD(5 percent discount)\n 4.EMI(0 percent intrest on any cards)\n");
					scanf("%d",&s.n);
					if(s.n==1)               //Through CASH
							s.DIS=s.tc-0.1*s.tc;
					if(s.n==2){             //Through CREDIT CARD
						printf("\n Enter credit card number:");
			    	    scanf("%s",&s.cn);
			    	    printf("\n Enter credit card holder name:");
			    	    scanf("%s",&s.name);
			    	    printf("\n Enter Expiry Date of credit card(EX:20/21):");
			    	    scanf("%s",&s.cd);
			    	    printf("\n Enter CVV number:");
			    	    scanf("%d",&s.cvv);
			    	    printf("\n Enter OTP:");
			    	    scanf("%d",&s.otp);
			    	    s.DIS1=s.tc-0.07*s.tc;
			    	   }
			    	if(s.n==3){             //Through DEBIT CARD
			    	    printf("\n Enter Debit card number:");
			    	    scanf("%s",&s.cn);
			    	    printf("\n Enter Expiry Date of Debit card(EX:20/21):");
			    	    scanf("%s",&s.cd);
			    	    printf("\n Enter CVV number:");
			    	    scanf("%d",&s.cvv);
			    	    printf("\n Enter OTP:");
			    	    scanf("%d",&s.otp);
			    	    s.DIS2=s.tc-0.05*s.tc;
			    	}
			    	if(s.n==4){            //Through EMI
			    		printf("\nEnter Your Card Number(Debit/Credit):");
			 		    scanf("%s",&s.cn);
			 		    printf("\nEnter CVV:");
			 		    scanf("%d",&s.cvv);
			 		    printf("\n Enter OTP:");
			    	    scanf("%d",&s.otp);
			 		    printf("Select No.of Months:\n");
			 		    printf(" 3 Months\n 6 Months\n 9 Months\n 12 Months\n");
			 		    scanf("%d",&s.emi);
			 		    if(s.emi==3 || s.emi==6 || s.emi==9 || s.emi==12)
			 		      {
			 		    	s.DIS3=s.tc;
			                s.EM=s.DIS3/s.emi;
						  }
					} 
					//BILL FOR OWNER
					f=fopen("12345.csv","a");
				    if(s.n==1)
				    {
				    fprintf(f,"\t%d,\t%lld,\t%s,\t%d-%d-%d,\t%f,\t%s,\t%d-%d-%d,",rec++,s.mb,s.str,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,s.DIS,"CASH",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1902);
				    for(i=0;i<12;i++)
			            {
			  	        if(a[i]!=0)
			  		    fprintf(f,"\t%3s\t|",items[i]);
			            }    
					}
					if(s.n==2)
				   {
				    fprintf(f,"\t%d,\t%lld,\t%s,\t%d-%d-%d,\t%f,\t%s,\t%d-%d-%d,",rec++,s.mb,s.str,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,s.DIS1,"CREDIT CARD",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1902);
				    for(i=0;i<12;i++)
			            {
			  	        if(a[i]!=0)
			  		    fprintf(f,"\t%3s\t|",items[i]);
			            }    
					} 
				    if(s.n==3)
				    {
				    fprintf(f,"\t%d,\t%lld,\t%s,\t%d-%d-%d,\t%f,\t%s,\t%d-%d-%d,",rec++,s.mb,s.str,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,s.DIS2,"DEBIT CARD",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1902);
				    for(i=0;i<12;i++)
			            {
			  	        if(a[i]!=0)
			  		    fprintf(f,"\t%3s\t|",items[i]);
			            }    
					}
				    if(s.n==4)
				    {
				    fprintf(f,"\t%d,\t%lld,\t%s,\t%d-%d-%d,\t%f,\t%s,\t%d-%d-%d,",rec++,s.mb,s.str,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,s.DIS3,"EMI",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1902);
				    for(i=0;i<12;i++)
			            {
			  	        if(a[i]!=0)
			  		    fprintf(f,"\t%3s\t|",items[i]);
			            }    
					}
					fprintf(f,"\n");
					fclose(f);
					//BILL PRINT FOR CUSTOMER
					f=fopen("12345.csv","r");
					fprintf(stdout,"***************************W.A.SH STORE BILL*********************************\n");
					printf("-----------------------------------------------------------------------------\n");
					fprintf(stdout,"ID\tITEMS\t\tQUANTITY\tCOST\n");
					fprintf(stdout,"-----------------------------------------------------------------------------\n");
					for(i=0;i<12;i++)
			            {
			  	        if(a[i]!=0)
			  		    fprintf(stdout,"%d\t%s\t%d\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
			            }
			        fprintf(stdout,"-----------------------------------------------------------------------------\n");
			        fprintf(stdout,"RECEIPT NUMBER:\t%d\n",rec);
					fprintf(stdout,"\nCustomer Name:\t");
			        fprintf(stdout,"\t%s",s.str);
			        fprintf(stdout,"\n");
			        fprintf(stdout,"Customer Mobile Number:\t%lld\n",s.mb);
			        if(s.n==1){
			        fprintf(stdout,"Payment Mode:\tCash\n");
			        fprintf(stdout,"Total Cost[Including 10 percent discount]=\t%f\n",s.DIS);
			        }
			        if(s.n==2){
			        	fprintf(stdout,"Payment Mode:\tCredit Card\n");
			        	fprintf(stdout,"Total Cost[Including 7 percent discount]=\t%f\n",s.DIS1);
				   }
					if(s.n==3)
					{
					    fprintf(stdout,"Payment Mode:\tDebit Card\n");
			        	fprintf(stdout,"Total Cost[Including 5 percent discount]=\t%f\n",s.DIS2);	
				   }
					if(s.n==4)
					{
						fprintf(stdout,"Payment Mode:\tEMI\n");
						fprintf(stdout,"Total cost per each month=\t%f\n",s.EM);
			            fprintf(stdout,"No.of months to be paid=\t%d\n",s.emi);      
					}
					fprintf(stdout,"Payment Status:\tDone\n");
					fprintf(stdout,"Date Of Purchase:\t%d-%d-%d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
					fprintf(stdout,"NOTE:-Warranty Covers only for 2 years from purchase date on any product and 6 Months for exchange of products due any physical damage\n");
					fprintf(stdout,"Warranyt Valid Upto:\t%d-%d-%d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1902);
					fprintf(stdout,"***********************Thank You Wist Again**********************************\n");
					fprintf(stdout,"-----------------------------------------------------------------------------\n");
					fclose(f);
					break;
				case 5:
				main();
				break;
			    default:
				printf("Invalid Choice\n");	
			}
		}while(1);
}
