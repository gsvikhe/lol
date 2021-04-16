Implementation of ATM 


The basic algorithm followed is as follows - 
1. The home screen prompts the user to enter the card(Replaced here by entering 5-digit account number)
2. The user enters account number using keypad. 
3. The home screen prompts the user to enter the PIN code for their specified account number.
4. The user enters a four-digit PIN, using the keypad.
5. If the user enters a valid account number and the correct PIN code ,the home screen displays the menu options. If user enters an invalid account number or an incorrect PIN, the screen displays the corresponding message, and returns to step 1. 


The below diagram further illustrates the interaction between the created classes. 

//insert image 

The account details to test the application are as follows
1. account1(12345, 3409, 1000, 1200) - (Account Number, Pin, Available Balance, Total Balance)
2. account2(98765, 4123, 200, 200)
3. account3(16049, 1111, 1400, 1600);

To use this project
1. Clone this project
2. In ATM folder, mkdir build
3. cmake .. && build make
4. ./main

