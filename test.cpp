#include <iostream>
#include <vector>
#include <clocale>

#include "syllable.h"

using namespace std;


int main(int argc, char* argv[])
{
  
  std::locale::global(std::locale());
    
  if (argc < 2) {
    // Tell the user how to run the program
    std::cerr << "Uso: " << argv[0] <<
      " <lista de palabras>" << std::endl;
    return 1;
  }

  SeparatorOfSyllables Test;
    
  for (int i = 1; i < argc; ++i) { 
    cout << "Analizando " << argv[i] << ": "
	 << Test.NumberOfSyllables(argv[i]) 
	 << " sílabas, con acento en la " 
	 << Test.StressedSyllable(argv[i]) << std::endl;   
  }
  cout << std::endl;
  
}

