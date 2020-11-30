#include<iostream>
#include<string>
#include <regex>
#include"Student.h"
#include"person.h"
#include"RecordStudent.h"
#include "Date.h"

#include "Teacher.h"

using namespace std;

void main_menu();

int get_user_input();

void select_menu_item(int input);

void print_main_menu();

void go_back_to_main_menu();

bool is_integer(std::string num);

void menu_item_1();

void menu_item_2();

void menu_item_3();

void menu_item_4();

int main(int argc, char const *argv[]) {
    main_menu();
    return 0;
}

// init the student record

Date *date = new Date();
RecordStudent *record = new RecordStudent();
Student *student = new Student("Lang", 123123, "123123",date);
Teacher *t1;

void main_menu() {
    record->updateRecord("Lang", 123123, "123123", date);
    print_main_menu();
    int input = get_user_input();
    select_menu_item(input);
}

int get_user_input() {
    int input;
    std::string input_string;
    bool valid_input = false;
    int menu_items = 5;

    do {
        std::cout << "\nSelect item: ";
        std::cin >> input_string;
        valid_input = is_integer(input_string);
        // if input is not an integer, print an error message
        if (valid_input == false) {
            std::cout << "Enter an integer!\n";
        } else {  // if it is an int, check whether in range
            input = std::stoi(input_string);  // convert to int
            if (input >= 1 && input <= menu_items) {
                valid_input = true;
            } else {
                std::cout << "Invalid menu item!\n";
                valid_input = false;
            }
        }
    } while (valid_input == false);

    return input;
}

void select_menu_item(int input) {
  switch (input) {
  case 1:
      menu_item_1();
      break;
  case 2:
      menu_item_2();
      break;
  case 3:
      //menu_item_3();
      break;
  case 4:
      //menu_item_4();
      break;
  default:
      cout << "You have Logged out." << endl;
      exit(1);
      break;
  }
}

void print_main_menu() {
  std::cout << "\n----- Choose Your Identity -----\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "|\t1. Student    \t\t|\n";
  std::cout << "|\t2. Teacher\t\t|\n";
  std::cout << "|\t3. Menu item 3\t\t|\n";
  std::cout << "|\t4. Menu item 4\t\t|\n";
  std::cout << "|\t5. Exit\t\t\t|\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "---------------------------------\n";
}

void go_back_to_main() {
    std::string input;
    do {
        std::cout << "\nEnter 'b' or 'B' to go back to main menu: ";
        std::cin >> input;
    } while (input != "b" && input != "B");
    main_menu();
}

// https://codereview.stackexchange.com/questions/162569/checking-if-each-char-in-a-string-is-a-decimal-digit
bool is_integer(std::string num) {
    return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void menu_item_1() {
    while (1) {
        student->operationMenu();
        //*student = (record->Data.find(1)->second);
        int select = get_user_input();
        switch (select) {
            case 0:
                cout << "You have Logged out." << endl;
                exit(1);
                break;
            case 1:
                student->applyTheLab();
                break;
            case 2:
                student->checkStatus();
                break;
            case 3:
                student->cancelOrder();
                break;
            default:
                cout << "You have Logged out." << endl;
                exit(1);
                break;

        }
    }
}
 void menu_item_2() {
     while (1) {
         Teacher t1("Tom", 111, "111");
         t1.operationMenu();
         int select = get_user_input();
         //switch (select) {
         //case 0:
         //    cout << "You have Logged out." << endl;
         //    exit(1);
         //    break;
         //case 1:
         //    t1.checkApplication();
         //    break;
         //case 2:
         //    t1.permitApplication();
         //    break;
         //default:
         //    cout << "You have Logged out." << endl;
         //    exit(1);
         //    break;

         //}
     }


 }
// void menu_item_3() {
//   std::cout << "\n>> Menu 3\n";
//   std::cout << "\nPlease enter 2 integer\n";
//   int a,b;
//   std::cin >>a >>b;
//   std::cout << "the sum of a and b is " << a*b <<std::endl;
//   // you can call a function from here that handles menu 3
//   go_back_to_main();
// }
// void menu_item_4() {
//   std::cout << "\n>> Menu 4\n";
//   std::cout << "\nPlease enter 2 integer\n";
//   int a,b;
//   std::cin >>a >>b;
//   std::cout << "the sum of a and b is " << (float)a/b <<std::endl;
//   // you can call a function from here that handles menu 4
//   go_back_to_main();
// }