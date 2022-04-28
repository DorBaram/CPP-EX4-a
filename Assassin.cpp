#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Assassin.hpp"

namespace coup{
            Assassin::Assassin(Game game, string name):Player(game,name){    
            } //constructor
            Assassin::~Assassin(){
            } //deconstructor                         
}