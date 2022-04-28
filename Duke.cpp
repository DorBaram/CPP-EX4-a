#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Duke.hpp"

namespace coup{
            Duke::Duke(Game game, string name):Player(game,name){                
            } //constructor
            Duke::~Duke(){
            } //deconstructor                         
            void Duke::block(Player other){
            }
            void Duke::tax(){
            }
}