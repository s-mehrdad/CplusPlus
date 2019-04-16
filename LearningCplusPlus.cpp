// --------------------------------------------------------------------------------
/// <summary>
/// ............................::Nerd snow sayings!::............................
/// nerd Snow's sayings!
/// Learning C++
/// Programming needs patience and practical practice.
/// Programming in a way, that no nerdy dog in the future is able to compile it, is to be avoided!
/// I was almost a good nerd and emptied my Recycle Bin regularly at the night! :) So be a lamb (^.^) and stay a good nerd!
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,16.04.2019</changed>
// --------------------------------------------------------------------------------

//#include "pch.h"
#include "LearningCplusPlus.h"
#include "Console.h"
#include "_1_Introduction.h"
#include "_2_BasicsOfCplusPlus.h"
#include "_3_ProgramStructure.h"
#include "_4_CompoundDataTypes.h"
#include "_5_Classes.h"


int main ()
{
    try
    {
#pragma region Console
        // font
        COORD fontS { 10,20 };
        ConsoleFont ( L"Consolas" );
        ConsoleFontSize ( fontS );
        ConsoleFontColour ( F_WHITE );
        // screen
        COORD leftANDtop { 15,15 };
        COORD widthANDheight { 101,32 };
        COLORREF backColour { RGB ( 50,50,50 ) };
        ConsoleScreenPosition ( leftANDtop );
        ConsoleScreenSize ( widthANDheight );
        ConsoleScreenColour ( backColour );

        //// cursor
        //ConsoleCursorState ( false );

        //// codec
        //UINT consoleOutputCPstorage;
        //consoleOutputCPstorage = GetConsoleOutputCP ();
        //SetConsoleOutputCP ( CP_UTF8 );

        //// back to default codec
        //SetConsoleOutputCP ( consoleOutputCPstorage );
#pragma endregion
        //! ...................................:: References ::...................................
        // http://www.cplusplus.com/doc/
        // https://stackoverflow.com/
        // http://de.cppreference.com/
        // https://docs.microsoft.com/
        // https://www.ibm.com/support/knowledgecenter/en/
        // C++ reference: http://www.cplusplus.com/reference/
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n", F_bRED );
        ColourCouter ( "References:\n", F_bBLUE );
        ColourCouter ( "http://www.cplusplus.com/doc/\n", F_YELLOW );
        ColourCouter ( "https://stackoverflow.com/\n", F_YELLOW );
        ColourCouter ( "http://de.cppreference.com/\n", F_YELLOW );
        ColourCouter ( "https://docs.microsoft.com/\n", F_YELLOW );
        ColourCouter ( "https://www.ibm.com/support/knowledgecenter/en/\n", F_YELLOW );
        ColourCouter ( "C++ reference: http://www.cplusplus.com/reference/\n", F_YELLOW );
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n", F_bRED );
        //! ...............................:: nerd Snow's sayings! ::...............................
        ColourCouter ( "Nerd snow's sayings!\n", F_bBLUE );
        ColourCouter ( "Programming needs patience and practical practice.\n", F_YELLOW );
        ColourCouter ( "Programming in a way, that no nerdy dog in the future is able to compile it, is to be avoided!\n", F_YELLOW );
        ColourCouter ( "I was almost a good nerd and emptied my Recycle Bin regularly at the night! :) So be a lamb (^.^) and stay a good nerd!\n", F_YELLOW );
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++", F_bRED );
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++\n", F_bRED );
        ColourCouter ( ".:: Introduction ::.\n", F_bBLUE );

        _01_01_Introduction ();

        //! .................................:: BASICS OF C++ ::.................................
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++", F_bRED );
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++\n", F_bRED );
        ColourCouter ( ".:: BASICS OF C++ ::.\n", F_bBLUE );

        _02_01_StructureOfaProgram ();
        _02_02_VariablesTypesAndIdentifiers ();
        _02_03_FundamentalTypesAndDeduction ();
        //_02_04_ConstantNumerals ();
        //_02_05_ConstantLiterals ();
        //_02_06_OtherConstantLiterals ();
        //_02_07_ArithmeticOperators ();
        //_02_08_LagicalOperators ();
        //_02_09_OtherOperators ();
        //_02_10_PrecedenceOfOperators ();
        //_02_11_BasicInputOutput ();


        //! ...............................:: PROGRAM STRUCTURE ::...............................
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++", F_bRED );
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++\n", F_bRED );
        ColourCouter ( ".:: PROGRAM STRUCTURE ::.\n", F_bBLUE );

        //_03_01_ControlStructures ();
        //_03_02_SelectionStatements ();
        //_03_03_IterationStatements ();
        //_03_04_JumpStatements ();
        //_03_05_AnotherSelectionStatement ();

        //_04_01_Functions ();
        //_04_02_VoidFunctions ();
        //_04_03_MainFunctionReturnValue ();
        //_04_04_PassedArgumentsTypes ();
        //_04_05_Efficiency ();
        //_04_06_InlineFunctions ();
        //_04_07_ParametersDefaultValues ();
        //_04_08_FunctionsDeclaration ();
        //_04_09_Recursivity ();

        //_05_01_OverloadsAndTemplates ();
        //_05_02_OverloadedFunctions ();
        //_05_03_FunctionTemplates ();
        //_05_04_NonTypeTemplateArguments ();

        //_06_01_NameVisibility ();
        //_06_02_Scopes ();
        //_06_03_Namespaces ();
        //_06_04_UsingKeyword ();
        //_06_05_NamespaceAliasing ();
        //_06_06_StorageClasses ();

        //! ..............................:: COMPOUND DATA TYPES ::..............................
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++", F_bRED );
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++\n", F_bRED );
        ColourCouter ( ".:: COMPOUND DATA TYPES ::.\n", F_bBLUE );

        //_07_01_Arrays ();
        //_07_02_InitializingArrays ();
        //_07_03_AccessingValues ();
        //_07_04_MultidimensionalArrays ();
        //_07_05_ArraysAsParameters ();
        //_07_06_LibraryArrays ();

        //_08_01_CharacterSequences ();

        //_09_01_PointersBasics ();
        //_09_02_PointersAndTypes ();
        //_09_03_PointersAndLiterals ();
        //_09_04_MoreOnPointers ();
        //_09_05_PointersToFunctions ();

        //_10_01_DynamicMemory ();
        //_11_01_DataStructures ();
        //_12_01_OtherDataTypes ();


        //! ....................................:: CLASSES ::....................................
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++", F_bRED );
        ColourCouter ( "++++++++++++++++++++++++++++++++++++++++++++++++++\n", F_bRED );
        ColourCouter ( ".:: CLASSES ::.\n", F_bBLUE );

        //ClassesI ();
        //ClassesII ();



    }
    catch ( const std::exception& )
    {

    }

    // preventing the instant closing of console window, so the result could be seen
    // not a good practice anyhow with a lot discussion in the internet
    // alternatives:
    // Ctrl+F5 is, which compile without debugging
    // putting a break point at the end of the function main
    system ( "PAUSE" ); // system dependent
    std::cin.get (); // alternative and portable
    // for advanced programmer: your program should be able to handle it itself

    //return 0;
    return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}
