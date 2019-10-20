#include<stdio.h>
#include<string.h>
struct billing 
{
	char product[20];
	int product_id;
	float cost;
	int items;
};
struct billing p[20];
char username[10]="username";
char password[10]="password";
float discount=0.15;
	

void Admin()
{
	char u[10],p[10];
	
	printf("\n\t Kindly enter the username\n");
	scanf("%s",&u);
	printf("\tKindly enter the password\n");
	scanf("%s",&p);
	if((strcmp(username,u)==0)&&(strcmp(password,p)==0))
	update();
	else
	printf("\tusername and password are invalid");
}
void Billingagent()
{
	int count ,i,j,k=0,id[100],qnt[100];
	float ppq[50],price[50],subtotal=0.0;
	float total;
	printf("Welcome!\n");
	printf("\n\nEnter product count \n");
	scanf("%d",&count);
	printf("Enter product ID followeed by quantity puchased of %d",count);
	for(i=0;i<count;i++)
	scanf("%d %d",&id[i],&qnt[i]);
	for(i=0;i<20;i++)
	{
		for(j=0;j<count;j++)
		{
			if(p[i].product_id==id[j])
			{
				price[k]=p[i].cost*qnt[j];
				ppq[k]=p[i].cost;
			}
		}
	}
	//printf("\t\tPRODUCT_ID\t\tQUANTITY\t\tPRICE PER QUANTITY\t\tPRICE\n");
	for(i=0;i<150;i++)
	printf("*");
	printf("\n");
	printf("\t\tThank you for visiting HOME ESSENTIALS:)\n");
	
	printf("\t\t\t\tBILL NUMBER:\n");
	printf("PRODUCT ID\t\tCOUNT\t\tPRICE per Qty\t\tPRICE\n");
	for(i=0;i<count;i++)
	printf("%d\t\t\t%d\t\t%.2f\t\t\t%.2f\n",id[i],qnt[i],ppq[i],price[i]);
	
	
	//subtotal
	for(i=0;i<count;i++)
	subtotal=subtotal+price[i];
	printf("SUBTOTAL=%2.f\n",subtotal);
	//total
	total=subtotal-(subtotal*discount);
	printf("TOTAL=%2.f\n",total);
	//discount
	printf("DISCOUNT=%2.f\n",discount);
	
		for(i=0;i<150;i++)
	printf("*");
	printf("\n");

	
	
}
void update()
{	
	char p1[10],u1[10],p2[10],pro[20];
	int ch,n,i=0;
	float c,d;
	printf("Welcome:)");
	printf("1.Update Username\n");
	printf("2.Update Password\n");
	printf("3.Update the cost\n");
	printf("4.Update the stock\n");
	printf("5.Update Discount Percent\n");
	printf("6.Display product information\n");
	printf("7.Logout\n");
	printf("//select any one//");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Please enter the password\n");
				scanf("%s",p1);
				if(strcmp(password,p1)==0)
				{
					printf("Enter the New Username\n");
					scanf("%s",u1);
					strcpy(username,u1);
					
				}
				homescreen();
				break;
		case 2:	 printf("Please enter the password\n");
				scanf("%s",p1);
				if(strcmp(password,p1)==0)
				{
					printf("Enter the New Password\n");
					scanf("%s",p2);
					strcpy(password,p2);
					
				}
				homescreen();
				break;
		case 3: printf("Enter the product name for which the cost has to be increased\n");
				scanf("%s",pro);
				printf("enter the New cost  of product\n");
				scanf("%2.f",&c);
				while(i<20)
				{
				
					if(strcmp(p[i].product,pro)==0)
					{
						p[i].cost=c;
					}
					i++;
				}
				homescreen();
				break;
				
		case 4: printf("Enter the product name for which the stock has to be increased\n");
				scanf("%s",pro);
				printf("enter the number of new items\n");
				scanf("%d",&n);
				i=0;
				while(i<20)
				{
					if(strcmp(p[i].product,pro)==0)
					{
						p[i].items=p[i].items+n;
					}
					i++;
					
				}
				homescreen();
				break;
		case 5: printf("Enter the New DiscountPercent\n");
				scanf("%.2f",&d);
				discount=d;
				homescreen();
				break;
		case 6: printf("PRODUCT_ID\t\tPRODUCT\t\t\t\tCOST\t\tITEMSCOUNT\n");
				for(i=0;i<20;i++)
				printf("%d\t\t\t%-11s\t\t\t%.2f\t\t%d\n",p[i].product_id,p[i].product,p[i].cost,p[i].items);
				homescreen();
				break;
		case 7: homescreen();
				break;
	
	}
}
void homescreen()
{
	int ch;
	printf("\t\t\t\t\tWelcome to HOME ESSENTIALS:)\n");
	printf("\tLogin as:\n\n");
	printf("\t1.Admin\n");
	printf("\t2.Billing agent\n\n");
	printf("\t//select any one//");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			 Admin();
			break;
		case 2:
			Billingagent();	
			break;
	}
}
	
