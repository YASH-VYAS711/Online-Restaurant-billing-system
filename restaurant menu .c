#include<stdio.h>
#include<stdlib.h>

//FUNCTIONS
void Show_menu();
void CART();

//STRUCTURES
struct Menu{
    int quantity;
    int cost;
}soups[5],starters[5],main_course[5],desserts[5],beverages[5];

//MAIN
int main(){
    int category_choice,i,j,item_choice;
    Show_menu();
    return(0);
}
void cart(){
    printf("\t\t    Soup\t\t    Starters\t\t    Main Course\t\t    Desserts\t\t    Beverages");
    printf("\t\t1>Tomato- ₹100\t");
}

void Show_menu(){
    int a,choice=0;
    while(1){
        if (choice==0){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t#     # ####### #     # #     # \n\t\t##   ## #       ##    # #     # \n\t\t# # # # #       # #   # #     # \n\t\t#  #  # #####   #  #  # #     # \n\t\t#     # #       #   # # #     # \n\t\t#     # #       #    ## #     # \n\t\t#     # ####### #     #  #####  \n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\ni. Soup\n\nii. Starters\n\niii. Main Course\n\niv. Desserts\n\nv. Beverages\n\n");
            printf("                                                                  Press 1 for next page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==1)
                choice++;
            else    
                printf("Enter valid choice");
            }
        else if(choice==1){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t  #####  ####### #     # ######\n\t\t #     # #     # #     # #     # \n\t\t #       #     # #     # #     # \n\t\t  #####  #     # #     # ######\n\t\t       # #     # #     # #\n\t\t #     # #     # #     # #\n\t\t  #####  #######  #####  #\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n                            Tomato\n\n\tFresh tomato soup made with fresh handpicked tomatoes \n\t   with fresh cream and lots of tasty crutons\n\n");
            printf("\n                            Spinach\n\n\t\tHot, tasty and healthy Spinach soup \n\t\t\twith fresh cream\n\n");
            printf("\n                           Sweet Corn\n\n\t\tMade with the sweetest American corn \n\t\t  garnished with fresh corriander\n\n");
            printf("                                                                  Press 2 for previous page\n");
            printf("                                                                  Press 1 for next page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==1)
                choice++;
            else if(a==2)
                choice--;
            else    
                printf("Enter valid choice");
        }
                                                                 
        else if(choice==2){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t  #####  #######    #    ######  ####### ####### ######   #####\n\t\t #     #    #      # #   #     #    #    #       #     # #     # \n\t\t #          #     #   #  #     #    #    #       #     # #       \n\t\t  #####     #    #     # ######     #    #####   ######   ##### \n\t\t       #    #    ####### #   #      #    #       #   #         # \n\t\t #     #    #    #     # #    #     #    #       #    #  #     #  \n\t\t  #####     #    #     # #     #    #    ####### #     #  #####\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n                            Paneer Tikka\n\n\tFresh and soft paneer marinated with onions and capsicums\n\t\t   served with fresh green chutney\n");
            printf("\n                            Gobi Manchurian\n\n\t     Crispy Gobi Manchurian, a classic Indian Chinese\n\t\t  garnished with fresh spring onions\n");
            printf("\n                            Hara Bhara Kabab\n\n\t    This green Kebab made with potato, spinach, peas and corriander \n\t\t\twon't disappoint you\n");
            printf("                                                                  Press 2 for previous page\n");
            printf("                                                                  Press 1 for next page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==1)
                choice++;
            else if(a==2)
                choice--;
            else    
                printf("Enter valid choice");
        }
        else if(choice==3){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t #    #   ##   # #    #     ####   ####  #    # #####   ####  ######\n\t\t ##  ##  #  #  # ##   #    #    # #    # #    # #    # #      #\n\t\t # ## # #    # # # #  #    #      #    # #    # #    #  ####  #####\n\t\t #    # ###### # #  # #    #      #    # #    # #####       # #     \n\t\t #    # #    # # #   ##    #    # #    # #    # #   #  #    # #      \n\t\t #    # #    # # #    #     ####   ####   ####  #    #  ####  ###### \n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n                            Dal Tadka\n\n\tThis toor dal with ghee tadka won't just water your mouth\n\t\t   but is a feast to your nose too\n");
            printf("\n                            Paneer Butter Masala\n\n\t       Generous soft Paneer chunks cooked in butter\n\t\t  It's nothing but heaven in a dish\n");
            printf("\n                            Punjabi Chole\n\n\t\tA classic of Punjab, Chole Bhature\n\t blended with spices and served with bhatura(bread)\n");
            printf("                                                                  Press 2 for previous page\n");
            printf("                                                                  Press 1 for next page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==1)
                choice++;
            else if(a==2)
                choice--;
            else    
                printf("Enter valid choice");
        }
        else if(choice==4){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t #####  ######  ####   ####  ###### #####  #####  ####  \n\t\t #    # #      #      #      #      #    #   #   #      \n\t\t #    # #####   ####   ####  #####  #    #   #    ####\n\t\t #    # #           #      # #      #####    #        # \n\t\t #    # #      #    # #    # #      #   #    #   #    # \n\t\t #####  ######  ####   ####  ###### #    #   #    ####  \n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n                            Gulab Jamun\n\n\tProbably the best Indian dessert ever\n\t\t   made with pure ghee\n");
            printf("\n                            Ice Cream\n\n\t        Various flavers of cold and creamy Ice Cream\n\t\t  Eat it all before it melts:)\n");
            printf("\n                            Pastery\n\n\t\tFresh Chocolate Pastery, soft and creamy \n\t It's litraly a piece of cake\n");
            printf("                                                                  Press 2 for previous page\n");
            printf("                                                                  Press 1 for next page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==1)
                choice++;
            else if(a==2)
                choice--;
            else    
                printf("Enter valid choice");
        }
                                                                        

 
 


 
                                                                
        else if(choice==5){
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t #####  ###### #    # ###### #####    ##    ####  ######  ####  \n\t\t #    # #      #    # #      #    #  #  #  #    # #      #     \n\t\t #####  #####  #    # #####  #    # #    # #      #####   #### \n\t\t #    # #      #    # #      #####  ###### #  ### #           # \n\t\t #    # #       #  #  #      #   #  #    # #    # #      #    # \n\t\t #####  ######   ##   ###### #    # #    #  ####  ######  #### \n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n                            Lime soda\n\n\tBest drink after a feast\n\t\t   a carbonated drink with the goodness of lemon\n");
            printf("\n                            Coke\n\n\t        Your Classic coke\n\t\t  Don't listen to Ronaldo\n");
            printf("\n                            Sprite\n\n\t\tThe best chilling drink ever made \n\t This lemony heaven tastes best when cold\n");
            printf("                                                                  Press 2 for previous page\n");
            printf("                                                                  Press 0 to go to CART\n");
            scanf("%d",&a);
            if (a==0)
                break;
            else if(a==2)
                choice--;
            else    
                printf("Enter valid choice");
        }
        
        system("cls");
    }
    printf("GONE TO CART");
    }