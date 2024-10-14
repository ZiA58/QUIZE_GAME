#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void help();
void award(int score);


int main(){
int countr,r,r1,count,n;
char choice;
char playername[20];
int score=0;


printf("\t\t============YOUR NAME PLEASE===============\t\t\n");
printf("\t\t===========================================\t\t\n");


mainhome:
    //printf("clear") ;
    printf("\t\t=============WELLCOME TO QUIZE GAME=============\t\t\n");
    printf("\t\t============CHOOSE THE OPTION===================\t\t");
    printf("\n\t\t\t-> S_FOR START\t\t\t");
    printf("\n\t\t\t-> Q_FOR QUIT\t\t\t");
    printf("\n\t\t\t-> H_FOR HELP\t\t\t");
    printf("\n\t\t\t-> A_FOR SHOW AWARD\t\t\t\n");

    printf("\t\t===========================================\t\t\n");

    choice=toupper(getchar());
    getchar();
    if(choice=='S'){
        //system("clear") ;
        printf("\t\t\tWeLLCOME TO GAME\t\t\t\n");
        printf("Before game there are some tips,you should follow!!\n");
        printf("Press 'Y' To Play Or Go To Home!! \t\t\n\n");
        if(toupper(getchar())=='Y'){
            goto level_1;

        }
        else{
        goto mainhome;
        }
    }

    else if(choice=='H'){
        help();
        getchar();
        goto mainhome;
    }

    else if(choice=='Q'){
        printf("=============Thank you for playing the game==========\n");
        exit(1);
    }
    else if(choice=='A'){
        award(score);
        getchar();
        goto mainhome;

    }
    else
        {
    printf("Please Enter the right Option\n");
    goto mainhome;
}


level_1:
    printf("\n\nWELCOME TO LEVEL_1");
    int count_1=0;
    int i;
    for(i=1;i<=6;i++){
        //system("clear");
        getchar();
        r1=i;
        switch(r1){
        case 1:
            printf("\n\n1.Where is Bangladesh?");
            printf("\n\nA.North Asia\t\tB.South Asia\n\nC.East Asia\t\tD.West Asia\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.South Asia\n");
            getchar();
            break;
            }
        case 2:
            printf("\n\n2.What is the capital of Bangladesh?");
            printf("\n\nA.Dhaka\t\t\tB.Rajshahi\n\nC.Sylhet\t\tD.Chittagang\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.Dhaka\n");
            getchar();
            break;
            }
        case 3:
            printf("\n\n3.What is the national fruit of Bangladesh?");
            printf("\n\nA.Apple\t\t\tB.Jackfruit\n\nC.Watermelon\t\tD.Orange\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Jackfruit\n");
            getchar();
            break;
            }
        case 4:
            printf("\n\n4.What is the national animal of Bangladesh?");
            printf("\n\nA.Kangaroo\t\t\tB.Goat\n\nC.Royal Bengal Tiger\t\tD.Lion\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C.Royal Bengal Tiger\n");
            getchar();
            break;
            }
        case 5:
            printf("\n\n5.What is the national flower of Bangladesh?");
            printf("\n\nA.Sunflower\t\tB.Rose\n\nC.Tulip\t\t\tD.Lily\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Lily\n");
            getchar();
            break;
            }
        case 6:
            printf("\n\n6.What is the national poet of Bangladesh?");
            printf("\n\nA.Rabindranath Tagore\t\tB.Kazi Najrul Islam\n\nC.Mi Mosharraf Hossain\t\tD.Bangkim ChandraChattapadya\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_1++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Kazi Najrul Islam\n");
            getchar();
            break;
            }
        }
    }


if(count_1>=3){
    score=score+1000;
    printf("\n\n\nTHE RESULT IS: %d",count_1);
    printf("\n\nCONGRATULATION,YOU ARE ELLIGIBLE TO NEXT LEVEL!\n");
    //getchar();
    goto test_2;
}
else{
  printf("\n\n\nTHE RESULT IS: %d",count_1);
  printf("\n\nSORRY,YOU ARE NOT ALLOWED TO NEXT LEVEL!\n");
  goto mainhome;
}

test_2:
    printf("\n\n->PRESS P TO NEXT LEVEL!\n");
    if(toupper(getchar())=='P'){
        goto level_2;
    }
    else{
        goto mainhome;
    }

