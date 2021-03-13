#pragma once

#include "Pokemon.h"

#include <algorithm>
#include <array>
#include <string>
#include <string_view>

class Trainer
{
public:
    Trainer(std::string_view name)
        : _name { name }
    {
    }
    /*
    Trainer(std::string_view name, PC pc,  Pokedex pokedex)
        : _name { name } , _pc {pc} , _pokedex {pokedex} 
    {
    }
    */
    int get_level() const
    {
        for (auto* t : _team)
        {
            if (t != nullptr)
            {
                return t->get_level();
            }
        }

        return 0;
    }

    std::vector<Pokemon*> get_pokemons() const
    {
        std::vector<Pokemon*> pokemons;

        for (auto* t : _team)
        {
            if (t != nullptr)
            {
                pokemons.emplace_back(t);
            }
        }

        return pokemons;
    }

    std::vector<Pokemon*> give_pokemons()
    {
        auto pokemons = get_pokemons();
        _team.fill(nullptr);
        return pokemons;
    }

    bool collect(Pokemon* pokemon)
    {
        for (auto* t : _team)
        {
            if (t != nullptr)
            {
                t->level_up();
                continue;
            }
        }

        for (auto& t : _team)
        {
            if (t == nullptr)
            {
                t = pokemon;
                return true;
            }
        }

        return false;
    }

    void remove(const Pokemon* pokemon)
    {
        auto it = std::find(_team.begin(), _team.end(), pokemon);
        if (it != _team.end())
        {
            *it = nullptr;
        }
    }

    void capture(Pokemon* pokemon, bool chance_of_capture){
        _pokedex.add(pokemon);
        if (!collect(pokemon))
        {
            _pc.transfer(pokemon);
        }
    }

    bool has_duplicate(const Pokemon* pokemon){
        return _pokedex.has_duplicate(pokemon);
    }

private:
    const std::string _name;

    PC _pc;
    Pokedex _pokedex;
    std::array<Pokemon*, 6> _team {nullptr};

};
