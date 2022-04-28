#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Ambassador.hpp"

namespace coup{
            Ambassador::Ambassador(Game game, string name):Player(game,name){       
            } //constructor
            Ambassador::~Ambassador(){
            } //deconstructor                         
            void Ambassador::block(Player other){              
            }
            void Ambassador::transfer(Player from, Player to){
            }
}