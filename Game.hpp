#pragma once
#include "Player.hpp"
#include "Grass.hpp"

namespace N_Main
{
    using namespace N_Pokemon;
    using namespace N_Character::N_Player;

    class Game {
    private:
        Grass forestGrass;
    public:
        Game();
        void gameLoop(Player* player);
        void visitPokeCenter(Player* player);
    };
}