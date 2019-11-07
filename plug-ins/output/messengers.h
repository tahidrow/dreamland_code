#ifndef MESSENGERS_H
#define MESSENGERS_H

#include "dlstring.h"

class PCharacter;
class Character;

void send_discord_news(const DLString &author, const DLString &title, const DLString &description);
void send_discord_level(PCharacter *ch);
void send_discord_orb(const DLString &msg);
void send_discord_note(const DLString &thread, const DLString &from, const DLString &subj);
void send_discord_clan(const DLString &msg);
void send_discord_death(PCharacter *ch, Character *killer);
void send_discord_gquest(const DLString &gqName, const DLString &msg);
void send_discord_bonus(const DLString &msg);
void send_discord_ooc(Character *ch, const DLString &format, const DLString &msg);
void send_discord_ic(Character *ch, const DLString &format, const DLString &msg);

void send_telegram(const DLString &content);

#endif
