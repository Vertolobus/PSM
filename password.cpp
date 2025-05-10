/*

                                                                    This program is licensed under the GNU General Public License (GPL)

*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "password.hpp"

//---------------------
void PSM::update_password_letters(std::vector<char> list_letters, bool add) {
    if (add){
        for (int i = 0; i <= letters.size() - 1; i++) {
            letters.push_back(list_letters[i]);
        }
    }
    else {
        letters = list_letters;
    }
}

void PSM::update_simple_password_symbols(std::vector<char> simple_symbols, bool add) {
    if (add){
        for (int i = 0; i <= simple_symbols.size() - 1; i++) {
            simple_password_symbols.push_back(simple_symbols[i]);
        }
    }
    else {
        simple_password_symbols = simple_symbols;
    }
}

void PSM::update_hard_password_symbols(std::vector<char> hard_symbols, bool add) {
    if (add){
        for (int i = 0; i <= hard_symbols.size() - 1; i++) {
            hard_password_symbols.push_back(hard_symbols[i]);
        }
    }
    else {
        hard_password_symbols = hard_symbols;
    }
}
//---------------------
std::vector<std::string> PSM::generate(int count) {
    srand(time(NULL));
    std::vector<std::string> passwords;

    for (int i = 0; i < count; i++) {

        std::string password = "";

        for (int i = 0; i < len; i++) {
            int choice = rand() % 3; //random: 0-2
            /*0 - number
            1 - symbol
            2 - letter*/
            if (choice == 0 && !numbers){ 

                i--;

            }

            if (choice == 0 && numbers){ //number

                password.push_back(std::to_string(rand() % 10)[0]); //random: 0-9 : int convert to char

            }
            else if (choice == 1){ //symbol

                /*0 - simple
                  1 - hard*/
                if (rand() % 2 == 0){ //random: 0-1

                    password.push_back(simple_password_symbols[rand() % simple_password_symbols.size()]);

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

                password.push_back(letters[rand() % letters.size()]); 

            }
        }

        passwords.push_back(password);
    
    }
    return passwords;
}