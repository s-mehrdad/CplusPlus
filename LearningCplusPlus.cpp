// LearningCplusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "IntroductionAndBasics.h"
#include "ProgramStructure.h"
#include "CompoundDataTypes.h"
#include "Classes.h"

// a C++ program always start from the main function, no matter the order of definitions.
// the main function is the only function which called automatically.
// other functions can be executed if they are called directly or indirectly from main function.
int main () {
  //using namespace std; // make writing code simple but by not using it name collision can be avoided.
  try {
    // The reference used for tutorial: http://www.cplusplus.com/doc/
    // C++ reference: http://www.cplusplus.com/reference/

    std::cout << "\n\n..........................:: Introduction ::..........................\n\n";
    //Compilers();
    std::cout << "\n\n..........................:: BASICS OF C++ ::..........................\n\n";
    HelloWorld ();
    VariablesAndTypes ();
    Constants ();
    Operators ();
    BasicInputOutput ();
    std::cout << "\n\n..........................:: PROGRAM STRUCTURE ::..........................\n\n";
    ControlStructures ();
    Functions ();
    OverloadsAndTemplates ();
    NameVisibility ();
    std::cout << "\n\n..........................:: COMPOUND DATA TYPES ::..........................\n\n";
    Arrays ();
    CharacterSequences ();
    Pointers ();
    DynamicMemory ();
    DataStructures ();
    OtherDataTypes ();
    std::cout << "\n\n..........................:: COMPOUND DATA TYPES ::..........................\n\n";
    ClassesI ();
    ClassesII ();


  }
  catch (const std::exception&) {

  }
  system ("PAUSE");
  // return 0;
  return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
