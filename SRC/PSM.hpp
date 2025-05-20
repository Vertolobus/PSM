/*

                                                                    This program is licensed under the GNU General Public License (GPL)

*/

#include <iostream>
#include <vector>
#include <string>

namespace PSM { //PSM - PasSwordManager
    
    class generate {
    private:
        std::vector<char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
        std::vector<char> numbers = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
        std::vector<char> simple_password_symbols = {'!', '@', '#', '$', '%', '&', '*', '(', ')', '-', '_', '+', '.'};
        std::vector<char> hard_password_symbols = {'[', ']','{', '}', ':', ';', '\'', '\"', '~', '`', '^', '|', '\\', '/', '<', '>', ','};
    public:
        
        int len = 12; //password length

        bool letter = true; //letters in password

        bool number = true; //numbers in password

        bool simple_symbols = true; //simple symbols in password

        bool hard_symbols = false; //hard(rarely use) symbols in password

        //generating password with using class-variables
        std::vector<std::string> generate_password(int count = 1);
        //---------------------
        //Updating default-used password letters 
        void update_password_letters(std::vector<char> list_letters, bool add = false);

        //Updating default-used password simple_symbols 
        void update_simple_password_symbols(std::vector<char> simple_symbols, bool add = false);

        //Updating default-used password hard_symbols  
        void update_hard_password_symbols(std::vector<char> hard_symbols, bool add = false);
        //---------------------
    };

}