level_2:
     printf("\n\nWELCOME TO LEVEL_2");
     int count_2=0;
     for(i=1;i<=6;i++){
        getchar();
        switch(i){
        case 1:
            printf("\n\n1.How many stars are on the Chinese flag?");
            printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.9\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.5\n");
            getchar();
            break;
            }
        case 2:
            printf("\n\n2.How many colors are on the South African flag?");
            printf("\n\nA.2\t\tB.4\n\nC.6\t\tD.8\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C.6\n");
            getchar();
            break;
            }
        case 3:
            printf("\n\n3.What colors are on theUnited Nations flag?");
            printf("\n\nA.Red and Blue\t\tB.White and Blue\n\nC.Green and Red\t\tD.White and Red\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.White and Blue\n");
            getchar();
            break;
            }
        case 4:
            printf("\n\n4.In what country is the Chernobyl nuclear plant located?");
            printf("\n\nA.Russia\t\tB.Ukraine\n\nC.USA\t\tD.China\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Ukraine\n");
            getchar();
            break;
            }
        case 5:
            printf("\n\n5.What is the capital of Canada?");
            printf("\n\nA.Dublin\t\tB.Ottawa\n\nC.London\t\tD.Sofia\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Ottawa\n");
            getchar();
            break;
            }
        case 6:
            printf("\n\n6.What is the capital of Bulgaria?");
            printf("\n\nA.Dublin\t\tB.Ottawa\n\nC.London\t\tD.Sofia\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_2++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Sofia\n");
            getchar();
            break;
            }

        }
     }

if(count_2>=4){
    score=score+1000;
    printf("\n\n\nTHE RESULT IS: %d",count_2);
    printf("\n\nCONGRATULATION,YOU ARE ELLIGIBLE TO NEXT LEVEL!\n");
    //getchar();
    goto test_3;
}
else{
  printf("\n\n\nTHE RESULT IS: %d",count_2);
  printf("\n\nSORRY,YOU ARE NOT ALLOWED TO NEXT LEVEL!\n");
  goto mainhome;
}

test_3:
    printf("\n\n->PRESS P TO NEXT LEVEL!\n");
    if(toupper(getchar())=='P'){
        goto level_3;
    }
    else{
        goto mainhome;
    }

level_3:
    printf("\n\nWELCOME TO LEVEL_3");
    int count_3=0;
    for(i=1;i<=6;i++){
        getchar();
        switch(i){
        case 1:
            printf("\n\n1.What sport is considered the most popular in the world?");
            printf("\n\nA.Football\t\tB.Cricket\n\nC.Tennis\t\tD.Golf\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.Football\n");
            getchar();
            break;
            }
        case 2:
            printf("\n\n2.What year is officially recognized as the beginning of the modern Olympic Games?");
            printf("\n\nA.1886\t\tB.1896\n\nC.1906\t\tD.1916\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.1896\n");
            getchar();
            break;
            }
        case 3:
            printf("\n\n3.What distance do marathon participants run?");
            printf("\n\nA.10 km\t\tB.21 km\n\nC.42195 km\t\tD.100 km\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C.42195 km\n");
            getchar();
            break;
            }
        case 4:
            printf("\n\n4.In what country boxer Muhammad Ali born?");
            printf("\n\nA.USA\t\tB.UK\n\nC.Canada\t\tD.Jamaica\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.USA\n");
            getchar();
            break;
            }
        case 5:
            printf("\n\n5.What ball is used in table tennis?");
            printf("\n\nA.Football\t\tB.Basketball\n\nC.Tennis\t\tD.Ping-pong\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Ping-pong\n");
            getchar();
            break;
            }
        case 6:
            printf("\n\n6.What color ball is used in most snooker games?");
            printf("\n\nA.Green\t\tB.Blue\n\nC.Red\t\tD.Yellow\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_3++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C.Red\n");
            getchar();
            break;
            }
        }
    }

if(count_3>=4){
    score=score+1000;
    printf("\n\n\nTHE RESULT IS: %d",count_3);
    printf("\n\nCONGRATULATION,YOU ARE ELLIGIBLE TO NEXT LEVEL!\n");
    //getchar();
    goto test_4;
}
else{
  printf("\n\n\nTHE RESULT IS: %d",count_3);
  printf("\n\nSORRY,YOU ARE NOT ALLOWED TO NEXT LEVEL!\n");
  goto mainhome;
}

test_4:
    printf("\n\n->PRESS P TO NEXT LEVEL!\n");
    if(toupper(getchar())=='P'){
        goto level_4;
    }
    else{
        goto mainhome;
    }


