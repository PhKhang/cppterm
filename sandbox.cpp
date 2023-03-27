#include <iostream>
#include <string>

using namespace std;

string color(int x, int y, int z, string a){
    return "\033[38;2;" + to_string(static_cast<int>(x)) + ";" + to_string(static_cast<int>(y)) + ";" + to_string(static_cast<int>(z)) + "m" + a + "\033[0m";
}

int main(){
    
    for (int i = 0; i <= 255; i+=20)
        for (int j = 0; j <= 255; j+=20)
            for (int z = 0; z <= 255; z+=20){
                cout << color(i, j, z, "Hello") << " ";
                
                if (z % 50 == 0)
                    cout << endl;
            }
            
    return 0;
}