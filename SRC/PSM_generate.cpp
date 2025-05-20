/*

                                                                    This program is licensed under the GNU General Public License (GPL)

*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "PSM.hpp"

//---------------------
void PSM::generate::update_password_letters(std::vector<char> list_letters, bool add) {
    if (add){
        for (int i = 0; i < letters.size(); i++) {
            letters.push_back(list_letters[i]);
        }
    }
    else {
        letters = list_letters;
    }
}

void PSM::generate::update_simple_password_symbols(std::vector<char> simple_symbols, bool add) {
    if (add){
        for (int i = 0; i < simple_symbols.size(); i++) {
            simple_password_symbols.push_back(simple_symbols[i]);
        }
    }
    else {
        simple_password_symbols = simple_symbols;
    }
}

void PSM::generate::update_hard_password_symbols(std::vector<char> hard_symbols, bool add) {
    if (add){
        for (int i = 0; i < hard_symbols.size(); i++) {
            hard_password_symbols.push_back(hard_symbols[i]);
        }
    }
    else {
        hard_password_symbols = hard_symbols;
    }
}
//---------------------
std::vector<std::string> PSM::generate::generate_password(int count) {
    srand(time(NULL));
    std::vector<std::string> passwords;

    for (int i = 0; i < count; i++) {

        std::string password = "";

        std::vector<char> last_choices;
        for (int i = 0; i < len; i++) {

            /*0 - number
            1 - symbol
            2 - letter*/
            int choice = rand() % 3; //random: 0-2
            last_choices.push_back(choice);

            //rule #1
            //--------------
            if (last_choices.size() - 1 >= 3) { //rule #1
                if (last_choices[last_choices.size() - 1] == last_choices[last_choices.size() - 2] && last_choices[last_choices.size() - 2] == last_choices[last_choices.size() - 3]) {
                    while (last_choices[last_choices.size() - 1] == choice) {
                        choice = rand() % 3; //random: 0-2
                    }
                    last_choices.push_back(choice);

                }
            }

            //rule #2 - #3
            //--------------

            if (choice == 0 && !number){ // rule #2 | i - 1 - update random number

                i--;

            }
            else if (choice == 2 && !letter){ // rule #3 | i - 1 - update random number

                i--;

            }

            //--------------

            else if (choice == 0 && number){ //number

                password.push_back(numbers[rand() % 11]); //random: 0-10 : int convert to char

            }
            else if (choice == 1){ //symbol

                /*0 - simple
                  1 - hard*/
                if (rand() % 2 == 0){ //random: 0-1
                    
                    if (simple_symbols){
                        password.push_back(simple_password_symbols[rand() % simple_password_symbols.size()]);
                    }
                    else {
                        i--;
                    }
                }
                else {

                    if (hard_symbols) {
                        password.push_back(hard_password_symbols[rand() % hard_password_symbols.size()]);  
                    }
                    else {
                        i--;
                    }

                }

            }
            else if (choice == 2) { //letter
                
                if (letter) {
                    password.push_back(letters[rand() % letters.size()]); 
                }
                else {
                    i--;
                }
            }
        }

        passwords.push_back(password);
    
    }
    return passwords;
}