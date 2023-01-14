#include<stdio.h>
#include<stdlib.h>//header that add to use cls function
#include<string.h>//header that add to use string function

 int greeting();// welcome fucnction creating
 int Selection();//menu function creating
 int Buy();//purshase function creating
 int login();//funvtion for login
 int update();
 int a=250;
 int b=230;
 int c=210;
 int d=250;
 int e=260;

  int main(){
   	greeting();//welcome function  calling

//    purchase();//pursahse function calling


}
  int login(){

  	int passw;
  	int username;

   	printf("            ****  ****  ****  ****  ****  ****\n");
  	printf("            *     *  *  *     *     *     *            \n");
  	printf("            *     *  *  ****  ***   ***   ****  \n");
  	printf("            *     *  *  *     *     *      *             \n");
  	printf("            ****  ****  *     *     ****  **** \n\n\n");
  	 printf("                          WELCOME CUSTOMER\n\n\n");

  	 printf("   !enter password......>");
  	 scanf("%d",&passw);

  	  printf("   !enter username.....>");
  	 scanf("%d",&username);

  	 if(passw==1997 && username==1997 ){
  	 	update();

	   }

  	 else{
  	 	system("CLS");
  	 	greeting();

	   }

	   }
	   int update(){
	   	 printf("\n\n\n\t\t\t!*enter price for Caffè Americano=RS.");
	   	 scanf("%d",&a);

	   	 printf("\n\t\t\t!* enter price for Café Latte=RS.");
	   	 scanf("%d",&b);

		printf("\n\t\t\t!* enter price for Espresso	=RS.");
	   	 scanf("%d",&c);

	 	printf("\n\t\t\t!* enter price for cappuccino=RS.");
	   	 scanf("%d",&d);

		printf("\n\t\t\t!* enter price for  Salted cameral =RS.");
	   	 scanf("%d",& e);


	   }

	   int greeting(){


	   	int continuex;
		   int c;//continoue variable

  	printf("            ****  ****  ****  ****  ****  ****\n");
  	printf("            *     *  *  *     *     *     *                 \n");
  	printf("            *     *  *  ****  ****  ****  ****  \n");
  	printf("            *     *  *  *     *     *     *               \n");
  	printf("            ****  ****  *     *     ****  ****   \n\n\n");
  	 printf("                       !.....WELCOME CUSTOMER.....!\n\n\n");



  	 printf("             $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ \n\n");
  	 printf("             $     PLEASE ENTER 1 TO CONTINOUE         $\n");
  	 printf("             $      PLEASE ENTER 2 TO EXIT             $\n");
   	 printf("             $      ENTER 3 TO LOG AS ADMIN            $\n\n");
	 printf("             $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $\n\n\t..........>");


  	        scanf("%d",&continuex);
  	         printf("Loading..");

			system("CLS");
  	  if(continuex==1){

  	  	Selection();

		}

       else if(continuex==2){
       	printf("YOU HAVE EXITED SUCCESFULLY\n\n");//last screen

	   	greeting();

	   }
	   else if(continuex==3){
	   	login();
	   }

	   else{
	   	printf("Error Please Check Your Input\n");
		   printf("\n\n\n");
	   greeting();
	   }

}




  int Selection(){
  	int ingrediant;
    printf("            ****  ****  ****  ****  ****  ****\n");
  	printf("            *     *  *  *     *     *     *                 \n");
  	printf("            *     *  *  ****  ****  ****  ****  \n");
  	printf("            *     *  *  *     *     *     *               \n");
  	printf("            ****  ****  *     *     ****  ****   \n\n\n");
  	 printf("                          COFFEE MENU\n\n\n");



     printf("            1.Caffè Americano\n\n\t*Natural Flaovours\n\n\t*Brewed Espresso\n\n\t*Whispped Cream\n\n\t*Milk\n\n\t*Sugar\n\n\t*Water\n\n\t*Mocha Sauce\n\n\t*Cocoa Pressed With Alkai\n\n                            ==>Price-RS.250/=\n\n\n");//ice
  	 printf("            2.Café Latte\n\n\t*Coffee 6 Table Spoon\n\n\t*13 Ounces Milk\n\n\t*8 Ounces water\n\n\t*4 Tablespoons Brown Sugar\n\n\t*1/8 Teaspoon Ground Ginger\n\n\t*1 Pinches Ground Cloves\n\n\t*2 Pinches Ground Cinnomon\n\n\t*1/2 Teaspoon Vanilla Extract\n\n                            ==>price-RS.230/=\n\n");
  	 printf("            3.Espresso\n\n\t*3 Condensed Milk\n\n\t*8 oz Boiling Water\n\n\t*3 Tablespoons Dark French Roast Coffee\n\n                            ==>price-RS.210/=\n\n ");//ice
  	 printf("            4.cappuccino\n\n\t*10 Ounces Hot Black Coffee\n\n\t*1/4 Teaspoon Hazelnut\n\n\t*1/4 Teaspoon Rum\n\n\t*Splender Sugar\n\n                           ==>price-RS.250/=\n\n");
  	 printf("            5.Salted cameral\n\n\t*1/8 teaspoon Ground Cinnomon\n\n\t*2 Tablespoons Chocolate Syrup\n\n\t*1/4 Cup Kahula Coffee Liqueur\n\n\t*2 Tablespoons Tequila\n\n\t*2 tablespoons Heavy Cream\n\n\t*1/2 Cup Water\n\n\t*Other Dark Roast  Coffee\n                         ==>price-RS.260/=\n\n\n ");//ice

  	 printf("\t\t\tPRESS 1 TO PURCHASE AND 2 TO EXIT...............>");
  	 scanf("%d",&ingrediant);
  	   if(ingrediant==1){
  	   //	system("CLS");
  	   Buy();
		 }
		 else if(ingrediant==2){
		 	greeting();
			 		 }
		else{
			Selection();
		}


  }


  int Buy(){
  	int type;//selection of
  	int quantity;
  	int extra_ingrediants;
  	int temparature;

  printf("\n\n1=>Caffè Americano price=RS.%d= \n2=>Café Latte price=RS.%d/=  \n3=>Espresso price=RS.%d/=  \n4=>cappuccino price=RS.%d/=  \n5=>Salted cameral price=RS.%d/=\n\n",a,b,c,d,e);
  printf("\n\t\t##please enter any type of coffee...........>");
  scanf("%d",&type);

  printf("\n\t\t##please enter quantity of coffee...........>");
  scanf("%d",&quantity);

  printf("\n\t\t##please enter the extra ingrediants for coffee\n\t\t 1=>SUGAR\n \t\t2=> COFFEE \n \t\t3=>MILK\n \t\t4=>WATER\n \t\t5=>CHOCOLATE...........>");

  scanf("%d",&extra_ingrediants);

  printf("\n\t\t##please select the temparature of the coffee...........>");
  scanf("%d",&temparature);

  int tot;//select type
  if(type==1){
  	tot=quantity*a;
  printf("\n\n               TOTAL PRICE IS....>RS.%d",tot);

  }
  if(type==2){
  	tot=quantity*b;
  printf("\n\n                 TOTAL PRICE IS....> RS.%d",tot);

  }
  if(type==3){
  	tot=quantity*c;
  printf("\n\n                 TOTA PRICE IS....> RS.%d",tot);

  }
  if(type==4){
  	tot=quantity*d;
  printf("\n\n                TOTAL PRICE IS....> RS.%d",tot);

  }
  if(type==5){
  	tot=quantity*e;
  printf("\n\n               TOTAL PRICE IS....> RS.%d",tot);

  }

  int next;
  printf("\n\n.......PLEASE PRESS 1 TO CONTINUE AND 2 TO EXIT...........>");
  scanf("%d",&next);

  switch(next){
     case 1:system("CLS");
     break;
     case 2:printf("enter to exit\n\n");
     break;
     default:printf("ERROR\n\n");
  }
  printf("\nTHANK YOU!Have a nice day");
  	greeting();
  }

