#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>


using namespace std;



int main(){

    
   /* 
    int iSecret, iGuess, iYum, iYummy, iCool, iCooler, iDealer;
    srand (time(NULL)); //initialize random seed
    
    iSecret = rand() % 11 + 1; //generates secret number between 1 and 11
    
    iYum = rand() % 11 + 1;
    
    iYummy = rand() % 11 + 1;
    
    iCool = rand() % 11 + 1;
    
    iCooler = rand() % 11 + 1;
    
    iDealer = rand() % 7 + 14;*/
    
  
  
    
    
    
    std::string yes;
    std::string no;
    std::cout << "Do you want to play Blackjack? (yes or no, only use lowercase letters for your input):";{
    std::cin >> yes;
    if (yes == "yes"){ //this is the model
        std::cout<< std::endl << "This game of Blackjack will be slightly different than your mother's Blackjack." << std::endl <<
        "For one, there are only 4 face cards in the entire deck, worth a value of 10, and your odds" << std::endl<<
        "of receiving one of these cards is just as likely as receiving any other card. The dealer is" << std::endl <<
        "crooked if you haven't figured that out yet. Every win earns you $50, while every loss puts" << std::endl << 
        "you down $50. In the event of a draw you breakeven. At the beginning of the game you start" << std::endl <<
        "with $100, probably money you stole from your grandma during that awkward dinner party... if"<< std::endl <<
        "you lose all of your money you are kicked out of the casino... if you end up with more than" << std::endl <<
        "$1000 than you will also be kicked out of the casino because you are too much of a boss at" << std::endl <<
        "Blackjack. Your funds will be displayed at the beginning of a game. To leave the casino,"<< std::endl <<
        "press 'q'before a game starts. Goodluck"<< std::endl << std::endl;
        
        
        
        
       // char choice;
        
       // do{
       
    
    float iCash = 100;
    
        while(1){    
             
    int iSecret, iGuess, iYum, iYummy, iCool, iCooler, iDealer;
    char q;
    srand (time(NULL)); //initialize random seed
    
    iSecret = rand() % 11 + 1; //generates secret number between 1 and 11
    
    iYum = rand() % 11 + 1;
    
    iYummy = rand() % 11 + 1;
    
    iCool = rand() % 11 + 1;
    
    iCooler = rand() % 11 + 1;
    
    iDealer = rand() % 7 + 14;
    

    
    //if (i = -50){
       // iCash = 50 + i;
   // }
    
    //for (int i = 0; i <= 5; i++){
    //guesses[i] = fruit;
    
    
    std::cout <<"------------------------------------------------------------------------------------------------"<<std::endl<<
    "You currently have " << (iCash) << "$ funds" << std::endl << std::endl<<
    "If you want to quit, press 'q', if you want to keep playing, input any other letter.";
    std::cin >> q;
    std::cout << std::endl;
    
    if (q == 'q')
    {
    return 0;
    }
    else{
        
        
        
        std::cout << (iSecret + iYum);
        
        if ((iSecret + iYum) > 21){
            std::cout <<  " is the value of your hand... wow you have no luck, you lose." << std::endl;
            (iCash = iCash-(50));
            std::cout << iCash << std::endl;
            
            break;
            
                return 1;
        }
        if ((iSecret + iYum) == 21){
            std::cout << " is the value of your hand... wow you are extremely lucky, you win." << std::endl;
            std::cout << std::endl;
            (iCash = iCash+(50));
            break;
                return 1;        
            
        }
            else{
            do {
                
                printf (" is the sum of your first two card values, do you want to take a hit? (yes or no): ");
                {
                    
                std::cin >> yes; 
                    
                {
                
                if (yes == "yes"){
                std::cout <<(iSecret + iYum + iYummy);
                }
                else{//if (std::cin >> no){
                std::cout<<std::endl<< "Why are you so scared? Are you gambling with your kid's college fund?" << std::endl << (iDealer) << " is the dealer's hand" <<std::endl;
                if (iDealer > (iSecret + iYum)){
                    std::cout << "You have clearly lost the game and probably your kid's future." <<std::endl;
                    (iCash = iCash-(50));
                }
                if (iDealer < (iSecret + iYum)){
                    std::cout << "You have won the game... try to resist the urge to gamble your kid's money again." <<std::endl;
                    (iCash = iCash+(50));
                }
                if (iDealer == (iSecret + iYum)){
                    std::cout << "It's a tie!";
                }
                std::cout << std::endl;
                break;
                
                return 1;    
                
                }
                
                
                //else{//if (std::cin >> no){
                      // std::cout <<("hi") <<std::endl; 
                       // return 0;    
                       // }
                
                }
                    
                    if ((iSecret + iYum + iYummy) > 21){ 
                        std::cout <<(" is the value of your hand... you definitely lose!") <<std::endl;
                        std::cout << std::endl;
                        (iCash = iCash-(50));
                        break;
                        return 1; 
                    }
                    if ((iSecret + iYum + iYummy) == 21){ 
                        std::cout <<(" is the value of your hand... you win!") <<std::endl; 
                        std::cout << std::endl;
                        (iCash = iCash+(50));
                        break;
                        return 1; 
                    }
                    if ((iSecret + iYum + iYummy) < 21){ 
                        printf (" is the value of the cards in your hand, do you want to take a hit again? (yes or no): ");
                        std::cin >> yes;
                        if (yes == "yes"){
                        std::cout <<(iSecret + iYum + iYummy + iCool);
                        }
                    else{//if (std::cin >> no){
                    std::cout <<std::endl<< "Playing it safe is not always the way to go..." << std::endl << (iDealer) << " is the dealer's hand"  <<std::endl;
                    if (iDealer > (iSecret + iYum + iYummy)){
                    std::cout << "See, you have lost the game." <<std::endl;
                    (iCash = iCash-(50));
                    }
                    if (iDealer < (iSecret + iYum + iYummy)){
                    std::cout << "But in this case it was... you have won the game. Buy your mom something nice." <<std::endl;
                    (iCash = iCash+(50));
                    }
                    if (iDealer == (iSecret + iYum + iYummy)){
                    std::cout << "It's a tie!!!" <<std::endl;
                        }
                        std::cout << std::endl;
                        break;
                    return 1; 
                    }
                        
                    }
                
                    
                    /*
                        
                         if ((iSecret + iYum + iYummy) > 21){ 
                        std::cout <<(" is the value of your hand... you definitely lose!") <<std::endl; 
                        return 0; 
                    }
                        if ((iSecret + iYum + iYummy) == 21){ 
                        std::cout <<(" is the value of your hand... you win!") <<std::endl; 
                        return 0; 
                    }
                    
                         if ((iSecret + iYum + iYummy) < 21){ 
                        printf (" is the value of the cards in your hand, do you want to take a hit again? (yes or no): ");
                        std::cin >> yes;
                        if (yes == "yes"){
                        std::cout <<(iSecret + iYum + iYummy + iCool);
                            }
                        
                        else{//if (std::cin >> no){
                        std::cout <<std::endl<< "So you think you have won, huh?" << std::endl<< (iDealer) << " is the dealer's hand"  <<std::endl;
                         if (iDealer > (iSecret + iYum + iYummy)){
                        std::cout << "Well guess what, you didn't!" <<std::endl;
                        }
                         if (iDealer < (iSecret + iYum + iYummy)){
                        std::cout << "Beginner's luck..." <<std::endl;
                        }
                        return 0;    
                        
                        }
                         
                         }
                         */
                                if ((iSecret + iYum + iYummy + iCool) > 21){ 
                                    std::cout <<(" is the value of your hand... you definitely lose!") <<std::endl; 
                                    std::cout << std::endl;
                                    (iCash = iCash-(50));
                                    break;
                                    return 1; 
                                    
                                }
                                if ((iSecret + iYum + iYummy + iCool) == 21){ 
                                    std::cout <<(" is the value of your hand... you win!") <<std::endl;
                                    std::cout << std::endl;
                                    (iCash = iCash+(50));
                                    break;
                                    return 1; 
                                }
                         
                         
                                if ((iSecret + iYum + iYummy + iCool) < 21){ 
                                printf (" is the value of the cards in your hand, do you want to take a hit again? (yes or no): ");
                                std::cin >> yes;
                                if (yes == "yes"){
                                std::cout <<(iSecret + iYum + iYummy + iCool + iCooler);
                                }
                                 
                                else{//if (std::cin >> no){
                                std::cout <<std::endl<< "I think I would have tried for one more card to clutch the game..." << std::endl <<(iDealer) << " is the dealer's hand" <<std::endl;
                                if (iDealer > (iSecret + iYum + iYummy + iCool)){
                                std::cout << "See, you lost because you underestimated yourself." <<std::endl;
                                (iCash = iCash-(50));
                                }
                                if (iDealer < (iSecret + iYum + iYummy + iCool)){
                                std::cout << "Well you won anyways... I bet you think you're good now" <<std::endl;
                                (iCash = iCash+(50));
                                }
                                if (iDealer == (iSecret + iYum + iYummy + iCool)){
                                std::cout << "It's a tie!!!" <<std::endl;
                                }
                                std::cout << std::endl;
                                break;
                                return 1;    
                                
                                }
                                
                                            if ((iSecret + iYum + iYummy + iCool + iCooler) > 21){ 
                                                std::cout <<(" is the value of your hand... you definitely lose!") <<std::endl;
                                                std::cout << std::endl;
                                                (iCash = iCash-(50));
                                                break;
                                                return 1; 
                                            }
                                            if ((iSecret + iYum + iYummy + iCool + iCooler) == 21){ 
                                                std::cout <<(" is the value of your hand... you win!") <<std::endl;
                                                std::cout << std::endl;
                                                (iCash = iCash+(50));
                                                break;
                                                return 1; 
                                            }
                                
                                
                                            if ((iSecret + iYum + iYummy + iCool + iCooler) <= 21){
                                            std::cout << " is the value of the cards in your hand..." << std::endl<< " How did you manage to get 5 cards without hitting 21? You win you lucky person!" << std::endl;
                                            std::cout << std::endl;
                                            (iCash = iCash+(50));
                                            break;
                                            return 1;
                                            }
                                            else{//if (std::cin >> no){
                                            std::cout << (iDealer)<< " is the dealer's hand"  <<std::endl;
                                            std::cout << std::endl;
                                            
                                            break;
                                            return 1;    
                                            }
                                }
            }
                // scanf ("%d",&iGuess);
                 
                 
                

                // if (((iSecret + iYum) || (iSecret + iYum + iYummy) || (iSecret + iYum + iYummy + iCool) || (iSecret + iYum + iYummy + iCool +iCooler)) == 21 ) puts ("Congratulations! You have won the game!");

                }while (iSecret!=iGuess);
            //puts ("Congratulations! You have won the game!");
            
                
                
                //if (std::cin >> !no && !yes);{
            
            //std::cout << "Use only lowercase letters; answer either 'yes' or 'no'. ";
                //}        

           }//This is for the "do"
 
  /* std::cout << "Ready to play play Blackjack? (y/n)" << std::endl;
            
            std::cin >> choice;
        }while(choice != 'n');//this is the doooooo one */
 
 
 
        //while (std::cout << "Well screw you too!!!");
}




if (iCash <= 0){
    std::cout << "You are out of money, looks like it is time to tell your wife that you have a gambling problem..."<< std::endl << std::endl;
    return 0;
}
if (iCash >= 1000){
    std::cout << "Wow, the dealer is broke now because you have beat him so hard at Blackjack... goodjob!!!"<< std::endl << std::endl;
    return 0;
}

        
    }
   
    }
        
        
    else{
            
            std::cout <<std::endl<< "Well screw you too!!!" << std::endl;
                }
       //this is for the "if" before the "do"
       
       
}

    return 0;
    }