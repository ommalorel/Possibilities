

using namespace std;
void HalfTimeSim() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 3);
    int tries = 0;
    int succeed = 0;
    int fails = 0;
    while (tries < 1000000) {
        
        int TrueNum = distrib(gen);
        
        char Half1;
        char Half2;
        
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
      //  cout << "Doğru cevap: " << " x: " << x << " y: " << y << " z: " << z << endl;
      //  cout << "Senin seçimin: " << " x: " << xC << " y: " << yC << " z: " << zC << endl;
      //  cout << "Booleanlar: " << " x: " << Totalx << " y: " << Totaly << " z: " << Totalz << endl;
      //  cout << "Güzel seçim ama şimdi sana bir şans daha veriyorum. Şuanda seçtiğin haricinde bir seçenek eleyeceğim ve sen onlardan birini seçmek zorundasın. İstersen şuanda seçmiş olduğunu yeniden seçebilirsin ya da yeni bir tane seçebilirsin. Karar senin! " << endl;
      //  cout << "Senin seçimin: " << UserChoice << endl;
      //  cout << "İşte Diğer seçenekler: " ;
      //  if(Totalx != 0);
       // if(Totaly != 0);
        //if(Totalz != 0);
       // if(x == -1);
       // if(y == -1);
       // if(z == -1);
     //   cout << " Halfx " << x << "Halfy " << y << "Half z " << z << endl;
        if(x == 1){Half1 = 'x';}
        if(y == 1){Half1 = 'y';}
        if(z == 1){Half1 = 'z';}
        if(x == -1){Half2 = 'x';}
        if(y == -1){Half2 = 'y';}
        if(z == -1){Half2 = 'z';}
        xC = 0;
        yC = 0;
        zC = 0;
        uniform_int_distribution<> HalfChoice(1, 2);
        int PreUserChoice = HalfChoice(gen);
        switch (PreUserChoice) {
            case 1:
                UserChoice = Half1;
                break;
            case 2:
                UserChoice = Half2;
            break;
        }
        char TrueChoice;
        if (x == 1) TrueChoice = 'x';
        if (y == 1) TrueChoice = 'y';
        if (z == 1) TrueChoice = 'z';
        if(UserChoice == TrueChoice){
        //     cout << "Helal! Kazandın!" << endl;
            tries += 1;
            succeed += 1;
        } else {
        //    cout << "Olmadı ya yapamadın" << endl;
            tries += 1;
            fails += 1;
        }
        
    }
    cout << "This is the result when right at the second half of the show some stranger that does not know anything about the rules and just chooses one of the two options that is now available" << endl;
    cout << "Tries: " << tries << endl;
    cout << "Succeded:  " << succeed << endl;
    cout << "Failed: " << fails << endl;
}
