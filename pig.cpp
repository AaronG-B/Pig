#include <iostream>
#include <random>
#include <ctime>


int main(){
    int turnScore = 0;
    int roll;
    int compScore;
    int playerScore;
    int running = 0;
    srand(time(NULL));
    int selection;
    int whatever;
    int game = 1;

    //game turn
    while (game == 1)
    {

        
        while (running == 0) 
        {
            roll = (rand() %6)+1;
            //std::cout << roll << std::endl;
            if (roll == 1){

                std::cout << "CPU rolled a Pig! Turn over" << std::endl;
                turnScore = 0;
                running = 1;

            }
            else
            {
                std::cout << "CPU rolled ";
                std::cout << roll << std::endl;
                turnScore = turnScore + roll;
                std::cout << "turn total: ";
                std::cout << turnScore << std::endl;
                if (turnScore >= 20)
                {
                    compScore = compScore + turnScore;
                    if (compScore >= 100)
                    {
                        running = 2;
                    }
                    else
                    {
                        turnScore = 0;
                        running = 1;
                    }
                    
                }
                
            }

        }
        while (running == 1)
        {
            
            std::cout << "Your turn, type a number and then enter to roll" << std::endl;
            std::cin >> whatever;
            roll = (rand() %6) + 1;
            if (roll == 1){

                std::cout << "You rolled a Pig! Turn over" << std::endl;
                turnScore = 0;
                running = 0;

            }
            else
            {
                std::cout << "You rolled ";
                std::cout << roll << std::endl;
                turnScore = turnScore + roll;
                std::cout << "turn total: ";
                std::cout << turnScore << std::endl;
                std::cout << "Would you like to roll again? 1-yes, 2-no" << std::endl;
                std::cin >> selection;
                if (selection == 2)
                {
                    playerScore = playerScore + turnScore;
                    if (playerScore >= 100)
                    {
                        running = 3;
                    }
                    else
                    {
                        turnScore = 0;
                        running = 0;
                    }
                    
                }
                if (selection == 1)
                {
                    running = 1;
                }


            }

            
            
        }
        while (running == 2)
        {
            std::cout<< "CPU WINS!!!!" << std::endl;
            break;
        }
        while (running == 3)
        {
            std::cout << "You Win!" << std::endl;
            break;
        }
    
    }




}
