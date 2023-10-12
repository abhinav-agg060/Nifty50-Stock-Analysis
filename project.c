# include<stdio.h>
#include<string.h>

struct sensex{
    char name[20], sector[20];   
    float EPS, ROE, ROCE,PE, marketcap, debt, netprofit, shareprice, bookvalue ;  
};

void stocks_input(struct sensex *ptr, char input_name[], char input_sector[],float share_price, float shares_no, float net_profit, float debt, float book_value){     // * at ptr is calling by address to struct sensex data type
    strcpy((*ptr).name,input_name);
    strcpy((*ptr).sector,input_sector);
    ptr->marketcap=(share_price*shares_no);
    ptr->EPS=(net_profit/share_price);
    ptr->PE=share_price/(ptr->EPS);
    ptr->bookvalue=book_value;
    ptr->ROE=net_profit/(book_value*shares_no);
    ptr->ROCE=net_profit/(debt+(book_value*shares_no));
    ptr->debt=debt;
    ptr->netprofit=net_profit;
    ptr->shareprice=share_price;
    }

void stocks_print(struct sensex *ptr){
    printf("*REMEMBER ALL THE FIGURES ARE IN CRORES EXCEPT RATIOS*\n");
    printf("share price of the company : %f\n", ptr->shareprice);
    printf("Sector in which company works : %s\n", ptr->sector);
    printf("market cap of the company is %f\n", ptr->marketcap);
    printf("net profit of the company in march 2021 quarter : %f\n", ptr->netprofit);
    printf("Current debt on a company : %f\n", ptr->debt);
    printf("Book Value of the company is %f\n", ptr->bookvalue);
    printf("Earning Per Share of the company : %f\n", ptr->EPS);
    printf("Return On Equity of the company : %f\n", ptr->ROE);
    printf("Return On Capital Employed of the company : %f\n", ptr->ROCE);
    printf("Price To Earning Ratio of the company : %f\n", ptr->PE);
}


