#include <iostream>
#include <string>
using namespace std;

int setp1 = 0;
int setp2 = 0;

void countingset(int setno1p1, int setno1p2){
    string p1 = "0";
    string p2 = "0";
    int g1 = 0;
    int g2 = 0;

    while(true){
        int i;
        cout << "\n>>>";
        cin >> i;
        if(i == 1){
            if(p1 == "0"){
                p1 = "15";
            }else if(p1 == "15"){
                p1 = "30";
            }else if(p1 == "30"){
                p1 = "40";
            }else if(p1 == "40"){
                //Duce
                if(p2 == "40"){
                    p1 = "ad";
                }else if(p2 == "ad"){
                    p1 = "40";
                    p2 = "40";
                }else{
                    //Game
                    p1 = "0";
                    p2 = "0";
                    if(g1 <= 6){
                        g1 ++;
                    }
                    if(g1 == 6 && g2 == 6){
                        cout << "Tiebreak";
                    }else if(g1 == 6 && g2 <= 4){
                        cout << "Game Set 1";
                        setp1 = g1;
                        setp2 = g2;
                        break;
                    }else if(g1 == 7 && g2 == 5){
                        cout << "Game Set 1";
                        setp1 = g1;
                        setp2 = g2;
                        break;
                    }
                }
            }else if(p1 == "ad"){
                //Game
                p1 = "0";
                p2 = "0";
                if(g1 <= 6){
                    g1 ++;
                }
                if(g1 == 6 && g2 == 6){
                    cout << "Tiebreak";
                }else if(g1 == 6 && g2 <= 4){
                    cout << "Game Set 1";
                    setp1 = g1;
                    setp2 = g2;
                    break;
                }else if(g1 == 7 && g2 == 5){
                    cout << "Game Set 1";
                    setp1 = g1;
                    setp2 = g2;
                    break;
                }
            }
        }else if(i == 2){
            if(p2 == "0"){
                p2 = "15";
            }else if(p2 == "15"){
                p2 = "30";
            }else if(p2 == "30"){
                p2 = "40";
            }else if(p2 == "40"){
                if(p1 == "40"){
                    p2 = "ad";
                }else if(p1 == "ad"){
                    p1 = "40";
                    p2 = "40";
                }else{
                    //Game
                    p1 = "0";
                    p2 = "0";
                    if(g2 <= 6){
                        g2 ++;
                    }
                    if(g1 == 6 && g2 == 6){
                        cout << "Tiebreak";
                    }else if(g2 == 6 && g1 <= 4){
                        cout << "Game Set 2";
                        setp1 = g1;
                        setp2 = g2;
                        break;
                    }else if(g2 == 7 && g1 == 5){
                        cout << "Game Set 2";
                        setp1 = g1;
                        setp2 = g2;
                        break;
                    }
                }
            }else if(p2 == "ad"){
                //Game
                p1 = "0";
                p2 = "0";
                if(g2 <= 6){
                    g2 ++;
                }
                if(g1 == 6 && g2 == 6){
                    cout << "Tiebreak";                    
                }else if(g2 == 6 && g1 <= 4){
                    cout << "Game Set 2";
                    setp1 = g1;
                    setp2 = g2;
                    break;
                }else if(g2 == 7 && g1 == 5){
                    cout << "Game Set 2";
                    setp1 = g1;
                    setp2 = g2;
                    break;
                }
            }
        }
        cout << "\n\nPlayer 1: " << setno1p1 << "| " << g1 << "|" << p1;
        cout << "\nPlayer 2: " << setno1p2 << "| " << g2 << "|" << p2;
    }
    //print result
    cout << "\n\nPlayer 1: " << setno1p1 << "|" << g1;
    cout << "\nPlayer 2: " << setno1p2 << "|" << g2 << "\n";
}

int main() {
    countingset(0,0);
    countingset(setp1,setp2);
    return 0;
}