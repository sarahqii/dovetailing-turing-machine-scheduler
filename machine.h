#pragma once
# include <stdbool.h>

typedef struct Transition_Rules{
    bool defined;
    int move;
    int next_state;
    char write;
} Rules;

typedef struct Machine{
    char* character_ids;
    int state;
    int symbol_count;
    char* config;
    int head;
    Rules* rules;
}Machine;