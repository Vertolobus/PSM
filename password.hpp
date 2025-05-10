/*

                                                                    This program is licensed under the GNU General Public License (GPL)

*/

#include <iostream>
#include <vector>
#include <string>

class PSM { //PSM - PasSwordManager
private:
    std::vector<char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    std::vector<char> simple_password_symbols = {'!', '@', '#', '$', '%', '&', '*', '(', ')', '-', '_', '+', '.'};
    std::vector<char> hard_password_symbols = {'[', ']','{', '}', ':', ';', '\'', '\"', '~', '`', '^', '|', '\\', '/', '<', '>', ','};
public:

    int len = 9; //password length

    bool numbers = true; //numbers in password

    bool hard_symbols = false; //hard(rarely use) symbols in password

//---------------------
    void update_password_letters(std::vector<char> list_letters, bool add = false);

    void update_simple_password_symbols(std::vector<char> simple_symbols, bool add = false);

    void update_hard_password_symbols(std::vector<char> hard_symbols, bool add = false);
//---------------------
    std::vector<std::string> generate(int count = 1);

};