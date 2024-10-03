#pragma once
#include <string>
#include <vector>

namespace N_Pokemon {

    class Pokemon;

    struct Grass {
        std::string environmentType;  // Example: "Forest", "Cave", "Riverbank"
        std::vector<Pokemon*> wildPokemonList;  // List of wild Pok�mon in this grass
        int encounterRate;  // Likelihood of encountering a wild Pok�mon, out of 100
    };

}