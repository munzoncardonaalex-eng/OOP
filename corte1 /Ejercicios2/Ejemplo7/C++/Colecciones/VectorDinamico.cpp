 #include <iostream>
 #include <vector>
 using namespace std;

int main() {
    vector<int> datos;

    datos.push_back(10);
    datos.push_back(20);
    datos.push_back(30);
    
    cout << "Tamano = " << datos.size() << "\n";

    for (int i = 0; i < (int)datos.size(); i++) {
        cout << datos[i] << " ";
    }
    cout << "\n";
    
    return 0;

 }