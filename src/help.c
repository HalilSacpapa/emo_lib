#include "my.h"

void help3(void)
{
    printf(RED);
    printf("Symbols :\n");
    printf("\t:100:\n\t:question_mark:\n");
    printf("\t:exclamation_mark:\n\t:zzz:\n");
    printf("\t:men: or :women:\n\t:information:\n");
    printf("\t:ok:\n\t:blue:\n\t:white:\n");
    printf("\t:red:\n\t:black:\n");
    printf("\t:sound_on: or :sound_off:\n\n");
    printf(BLUE);
    printf("Flags :\n");
    printf("\t:lgbt+:\n\t:chequered:\n");
    printf("\t:france:\n\n");
    printf(MAGENTA);
    printf("Combo :\n");
    printf("\t:lit: for a lit combo\n");
}

void help2(void)
{
    printf(GREEN);
    printf("Animals & Nature :\n");
    printf("\t:dog:\n\t:monkey:\n");
    printf("\t:chick:\n\t:pinguin:\n");
    printf("\t:owl:\n\t:octopus:\n");
    printf("\t:whale:\n\t:fire:\n");
    printf("\t:wind:\n\n");
    printf(CYAN);
    printf("Objects :\n");
    printf("\t:spoon:\n\t:disk:\n");
    printf("\t:mov_cam:\n\t:hourglass<num>:\n");
    printf("\t:light_bulb:\n\t:candle:\n");
    printf("\t:trash:\n\t:tools:\n");
    printf("\t:key<num>:\n\t:balloon:\n");
    printf("\t:party_popper:\n\t:confetti:\n");
    printf("\t:locked: or :unlocked:\n");
    printf("\t:magnifiying_glass<num>:\n");
    printf("\t:pen:\n\t:grad_cap:\n\n");
    help3();
}

void help(void)
{
    printf(WHITE);
    printf("   Usage\n\n");
    printf(YELLOW);
    printf("Smileys :\n");
    printf("\t:smile<num>:\n\t:laugh<num>:\n");
    printf("\t:love<num>:\n\t:cry<num>:\n");
    printf("\t:sick<num>:\n\t:drunk<num>:\n");
    printf("\t:lie<num>:\n\t:mindblow<num>:\n");
    printf("\t:angel<num>:\n\t:evil<num>:\n");
    printf("\t:angry<num>:\n\t:santa<num>:\n");
    printf("\t:dab_m: or :dab_wm:\n\t:poop<num>:\n\n");
    printf(WHITE);
    printf("Hand signs :\n");
    printf("\t:thumbs_up: or :thumbs_down:\n");
    printf("\t:ok_hand:\n\t:mid_finger:\n");
    printf("\t:vulcan:\n\n");
    help2();
    printf(RESET);
}
