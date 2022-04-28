#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Contessa.hpp"

namespace coup{
            Contessa::Contessa(Game game, string name):Player(game,name){     
            } //constructor
            Contessa::~Contessa(){
            } //deconstructor                         
            void Contessa::block(Player other){
            }
}