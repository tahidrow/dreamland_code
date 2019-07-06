#ifndef SKILL_UTILS_H
#define SKILL_UTILS_H

#include "dlstring.h"

class Skill;
class Character;
class PCharacter;
class PCSkillData;
class XMLSkillReference;

/**
 * Return true if this skill is a temporary one for the character
 * and is active at current day of the year.
 */
bool temporary_skill_active( const Skill *skill, Character *ch );

/**
 * Return true if this skill data corresponds to an active temporary skill.
 */
bool temporary_skill_active( const PCSkillData & );

/** 
 * Return 'magical' phrase for a spell.
 */
DLString spell_utterance(Skill *skill);

Skill * skillref_to_pointer(const XMLSkillReference &);


/**
 * Return colour to display for 'learned' percent.
 */
char skill_learned_colour(const Skill *, PCharacter *ch);

/**
 * Print line 'See also help <skill>' to the buffer.
 */
void print_see_also(const Skill *skill, PCharacter *ch, ostream &buf);

#endif
