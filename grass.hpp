// grass.hpp
#include<string>
#include<vector>
using namespace std;

struct Grass {
    string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<WildPokemon> wildPokemonList;  // List of wild Pok�mon that live in this grass
    int encounterRate;  // Likelihood of encountering a wild Pok�mon, out of 100
};

Grass forestGrass = {
    "Forest",
    {{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}},
    70
};