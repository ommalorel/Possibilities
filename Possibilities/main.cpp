#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 3);
    
    int TrueNum = distrib(gen);
    
    int Secx = 0;
    int Secy = 0;
    int Secz = 0;
    
    int Totalx = 0;
    int Totaly = 0;
    int Totalz = 0;
    
    
    int x = 0;
    int y = 0;
    int z = 0;
    switch (TrueNum) {
        case 1:
            x += 1;
            Totalx += 1;
            break;
        case 2:
            y += 1;
            Totaly += 1;
            break;
        case 3:
            z += 1;
            Totalz += 1;
            break;
    }
    char UserChoice;
    int xC = 0;
    int yC = 0;
    int zC = 0;
    cout << "x y ve z arasından seçim yap. Doğru olanı bulursan kazanırsın: " << endl;
    switch (distrib(gen)) {
        case 1:
            UserChoice = 'x';
            break;
        case 2:
            UserChoice = 'y';
            break;
        case 3:
            UserChoice = 'z';
            break;
    }
    switch (UserChoice) {
        case 'x':
            xC += 1;
            Totalx += 1;
            break;
        case 'y':
            yC += 1;
            Totaly += 1;
            break;
        case 'z':
            zC += 1;
            Totalz += 1;
            break;
    }
    uniform_int_distribution<> rando(1, 2);
    int TotalRando = rando(gen);
    if (Totalx == 2 ) {
        switch (TotalRando) {
            case 1:
                y += -1;
                break;
            case 2:
                z += -1;
                break;
        }
    }
    if (Totaly == 2) {
        switch (TotalRando) {
            case 1:
                x += -1;
                break;
            case 2:
                z += -1;
                break;
        }
    }
    if (Totalz == 2) {
        switch (TotalRando) {
            case 1:
                x += -1;
                break;
            case 2:
                y += -1;
                break;
        }
    }
           cout << "Doğru cevap: " << " x: " << x << " y: " << y << " z: " << z << endl;
              cout << "Senin seçimin: " << " x: " << xC << " y: " << yC << " z: " << zC << endl;
              cout << "Booleanlar: " << " x: " << Totalx << " y: " << Totaly << " z: " << Totalz << endl;
    cout << "Güzel seçim ama şimdi sana bir şans daha veriyorum. Şuanda seçtiğin haricinde bir seçenek eleyeceğim ve sen onlardan birini seçmek zorundasın. İstersen şuanda seçmiş olduğunu yeniden seçebilirsin ya da yeni bir tane seçebilirsin. Karar senin! " << endl;
    cout << "İşte Diğer seçenekler: " ;
    if(Totalx != 0) cout << "x ";
    if(Totaly != 0) cout << "y ";
    if(Totalz != 0) cout << "z ";
    if(x == -1) cout << "x ";
    if(y == -1) cout << "y ";
    if(z == -1) cout << "z ";
    xC = 0;
    yC = 0;
    zC = 0;
    cin >> UserChoice;
    char TrueChoice;
    if (x == 1) TrueChoice = 'x';
    if (y == 1) TrueChoice = 'y';
    if (z == 1) TrueChoice = 'z';
    if(UserChoice == TrueChoice){
        cout << "Helal! Kazandın!" << endl;
    } else {
        cout << "Olmadı ya yapamadın" << endl;
    }
    
    
                return 0;
            }
