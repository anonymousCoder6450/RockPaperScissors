#include <iostream>
#include<ctime>
#include<cstdlib>


int main() {
    int comp_choice;
    srand(time(NULL));
    comp_choice = rand()%3;



    int player_choice;
    std::cout << "pick 0 for rock, 1 for paper or 2 for scissors:";
    std::cin >> player_choice;
    while (player_choice > 2 || player_choice < 0){
        std::cout<<"pick - for rock, 1 for paper or 2 for scissors:";
        std::cin >> player_choice;
    }

    std:: cout<< "computer picked" << comp_choice << " ";

    if (comp_choice == player_choice) {
        std::cout << "Tie";
    }
    else if (comp_choice == 0 && player_choice == 1){ // rock vs paper
        std:: cout<< "You win";
    }
    else if (comp_choice == 0 && player_choice == 2){ // rock vs scissors
        std:: cout<< "You lose";
    }
    else if (comp_choice == 1 && player_choice == 2){ // paper vs scissors
        std:: cout<< "You win";
    }
    else if (comp_choice == 1 && player_choice == 0 ){// paper vs rock
        std:: cout<<" You lose";
    }
    else if (comp_choice == 2 && player_choice ==  0){// scissors vs rock
        std:: cout<<"You win";
    }
    else if(comp_choice == 2 && player_choice == 1){ // scissors vs paper
        std:: cout<< "You lose";
    }
        return 0;
}


//rand() generates a random number between 0 and the max possible amount storable in an integer, typically.
//"% 3" is modulo 3 - means "what remains if you divide by 3". so you're taking the random number
//and subtracting 3 repeatedly until a number lower than 3
//remains - it's either 0, 1, or 2.
