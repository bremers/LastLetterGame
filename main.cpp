//LastLetterGame in C++
//Name an animal that starts with the last letter of the previous animal
//Played by one player against the computer
//Created by bremers
//Dec 13, 2020

//Importing the inbuild libraries in CPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string animal;

std::vector <string> v = {
        "albatross",
        "bear",
        "cow","chimpansee","camel",
        "donkey",
        "elephant",
        "giraffe","gorilla",
        "horse","hyena",
        "iguana","impala",
        "jaguar",
        "koala",
        "leopard",
        "moose",
        "nightingale",
        "otter",
        "panda",
        "quetzal",
        "rhinoceros",
        "snake","snail",
        "tiger",
        "uakari",
        "vaquita",
        "wasp",
        "xerus",
        "yak",
        "zebra"
};

//Variable Declaration
int choice;
int row,column;
char turn = 'X';
bool draw = false;

//Function to show the current status of the gaming board

void next_animal(){
    cout<<animal;
    cout<<animal.back();
    cout<<"first letter is "<<animal.front();
    char lastletter = animal.back();

    //if (v.rfind(lastletter, 0) == 0) {
     //   cout<<"found something";
    //}
  //  std::vector<int>::iterator it = std::find(vecOfNums.begin(), vecOfNums.end(), 22);
}




//Checking if string in vector starts with lastletter
bool unary_pre(int n) {
    string stringa = v[n];
    return (stringa.front() == lastletter);
}

int newanimal(void)
{
    std::vector<string>::iterator it = std::find_if (v.begin(), v.end(), unary_pre);
    std::cout << "The first odd value is " << *it << '\n';

    return 0;
}

//Function to get the player input and update the board

void player_turn(){

    cout<<"Name an animal!";
    cin>>animal;
    next_animal();
    unary_pre(1);
    newanimal();
}

//Function to get the game status e.g. GAME WON, GAME DRAW GAME IN CONTINUE MODE

bool gameover(){

                return true;
}


//Program Main Method

int main()
{
    std::cout<<endl<<"\t\t\tA N I M A L -- L A S T -- L E T T E R -- G A M E\t\t\t"<<endl;
    std::cout<<endl<<"\t\t\t\tSINGLE PLAYER\t\t\t"<<endl;
    //Render pinguin picture

    cout<<"\t\t\t\t\t\t\t      .___."<<endl;
    cout<<"\t\t\t\t\t\t\t     /     \\ " << endl;
    cout<<"\t\t\t\t\t\t\t    | O _ O |"<<endl;
    cout<<"\t\t\t\t\t\t\t    /  \\_/  \\ "<<endl;
    cout<<"\t\t\t\t\t\t\t  .' /     \\ `."<<endl;
    cout<<"\t\t\t\t\t\t\t / _|       |_ \\ " << endl;
    cout<<"\t\t\t\t\t\t\t(_/ |       | \\_)"<<endl;
    cout<<"\t\t\t\t\t\t\t    \\       /"<<endl;
    cout<<"\t\t\t\t\t\t\t   __\\_>-<_/__"<<endl;
    cout<<"\t\t\t\t\t\t\t   ~;/     \\;~"<<endl;

    //char Value = AnimalList(0);
    //std::cout<<v;
    for (std::vector<string>::const_iterator i = v.begin(); i != v.end(); ++i)
        std::cout << *i << ' '<<endl;

    while(gameover()){
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<endl<<endl<<"Congratulations! Player with 'X' has won the game"<<endl;
    }
    else if(turn == 'O' && draw == false){
        cout<<endl<<endl<<"Congratulations! Player with 'O' has won the game"<<endl;
    }
    else
        cout<<endl<<endl<<"GAME DRAW!!!"<<endl<<endl;
}