void main()
{
	int i;
	//products
	strcpy(p[0].product,"coffeemaker");
	strcpy(p[1].product,"Blender");
	strcpy(p[2].product,"Mixer");
	strcpy(p[3].product,"toaster");
	strcpy(p[4].product,"Microwave");
	strcpy(p[5].product,"Rice cooker");
	strcpy(p[6].product,"Prassuer cooker");
	strcpy(p[7].product," griller");
	strcpy(p[8].product,"stove");
	strcpy(p[9].product,"clothes iron");
	strcpy(p[10].product,"Air conditioner");
	strcpy(p[11].product,"vaccum cleaner");
	strcpy(p[12].product,"Oven");
	strcpy(p[13].product,"Dish Washer");
	strcpy(p[14].product,"speaker");
	strcpy(p[15].product,"Hair drier");
	strcpy(p[16].product,"Refidgerator");
	strcpy(p[17].product,"washing amchine");
	strcpy(p[18].product,"Telivison");
	strcpy(p[19].product," cooler");
	
	
	//product id's
	p[0].product_id=5220;
	p[1].product_id=5221;
	p[2].product_id=5222;
	p[3].product_id=5223;
	p[4].product_id=5224;
	p[5].product_id=5225;
	p[6].product_id=5226;
	p[7].product_id=5227;
	p[8].product_id=5228;
	p[9].product_id=5229;
	p[10].product_id=5230;
	p[11].product_id=5231;
	p[12].product_id=5232;
	p[13].product_id=5233;
	p[14].product_id=5234;
	p[15].product_id=5235;
	p[16].product_id=5236;
	p[17].product_id=5237;
	p[18].product_id=5238;
	p[19].product_id=5239;
	//products cost
	p[0].cost=1080.00;
	p[1].cost=2995.00;
	p[2].cost=2099.00;
	p[3].cost=1065.00;
	p[4].cost=9642.00;
	p[5].cost=1380.50;
	p[6].cost=1699.00;
	p[7].cost=1000.14;
	p[8].cost=3000.09;
	p[9].cost=3385.00;
	p[10].cost=9259.00;
	p[11].cost=7590.39;
	p[12].cost=5199.00;
	p[13].cost=9340.00;
	p[14].cost=6999.00;
	p[15].cost=9999.00;
	p[16].cost=9999.00;
	p[17].cost=7999.00;
	p[18].cost=1250.00;
	p[19].cost=9999.00;
	
	//number of items
	p[0].items=15;
	p[1].items=10;
	p[2].items=15;
	p[3].items=19;
	p[4].items=5;
	p[5].items=25;
	p[6].items=14;
	p[7].items=18;
	p[8].items=35;
	p[9].items=17;
	p[10].items=8;
	p[11].items=9;
	p[12].items=18;
	p[13].items=20;
	p[14].items=10;
	p[15].items=7;
	p[16].items=5;
	p[17].items=12;
	p[18].items=18;
	p[19].items=5;
	//printf("PRODUCT_ID\t\tPRODUCT\t\t\t\tCOST\t\tITEMSCOUNT\n");
	/*for(i=0;i<20;i++)
	printf("%d\t\t\t%-11s\t\t\t%.2f\t\t%d\n",p[i].product_id,p[i].product,p[i].cost,p[i].items);
	*/
	homescreen();
	
}
