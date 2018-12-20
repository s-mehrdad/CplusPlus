// --------------------------------------------------------------------------------
/// <summary>
/// Learning C++
/// --Programming needs patience and practical practice--
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,20.12.2018</changed>
// --------------------------------------------------------------------------------

#include "pch.h"
//#include "ConsoleAdjustments.h"
#include "_1_Introduction.h"
#include "_2_BasicsOfCplusPlus.h"
#include "_3_ProgramStructure.h"
#include "_4_CompoundDataTypes.h"
#include "_5_Classes.h"


// a C++ program always start from the main function, no matter the order of definitions.
// the main function is the only function which called automatically.
// other functions can be executed if they are called directly or indirectly from main function.

void consoleA (void);

int main ()
{
    //using namespace std; // make writing code simple but by not using it name collision can be avoided.
    try
    {
        // The reference used for this tutorial: http://www.cplusplus.com/doc/
        // C++ reference: http://www.cplusplus.com/reference/

        std::cout << "\n\n..........................:: Introduction ::..........................\n\n";
        Compilers();
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
        std::cout << "\n\n..........................:: CLASSES ::..........................\n\n";
        ClassesI ();
        ClassesII ();

        

    }
    catch ( const std::exception& )
    {

    }
    //TODO add alternatives for the next expression
    system ( "PAUSE" );
    // return 0;
    return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}

void consoleA (void)
{
    //// font
    //COORD fontS { 10,20 };
    //ConsoleFont_SizeColour ( fontS, L"Consolas", F_bBLUE );
    //// screen
    //COORD leftANDtop { 15,15 };
    //COORD widthANDheight { 110,32 };
    //COLORREF backColour { RGB ( 100,100,100 ) }; // the same
    //ConsoleScreen_SizeColourPosition ( leftANDtop, widthANDheight, backColour );
    //// cursor
    //ConsoleCursor_State ( false );
    //// default codec
    //std::cout << "Screen codec:\t" << GetConsoleOutputCP () << "\n\n";
    //// the show possible ASCI characters by console on default settings:
    //// there is also the legacy tick in console settings window, thou it adds some more, it isn't of much use
    //for ( int i = 0; i < 256; i++ )
    //{
    //    std::cout << (char) i << " ";
    //}
    //std::cout << "\n\n";
    //// codec
    //UINT consoleOutputCPstorage;
    //consoleOutputCPstorage = GetConsoleOutputCP (); // for later use
    //SetConsoleOutputCP ( CP_UTF8 ); // https://docs.microsoft.com/de-de/windows/desktop/Intl/code-page-identifiers
    //std::cout << "New screen codec:\t" << GetConsoleOutputCP () << "\n\n"; // cout new screen codec
    //// tests

    //std::string test = u8"Greek: αβγδ; German: Übergrößenträger  ╇╊▓❹ⱷ╔◄Ȿ☻♣\n\n"; // utf8 string
    //std::cout << test;

    //ColourCout ( u8"♣", F_BLACK );
    //ColourCout ( u8"♣", F_BLUE );
    //ColourCout ( u8"♣", F_GREEN );
    //ColourCout ( u8"♣", F_CYAN );
    //ColourCout ( u8"♣", F_RED );
    //ColourCout ( u8"♣", F_PURPLE );
    //ColourCout ( u8"♣", F_YELLOW );
    //ColourCout ( u8"♣", F_WHITE );
    //ColourCout ( u8"♣", F_bBLACK );
    //ColourCout ( u8"♣", F_bBLUE );
    //ColourCout ( u8"♣", F_bGREEN );
    //ColourCout ( u8"♣", F_bCYAN );
    //ColourCout ( u8"♣", F_bRED );
    //ColourCout ( u8"♣", F_bPURPLE );
    //ColourCout ( u8"♣", F_bYELLOW );
    //ColourCout ( u8"♣", F_bWHITE );
    //std::cout << "\n\n";
    //// all possible colours of the function:
    ////for (int colour = F_BLACK; colour<=0xff; colour++) {
    ////  SetConsoleTextAttribute (consoleOutput, colour);
    ////  std::cout<<"Using colour:"<<colour<<"\n";
    ////}

    //// back to default
    //SetConsoleOutputCP ( consoleOutputCPstorage ); // important: always set codec back to what it was
    //std::cout << "Back to past screen codec:\t" << GetConsoleOutputCP ();
    //std::cin.get ();
}