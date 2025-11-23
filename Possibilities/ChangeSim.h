

using namespace std;
void ChangeSim() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 3);
    int tries = 0;
    int succeed = 0;
    int fails = 0;
    while (tries < 1000000) {
        
        int TrueNum = distrib(gen);
        
        int Totalx = 0;
        int Totaly = 0;
        int Totalz = 0;
        
        char SecUserChoice;
        
        int Secx = 0;
        int Secy = 0;
        int Secz = 0;
        
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
      //  cout << "x y ve z arasından seçim yap. Doğru olanı bulursan kazanırsın: " << endl;
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
                Secx += 1;
                Totalx += 1;
                break;
            case 'y':
                yC += 1;
                Secy += 1;
                Totaly += 1;
                break;
            case 'z':
                zC += 1;
                Secz += 1;
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
      //  cout << "Doğru cevap: " << " x: " << x << " y: " << y << " z: " << z << endl;
      //  cout << "Senin seçimin: " << " x: " << xC << " y: " << yC << " z: " << zC << endl;
      //  cout << "Booleanlar: " << " x: " << Totalx << " y: " << Totaly << " z: " << Totalz << endl;
       // cout << "Güzel seçim ama şimdi sana bir şans daha veriyorum. Şuanda seçtiğin haricinde bir seçenek eleyeceğim ve sen onlardan birini seçmek zorundasın. İstersen şuanda seçmiş olduğunu yeniden seçebilirsin ya da yeni bir tane seçebilirsin. Karar senin! " << endl;
       // cout << "Senin seçimin: " << UserChoice << endl;
      //  cout << "İşte Diğer seçenekler: " << endl;
      //  if(Totalx != 0) cout << "x " << endl;
      //  if(Totaly != 0) cout << "y " << endl;
      //  if(Totalz != 0) cout << "z " << endl;
       // if(x == -1) cout << "x " << endl;
       // if(y == -1) cout << "y "<< endl ;
      //  if(z == -1) cout << "z " << endl;
        xC = 0;
        yC = 0;
        zC = 0;
        int TotalxAbs = abs(Totalx);
        int TotalyAbs = abs(Totaly);
        int TotalzAbs = abs(Totalz);
        int TotalAbsTotals = TotalxAbs + TotalyAbs + TotalzAbs;
     //   cout << "Booleanlar Mutlak toplam: " << TotalAbsTotals << endl;
        if(Secx == 1){
            SecUserChoice = 'x';
        }
        if(Secy == 1){
            SecUserChoice = 'y';
        }
        if(Secz == 1){
            SecUserChoice = 'z';
        }
        if (SecUserChoice == 'x'){
            if(y != 0)
                UserChoice = 'y';
            else
                UserChoice = 'z';
        }
        if (SecUserChoice == 'y'){
            if(x != 0)
                UserChoice = 'x';
            else
                UserChoice = 'z';
        }
        if (SecUserChoice == 'z'){
            if(x != 0)
                UserChoice = 'x';
            else
                UserChoice = 'y';
        }
        char TrueChoice;
        if (x == 1) TrueChoice = 'x';
        if (y == 1) TrueChoice = 'y';
        if (z == 1) TrueChoice = 'z';
        if(UserChoice == TrueChoice){
            // cout << "Helal! Kazandın!" << endl;
            tries += 1;
            succeed += 1;
        } else {
           // cout << "Olmadı ya yapamadın" << endl;
            tries += 1;
            fails += 1;
        }
     //   cout << "Senin 2. seçimin: " << UserChoice << endl;
    }

    cout << "This is the result when the player always changes their choice on the second part." << endl;
    cout << "Tries: " << tries << endl;
    cout << "Succeded:  " << succeed << endl;
    cout << "Failed: " << fails << endl;
}
