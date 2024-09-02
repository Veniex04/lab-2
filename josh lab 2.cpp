#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

void displayMenu();
void listFiles();
void createDirectory;
void changeDirectory


int main (){
	int choice;
	
    do {
    std::cout << "Enter the Number: "
    std::cin >> choice;
    
    switch (choice){
     case 1:
	      listFiles();
		  break;
	 case 2:
	      createDirectory();
		  break;
	 case 3:
	       changeDirectory();
		   break;
	 case 4;
	       std::cout << "Exiting...\n";
		   return 0;
     default:
	       std::cout <<"Invalid option, Please Try again. \n";		     	   	  	  	
	}
} while (choise !=4);

  return 0;
  
}

  void displayMenu(){
  	std::cout <<"n\t\t\tMAIN MENU\n\t\t-----------------------------\n";
  	std:cout << "1.Display List of Files\n";
  	std:cout << "2. Create new Directory\n";
  	std::cout <<"3. Change the working Directory\n";
  	std::cout <<"4.Exit\n";
