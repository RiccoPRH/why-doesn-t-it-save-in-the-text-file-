//
//  main.cpp
//  Üben
//
//  Created by  on 15.02.25.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

// using namespace std; um es sich zu sparen
int main(int argc, const char * argv[]) {
    

    
    
    std::vector<std::string> voc_german;
    std::vector<std::string> voc_serbisch;
    
    std::cout << "Fussballer\n";
    std::cout << "Bitte treffe eine Auswahl\n";
    std::cout << "(1) Neue Vokabel hinzufügen\n";
    std::cout << "(2) Vokabeltest starten\n";
    std::string option;
    std::cin >> option;
    
    if(option == "1") {
        std::cout << "Welche Vokabel (Deutsch) ?";
        std::string german_word;
        std::string serbisch_word;
        std::cin >> german_word;
        std::cout << "Wie lautet die Übersetzung ?";
        std::cin >> serbisch_word;
        
        //Deutsches Wort hinzufügen
        voc_german.push_back(german_word);
        voc_serbisch.push_back(serbisch_word);
        std::cout << "Vokabel wurde hinzugefügt. \n";
        std::cout << "hinzugefüge Vokabel: " + std::to_string(voc_german.size());

        //Deutsche Vokabel speichern
        std::ofstream output_file("./voc_german.txt");
        std::ostream_iterator<std::string> output_iterator(output_file,"\n");
        std::copy(voc_german.begin(), voc_german.end(), output_iterator);
        
        //Serbisch Vokabel speichern
        std::ofstream output_file2("./voc.serbisch.txt");
        std::ostream_iterator<std::string> output_iterator2(output_file2,"\n");
        std::copy(voc_serbisch.begin(), voc_serbisch.end(), output_iterator2);
        
        
        
    } else {
        std::cout << "Vokabeltest wird gestartet... ";
    }
    
    
    

    return 0;
}


    
    
    
    
   