int main() {
    struct sensex stocks[30];
    int option_selection;
    // as of 4 march 2022
    // no. of shares are in crores
    // net profits are of last march2021 quarater.
    // debt is in crores.
    stocks_input(&stocks[0], "RELIANCE INDUSTRIES", "oil&gas",2325.55,676.6, 31944, 221698,736.56);
    stocks_input(&stocks[1], "HDFC BANK", "banks",1386, 554.38,31116, 0, 414.16 ); // finance company dont ahvea debts as providing capital is their business, mention it!
    stocks_input(&stocks[2], "HDFC", "housing finance",2217.50, 181.19, 12027, 0, 635.11);// same as abovea statement
    stocks_input(&stocks[3], "INFOSYS", "IT", 1723, 420.59, 18048, 0, 167.39);
    stocks_input(&stocks[4], "ICICI BANK", "banks",688.05, 694.70, 6193.81,0, 229.99);
    stocks_input(&stocks[5], "TCS", "IT",3524.35, 369.91, 30960,0,254.50);
    stocks_input(&stocks[6], "KOTAK BANK", "banks",1752.15, 198.41, 2131.36,0, 347.76);
    stocks_input(&stocks[7], "ITC", "cigrette products",225.50, 1232.29, 13031.64, 5.63, 51.40);
    stocks_input(&stocks[8], "HUL", "FMGC",2019.50, 234.96,7954 , 0, 212.54);
    stocks_input(&stocks[9], "BHARTIAIRTEL", "telecom service",653.70, 588.43,-25197.60 ,94407.70, 129.80);
    stocks_input(&stocks[10], "L&T", "construction",1711.75, 140.50,11336.97 , 23808.71, 444.66);
    stocks_input(&stocks[11], "AXIS BANK", "banks",715, 306.90,6588.50 ,0, 360.84);
    stocks_input(&stocks[12], "BAJAJ FINANCE", "finance",6537.90,60.36 , 1933.85 ,0,656.39);
    stocks_input(&stocks[13], "MARUTI SUZUKI INDIA", "automobile",7247.30, 30.21,4229.70 , 488.80,1724.65);
    stocks_input(&stocks[14], "ASIAN PAINTS", "paints",2738.15, 95.92, 3052.51,22.20, 134.21 );
    stocks_input(&stocks[15], "SBIN", "banks",461.95, 892.46, 8431.88, 0, 283.72);
    stocks_input(&stocks[16], "HCL TECH", "IT",1138.45, 271.37, 8743, 225, 283.72);
    stocks_input(&stocks[17], "NESTLE INDIA", "FMCG",17342.05, 9.54, 2082.43, 34.84, 216.20);
    stocks_input(&stocks[18], "SUN PHARMA", "pharmaceuticals",822.65, 239.93,2139.70 ,6688.82, 115.62);
    stocks_input(&stocks[19], "M&M", "automobile",690.55, 124.32,268.66 ,7666.81, 305.14);
    stocks_input(&stocks[20], "ULTRA CEMCO", "cement",5698.10, 28.87, 5342.07,17318.57, 1625.26);
    stocks_input(&stocks[21], "TITAN", "accessories",2389.70, 88.78, 877,4094,99.82);
    stocks_input(&stocks[22], "BAJAJ AUTO", "automobile",3234.65, 28.94, 4554.41,121.71,871.99);
    stocks_input(&stocks[23], "POWER GRID", "electric utilities",212.80, 697.55,11961.14 , 143051.48, 94.27);
    stocks_input(&stocks[24], "TECH MAHINDRA", "IT",1424.10, 97.12, 4239.10, 0, 269.66);
    stocks_input(&stocks[25], "HERO MOTORCORP", "automobile",2198.80, 19.98, 2964.20,0,817.91);
    stocks_input(&stocks[26], "NTPC", "electric utilites",130.05, 969.67, 13769.52,174488.61, 128.32);
    stocks_input(&stocks[27], "INDU SIND BANK", "banks",834.40, 77.47, 2836.39,0,593.24);
    stocks_input(&stocks[28], "ONGC", "oil&gas",186.95, 1258.03,11246.44 , 15022.66, 189.28);
    stocks_input(&stocks[29], "TATA STEEL", "iron&steel",1291.90, 122.23, 13606.62, 28348.30, 955.59);
    

    // options to be chosen what you need to be execute thorugh this function.
    label1:
    printf("\n\n\n*Remainder: Following actions are designed for only first top 30 stocks of indian stock market at exceptional cases you will be informed*\n\n\n");
    printf("please consider the following action you want to run from the following :\n\n    1.specific stocks you want the fundamentals of .. \n\n");  
    printf("    2. sector wise stocks in sensex first top 30 stocks\n\n    3. comparison of stocks side by side\n\n");
    printf("    4. To show companies with particular criteria conditions\n\n    5. exit\n\n\n");


    
    printf("      which option you want to progress with : ");
    scanf("%d", &option_selection);
    printf("\n\n\n");


// from here we are now writing a code of action for the options asked above. 
    switch(option_selection){

        case 1: {
                    printf("==>> Please have a look on the given stocks and select the one you want to pick \n");
                    for(int i=0;i<30;i++){
                        printf("     %d -> ", i+1);
                        puts(stocks[i].name);
                    }
                    printf("==>>Which one you want to select : ");
                    int selected_stock;
                    scanf("%d", &selected_stock);
                    stocks_print(&stocks[selected_stock-1]);
                    break;
                    }
        
        case 2: {
                    printf("CONSIDER THE FOLLOWING SECTORS:\n1.->oil&gas\n2.->banks\n3.housing finance\n4.->IT\n5.->cigrette products\n");
                    printf("6.->FMCG\n7.->telecom service\n8.->construction\n9.->finance\n10.->automobile\n11.->paints\n12.->pharmaceuticals\n13.->cement\n14.->accesseries\n");
                    printf("15.->electrical utility\n16.->iron&steel\n ");
                    printf("==>> Please select the sector whose stocks you want to filter from sensex :\n(please write exactly from the option)\n");
                    char sector_select[20],sno=0;
                    scanf("%s", sector_select);
                    printf("HERE IS THE LIST OF THE STOCKS RELATED TO SELECTED SECTOR FROM SENSEX\n\n");
                    for(int j=0;j<30;j++){
                        if(sector_select[0]==stocks[j].sector[0]){
                            if(sector_select[1]==stocks[j].sector[1])
                            sno++;
                            printf("%d->%s\n\n",sno, stocks[j].name);
                        }
                    }
                    printf("hence there are %d no. of stocks in sensex of %s sector\n\n\n", sno, sector_select);       
                    break;                 
                }

        case 3:{
                     printf("==>> Please have a look on the given stocks and select the one you want to pick \n");  // printing the name of all the stocks
                    for(int i=0;i<30;i++){
                        printf("     %d -> ", i+1);
                        puts(stocks[i].name);
                    }

                    int n;
                    printf("HOW MANY STOCKS YOU WANT TO COMPARE : ");
                    scanf("%d", &n);
                    int select[n];

                    for(int i=0;i<n;i++){
                        printf("enter the %d stock you want to compare(write its sno.) :", i+1);
                        scanf("%d", &select[i]);
                    }


                        for(int i=0;i<n;i++){
                        printf(" %s ||", stocks[select[i]-1].name);
                        }
                        printf("==>>> NAME\n\n");
                        

                        for(int i=0;i<n;i++){
                        printf(" %s ||", stocks[select[i]-1].sector);
                        }
                        printf("==>>> SECTOR\n\n");

                        for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].shareprice);
                        }
                        printf("==>>> SHAREPRICE\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].marketcap);
                        }
                        printf("==>>>MARKETCAP\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].netprofit);
                        }
                        printf("==>>>NETPROFIT\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].debt);
                        }
                        printf("==>>>DEBT\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].bookvalue);
                        }
                        printf("==>>>BOOKVALUE\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].EPS);
                        }
                        printf("==>>>EARNING PER SHARE\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].ROE);
                        }
                        printf("==>>>RETURN ON EQUITY\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].ROCE);
                        }
                        printf("==>>> RETURN ON CAPITAL EMPLOYED\n\n");

                         for(int i=0;i<n;i++){
                        printf(" %f ||", stocks[select[i]-1].PE);
                        }
                        printf("==>>>SHARE PRICE TO EARNING RATIO\n\n");
                    break;                
                }        
        case 4:{ printf("enter the criteria through which you need to filter the stocks of sensex\n");
                 printf("\n1.-> SHARE PRICE\n2.-> EPS\n3.-> BOOK VALUE\n4.->ROE\n5.->ROCE\n6.-> DEBT\n7.->NET PROFIT\n8.-> PE\n\n");
                 int option, action;
                 float value;
                 printf("SELECT NOW : ");
                 scanf("%d", &option);
                 printf("ACTION : TYPE -1 FOR LESS THAN || +1 FOR MORE THAN \n\n CHOOSE : ");
                 scanf("%d", &action);
                 printf("FROM WHICH NUMERIC VALUE YOU WANT COMPARE WITH THE SELECTED CRITERIA :");
                 scanf("%f", &value);

                    switch(option){             // add the respective value of fundamental in front of the stocks of criteria(fundamental) choosed.

                        case 1 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].shareprice<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].shareprice>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        
                        case 2 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].EPS<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].EPS>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        
                        case 3 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].bookvalue<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].bookvalue>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }

                        case 4 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].ROE<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].ROE>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        case 5 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].ROCE<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].ROCE>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        
                        case 6 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].debt<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].debt>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        case 7 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].netprofit<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].netprofit>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }

                        case 8 :{ 
                                    if(action == -1){
                                        for(int i=0;i<30;i++){
                                            if(stocks[i].PE<=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }   
                                    }
                                    else{
                                         for(int i=0;i<30;i++){
                                            if(stocks[i].PE>=value){
                                                printf("%d -> %s\n", i+1, stocks[i].name);
                                            }
                                        }  
                                    }
                                    break;
                                }
                        
                        default : printf("invalid input\n");
                    }
                }
    }
    if(option_selection != 5){
        int cont;
        printf("\n\n\n***enter 1 if you want to continue else write 0***\n");
        scanf("%d", &cont);
        if(cont==1){
            goto label1;
        }
    }
    
     return 0;
}