level_4:
    printf("\n\nWELCOME TO LEVEL_4");
    int count_4=0;
    for(i=1;i<=5;i++){
        getchar();
        switch(i){
        case 1:
            printf("\n\n1.Which of these movies is not based on a book?");
            printf("\n\nA.Little Women\t\tB.The Hunger Games\n\nC.The Godfather\t\tD.Avatar\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_4++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Avatar\n");
            getchar();
            break;
            }
        case 2:
            printf("\n\n2.In the 'Harry Potter' film series, who played the character Hermione Granger?");
            printf("\n\nA.Emma Watson\t\tB.Emma Stone\n\nC.Emma Roberts\t\tD.Emma Thompson\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_4++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.Emma Watson\n");
            getchar();
            break;
            }
        case 3:
            printf("\n\n3.The film 'The Shawshank Redemption' is based on a novella by which author?");
            printf("\n\nA.Stephen King\t\tB.John Grisham\n\nC.J.K. Rowling\t\tD.Dan Brown\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_4++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.Stephen King\n");
            getchar();
            break;
            }
        case 4:
            printf("\n\n4.The film 'The Jungle Book' is based on a novella by which author?");
            printf("\n\nA.Stephen King\t\tB.John Grisham\n\nC.J.K. Rowling\t\tD.Dan Brown\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_4++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C. J.K. Rowling\n");
            getchar();
            break;
            }
        case 5:
            printf("\n\n5.Who narrates the animated classic 'How the Grinch Stole Christmas'?");
            printf("\n\nA.Jim Carrey\t\tB.Will Ferrel\n\nC.Tom Hanks\t\tD.Boris Karloff\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_4++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Boris Karloff\n");
            getchar();
            break;
            }

        }
    }


if(count_4>=4){
    score=score+1000;
    printf("\n\n\nTHE RESULT IS: %d",count_4);
    printf("\n\nCONGRATULATION,YOU ARE ELLIGIBLE TO NEXT LEVEL!\n");
    //getchar();
    goto test_final;
}
else{
  printf("\n\n\nTHE RESULT IS: %d",count_4);
  printf("\n\nSORRY,YOU ARE NOT ALLOWED TO NEXT LEVEL!\n");
  goto mainhome;
}

test_final:
    printf("\n\n->PRESS P TO NEXT LEVEL!\n");
    if(toupper(getchar())=='P'){
        goto level_final;
    }
    else{
        goto mainhome;
    }

level_final:
    printf("\n\nWELCOME TO LEVEL_FINAL");
    int count_final=0;
    for(i=1;i<=5;i++){
        getchar();
        switch(i){
        case 1:
            printf("\n\n1.Who painted the ceiling of the Sistine Chapel?");
            printf("\n\nA.Vincent van Dali\t\tB.Leonadro da Vinci\n\nC.Michelangelo\t\tD.Salvador Dali\n\n");
            if(toupper(getchar())=='C'){
                printf("Correct Answer!!\n");
                count_final++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is C.Michelangelo\n");
            getchar();
            break;
            }
        case 2:
            printf("\n\n2.Who painted the art 'Mona Lisa'?");
            printf("\n\nA.Vincent van Dali\t\tB.Leonadro da Vinci\n\nC.Michelangelo\t\tD.Salvador Dali\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_final++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Leonadro da Vinci\n");
            getchar();
            break;
            }
        case 3:
            printf("\n\n3.Who sculpted the statue of  'The Thinker'?");
            printf("\n\nA.Auguste Rodin\t\tB.Leonadro da Vinci\n\nC.Michelangelo\t\tD.Salvador Dali\n\n");
            if(toupper(getchar())=='A'){
                printf("Correct Answer!!\n");
                count_final++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is A.Auguste Rodin\n");
            getchar();
            break;
            }
        case 4:
             printf("\n\n4.Which Dutch painter is known for his works featuring sunflowers?");
            printf("\n\nA.Auguste Rodin\t\tB.Vincent van Gogh\n\nC.Michelangelo\t\tD.Salvador Dali\n\n");
            if(toupper(getchar())=='B'){
                printf("Correct Answer!!\n");
                count_final++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is B.Vincent van Gogh\n");
            getchar();
            break;
            }
        case 5:
            printf("\n\n4.Which artist is associated with the melting clocks in the painting 'The Persistence of Memory'?");
            printf("\n\nA.Auguste Rodin\t\tB.Vincent van Gogh\n\nC.Michelangelo\t\tD.Salvador Dali\n\n");
            if(toupper(getchar())=='D'){
                printf("Correct Answer!!\n");
                count_final++;
                getchar();
                break;
            }else{
            printf("Wrong Answer!!\nCorrect Answer is D.Salvador Dali\n");
            getchar();
            break;
            }

        }
    }

if(count_final>=4){
    printf("\n\nCONGRATULATION,YOU HAVE PASSED ALL LEVEL!!");
    score=score+5000;
    getchar();
    goto mainhome;
}
else{
    printf("\n\nSORRY,YOU DIDN'T REACH THE FINAL LEVEL!!");
    //score=score+2000;
    getchar();
    goto mainhome;
}

return 0;
}



void help(){
printf("1.Press Enter to continue next question.\n2.To choose the option,You have to push 'A','B','C','D'.\n");
printf("If You Don't Fill Easy,Then take Preparation from Goggle Platform\n");
}

void award(int score){
printf("\n\nYOUR BALANCE IS %d$",score);
}
