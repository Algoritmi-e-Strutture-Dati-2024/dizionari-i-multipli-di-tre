#include <string>
#include "Dizionario.cpp"

int main() {

    Dizionario<std::string> dict;

    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");
    
   

    
    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n";

    dict.stampa();
    dict.cancella("car");
    std::cout << "esiste:" << dict.appartiene("apple") << std::endl;
    
    dict.inserisci("book","object");

    
    return 0;
}
