#include "Selection.hpp"

int main(int argc, char * argv[]){

    string argument = argv[1];

    (void) argc;

    int x = 0, y = 0;

    string str1 = "Selection", str2 = "selection";

    cout << "Insira o tamanho do vetor: ";
    cin >> x;
    cout << endl;

    int * ptr = new int[x];

    for(int i = 0; i < x; i++){
        cout << "Insira elemento na posição " << i+1 << ": ";
        cin >> y;
        ptr[i] = y;
        y = 0;
        cout << endl;
    }

    if(argument == "Selection" || argument == "selection"){
        selection(ptr, x);
    }

    // if(argument == "Insertion" || argument == "insertion"){
    //     selection(ptr, x);
    // }

    return 0;
}