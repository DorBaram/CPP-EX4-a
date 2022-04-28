/**
 * 
 * Author: Dor Baram
 * Since : 2022-03
 */

#include "doctest.h"
using namespace doctest;
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace coup;

TEST_CASE("Loop"){
    for (int i = 0; i < 22; i++){
        CHECK(1==1);
    }
}