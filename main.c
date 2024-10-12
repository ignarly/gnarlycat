#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//rememember to print instruction for user input so they know how to respond and whats going on

int main() {
    //printf("^#BBBBBBP5J7:                      ^7JY5PGGGGGP^ \nY#B&&&&&&&#GJ: .. :^. ~^.^... . ~5B#&&&&&&&#BY. \n:GBB&&&&&&&&BY:   .J:Y7Y     !B##&&&&&&&&#G^  \n^PGB&&&&&&&#G7!JYYJGPGBG7JJ?7~GB#&&&&&&&##B!\n.   :5GB#&&&&&#GY&&#####&&######BGGG#&&&&&##B! .  \n.  . .J5PBBG?Y&##BBBB###BBBGGGG#BBPG####BGJ  .  \n.. .   ..::JB######BBB##BBBG55PGBGJ7?!^.  .. ..\n........    G@########BBBBBBBBG55Y5PP:     .......\n.  .  .     5@&&@@&&&#BG#&&#BBBGP55P5.   .  .  .  \n.  .  . .^!7J&@@@@@@@&&#&YJBP!P#GPPPP~.  .  .  .  \n .. .  .~B#&&&&&@@@@@@#B&BJJ?J#BPPPGBG57  .. .. ..\n.  . !PB###BBB####BGGGGPPGGGGGPPPPPGGGGGJ^. .  .  \n  . ^J5GGB#&@@&BP555YYYJJ??Y5GGGBBBBBBBBG7 .  .  \n.. ..   .:^?JP##&&&&#PYY???75#B#BBBP5Y?7: . .. .\n.. .. .      Y&&@&&&#GJ????P&&&B7...      . .. ..\n.  .  .       JBGGPP5Y??77?J@@&BP:       .  .  .  \n  .     .:^^ Y@BPGG5YYYYPYY&#GG?    ...       .  \n.. .?YYP5PBB#&55#@Y5BP7PB#GP5YYJJYYYJ77~~:.  ..\n  !#@@@@@#&@@&#P5Y#?GGYJGGPPG57??P#BBGY7BGGPY!  .\n:Y&#&@@@@@@@@&&&##BBGGGPPPPGGGGGPPPGPPGYGPP55P7  \n7#@B5P&@Y5#@&&&&###BBGPP5YYJJJJJJJJ5PPB#BPPGGGBP7:\n&&@&&&@P  :B#BBGPPP555Y555P55YYJJJJ??75:  P&&BPP5Y");
    //printf("[Night 1] Hello, hello? Uh, I wanted to record a message for you to help you get settled in on your first night. Um, I actually worked in that office before you. I'm finishing up my last week now, as a matter of fact.")
    const char* character[] = {"foxy", "freddy", "balloon boy"}; //to tackle freddy:mask, balloonboy:mask,
    int danger = 0;
    srand(time(0));
    char response;
    int flash;
    int night;
    int i;


    {printf("[Uh, hello? Hello, hello? Uh, hello and welcome to your new summer job at the new and improved Freddy Fazbear's Pizza.\n Uh, I'm here to talk you through some of the things you can expect to see during your first week here and to help you get started down this new and exciting career path.\nUh, now, I want you to forget anything you may have heard about the old location, you know. \nUh, some people still have a somewhat negative impression of the company. Uh... that old restaurant was kind of left to rot for quite a while, but I want to reassure you, \nFazbear Entertainment is committed to family fun and above all, safety. They've spent a small fortune on these new animatronics, uh, facial recognition, advanced mobility, \nthey even let them walk around during the day. Isn't that neat? -clears throat- But most importantly, \nthey're all tied into some kind of criminal database, so they can detect a predator a mile away. Heck, we should be paying them to guard you.\nUh, now that being said, no new system's without its... kinks. \nUh... you're only the second guard to work at that location. Uh, the first guy finished his week, but complained about... conditions.\n Uh, we switched him over to the day shift, so hey, lucky you, right? Uh mainly he expressed concern that certain characters seemed to move around at night, \nand even attempted to get into his office. Now, from what we know, that should be impossible. \nUh, that restaurant should be the safest place on earth. So while our engineers don't really have an explanation for this, the working theory is that... the robots were never given a proper \n'night mode'. So when it gets quiet, they think they're in the wrong room, so then they go try to find where the people are, and in this case, that's your office.\n So our temporary solution is this: there's a music box over by the Prize Counter, and it's rigged to be wound up remotely.\n So just, every once in a while, switch over to the Prize Counter video feed and wind it up for a few seconds. \nIt doesn't seem to affect all of the animatronics, but it does affect... one of them. -clears throat Uh, and as for the rest of them, \nwe have an even easier solution. You see, there may be a minor glitch in the system, \nsomething about robots seeing you as an exoskeleton without his costume on, and wanting to stuff you in a suit, so hey, \nwe've given you an empty Freddy Fazbear head, problem solved! You can put it on anytime, \nand leave it on for as long as you want. Eventually anything that wandered in, will wander back out.\nUh, something else worth mentioning is kind of the modern design of the building. \nyou may have noticed there are no doors for you to close, heh. \nBut hey, you have a light! And even though your flashlight can run out of power, the building cannot. So, don't worry about the place going dark. \nWell, I think that's it. Uh, you should be golden. Uh, check the lights, put on the Freddy head if you need to, uh, \nkeep the music box wound up, piece of cake. Have a good night, and I'll talk to you tomorrow.\n\n\n");}

    sleep(10);
    while(danger < 3) {
        i = rand() % 3;
        if (i == 0) {printf("'...'\n\n");}
        else if (i == 1) {printf("*breathing*\n\n");}
        else {printf("'hello...'\n\n");}
        sleep(2);
        printf("enter f for flashlight \nenter m to put on mask\n");
        scanf(" %c", &response);
        if(response !='f' && response !='m')    {danger++;}
        //this would teach users not to be clumsy when inputting
        else if (response == 'f')
        {
            printf("what would you like to flash: \npress 0 for hallway\npress 1 for vent\n");
            scanf(" %d", &flash);
            if (flash == 0 && i != 2) //flash hallway and no BB
            {
                printf("%s is in the hallway, enter [f/m]\n", character[i]);
                scanf(" %c,", &response);
                if (response == 'm')
                {
                    printf("mask is on\nwaiting...\n");sleep(2); printf("mask is off\n"); sleep(1);
                    if (i !=0) danger--;
                    else {danger++;}

                }
                else if (i == 0 && response == 'f') {danger--;}
                else {danger++;}
            }
            else if (flash == 1 && i == 2)//flash BB in vent
            {
                printf("something is in the vents, enter[f/m]\n");

                scanf(" %c", &response);
                if (response == 'm')
                {
                    printf("mask is on\n  waiting...\n");    sleep(2);   printf("mask is off\n", danger--);sleep(1);
                }
                else {danger++;}
            }


            else {printf("there is nothing here\n");    sleep(2);   danger++; printf("you are at level %d danger", danger);sleep(1);}

        }


        else mask:
        {
            printf("mask is on\n");
                {printf("waiting...\n");    sleep(2);   printf("mask is off\n");sleep(1);
                if (i !=0) danger--;
                else {danger++;}
                }
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    gameover:
        if (danger>=3){printf("AHHHHHHhh\nGAMEOVER\n\n\n\n\n\n ^#BBBBBBP5J7:                      ^7JY5PGGGGGP^ \nY#B&&&&&&&#GJ: .. :^. ~^.^... . ~5B#&&&&&&&#BY. \n:GBB&&&&&&&&BY:   .J:Y7Y     !B##&&&&&&&&#G^  \n^PGB&&&&&&&#G7!JYYJGPGBG7JJ?7~GB#&&&&&&&##B!\n.   :5GB#&&&&&#GY&&#####&&######BGGG#&&&&&##B! .  \n.  . .J5PBBG?Y&##BBBB###BBBGGGG#BBPG####BGJ  .  \n.. .   ..::JB######BBB##BBBG55PGBGJ7?!^.  .. ..\n........    G@########BBBBBBBBG55Y5PP:     .......\n.  .  .     5@&&@@&&&#BG#&&#BBBGP55P5.   .  .  .  \n.  .  . .^!7J&@@@@@@@&&#&YJBP!P#GPPPP~.  .  .  .  \n .. .  .~B#&&&&&@@@@@@#B&BJJ?J#BPPPGBG57  .. .. ..\n.  . !PB###BBB####BGGGGPPGGGGGPPPPPGGGGGJ^. .  .  \n  . ^J5GGB#&@@&BP555YYYJJ??Y5GGGBBBBBBBBG7 .  .  \n.. ..   .:^?JP##&&&&#PYY???75#B#BBBP5Y?7: . .. .\n.. .. .      Y&&@&&&#GJ????P&&&B7...      . .. ..\n.  .  .       JBGGPP5Y??77?J@@&BP:       .  .  .  \n  .     .:^^ Y@BPGG5YYYYPYY&#GG?    ...       .  \n.. .?YYP5PBB#&55#@Y5BP7PB#GP5YYJJYYYJ77~~:.  ..\n  !#@@@@@#&@@&#P5Y#?GGYJGGPPG57??P#BBGY7BGGPY!  .\n:Y&#&@@@@@@@@&&&##BBGGGPPPPGGGGGPPPGPPGYGPP55P7  \n7#@B5P&@Y5#@&&&&###BBGPP5YYJJJJJJJJ5PPB#BPPGGGBP7:\n&&@&&&@P  :B#BBGPPP555Y555P55YYJJJJ??75:  P&&BPP5Y;");}
    return 0;
}
