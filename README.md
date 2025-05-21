
		______________________________________________________________________________
		 _______    ______         __       __ 
		|       \  /      \       |  \     /  \
		| $$$$$$$\|  $$$$$$\      | $$\   /  $$
		| $$__/ $$| $$___\$$      | $$$\ /  $$$
		| $$    $$ \$$    \       | $$$$\  $$$$
		| $$$$$$$  _\$$$$$$\      | $$\$$ $$ $$
		| $$      |  \__| $$      | $$ \$$$| $$
		| $$       \$$    $$______| $$  \$ | $$
		 \$$        \$$$$$$|      \\$$      \$$
		                    \$$$$$$            
		_________________________________________________________________________

				P | S | M - PasSword Manager
			This program is licensed under the GNU General Public License (GPL)
		    Эта программа лицензирована по лицензии GNU General Public License (GPL). 

	ПРОЕКТ НАХОДИТСЯ НА РАННЕЙ СТАДИИ РАЗРАБОТКИ, ПОЭТОМУ В НЕКОТОРЫХ МЕСТАХ МОГУТ БЫТЬ ПУСТЫЕ МЕСТА ИЛИ ОШИБКИ

<hr>

<h3>ДОКУМЕНТАЦИЯ</h3>

<h2>class PSM::generate</h2>
  <b>переменные:</b>
    
    *  int len = 12; //password length

    *  bool letter = true; - Определяет будут ли буквы в пароле

    *  bool number = true; - Определяет будут ли цифры в пароле

    *  bool simple_symbols = true; - Определяет будут ли цифры в пароле

    *  bool hard_symbols = false; //hard(rarely use) symbols in password
  <b>Кратко о функциях</b>

  * std::vector generate_password(int count = 1);

    <b>Генерация пароля с использованием переменных класса</b>

    Аргументы:
    
    int count - Количество генерируемых паролей 


    <hr>

  * void update_password_letters(std::vector list_letters, bool add = false);

    <b>Обновление букв пароля, используемых по умолчанию</b>
    
    Аргументы:

    std::vector list_letters - Вектор char букв 
    
    bool add - Определяет будут ли значения добавлены поверх имеющихся или нет
    

    <hr>

  * void update_simple_password_symbols(std::vector simple_symbols, bool add = false);

    <b>Обновление простых символов пароля, используемых по умолчанию</b>
    
    Аргументы:

    std::vector simple_symbols - Вектор char символов 
    
    bool add - Определяет будут ли значения добавлены поверх имеющихся или нет

    <hr>

  * void update_hard_password_symbols(std::vector hard_symbols, bool add = false);

    <b>Обновление сложных символов пароля, используемых по умолчанию</b>
    
    Аргументы:

    std::vector hard_symbols - Вектор char символов 
    
    bool add - Определяет будут ли значения добавлены поверх имеющихся или нет

    <hr>
