#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Captain.hpp"

namespace coup{
            Captain::Captain(Game game, string name):Player(game,name){                
            } //constructor
            Captain::~Captain(){
            } //deconstructor                                     
            void Captain::block(Player other){
            }
            void Captain::steal(Player other){                
            }
}