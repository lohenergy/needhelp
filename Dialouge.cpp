#include "Dialouge.h"

int Dialogue::getX()
{
    return 0;
}

int Dialogue::getY()
{
    return 0;
}


void slowPrint(std::string textToPrint, int speed)
{
    int x = 0;
    while (textToPrint[x] != '\0')
    {
        std::cout << textToPrint[x];
       (speed);
        x++;
    };

    std::cout << std::endl << std::endl;
}

Dialogue::Dialogue()
{   //introduction
    slowPrint("You were the only survivor of your village", 1);
    slowPrint("Years of training and tracking intel, you tracked down the mercenaries who caused the attack.", 1);
    slowPrint("Now, currently living in the kingdom working as a high-ranking general, finding the mercernary.", 1);
    //1st plotpoint 
    slowPrint("You are at the gate guarded by two men.", 1);
    slowPrint("You can't enter, you need permission from our two superiors.", 1);
    slowPrint("You went out to find both superiors.", 1);
    slowPrint("You find the first superior.", 1);
    std::cout << "Hey the guardman told me to talk to y...." << std::endl;
    slowPrint("You stopped midway as you remember who the superior previously was.", 1);
    std::cout << "It's you! I thought you were dead!" << "You had a memory of him in the dark past." << std::endl;
    slowPrint("You initially thought they are dead. ", 1);
    slowPrint("After learning this new discovery, you vow to seek revenge on them too.", 1);
    std::cout << " The superior asked,Who are you?" << std::endl;
    slowPrint("You pulled out the sword with a slient vein of anger and attacked him.", 1);
    std::cout << "The ends with you having the advantage." << std::endl;
    slowPrint("Argh, how are you so strong.", 1);
    std::cout << "Luckily, a guard came in the superior's aid" << std::endl;
    slowPrint("Retreat to the east side of the castle,sir.", 1); std::cout << "said one of the guardman." << std::endl;
    slowPrint( " The superior retreats while the guardman come attacking you.", 1);

    
    //midpoint
    slowPrint("You navigate your way to the east side of the castle where the superior escape to. ", 1);
    slowPrint("You found him again.", 1);
    std::cout << "You can stop running old man." << "you said arrogantly." << std::endl;
    std::cout << "which he replys," << std::endl; slowPrint("I wasn't running, I just came to equip myself.", 1);
    std::cout << "You and the superior have a rematch" << std::endl;
    std::cout << " You have successfully defeated the stronger superior." << std::endl;
    slowPrint("I.....I remember you now, why are you doing this?", 1); std::cout << "said the superior." << std::endl;
    std::cout << "You replied to him in silence and got back to finding the main mercenary." << std::endl;
    // 2nd plotpoint
    slowPrint("You entered the castle and found the man responsible for the attack.", 1);
    slowPrint("It's you! You're alive! What...what have you done!?", 1); std::cout << "The king asked in anger." << std::endl;
    std::cout << "You replied," << std::endl; slowPrint("I finally found you. I had to pay your friend a little visit.", 1);

    //climax 
    slowPrint("You defeated the mercenary, heavily injured and told you the truth behind the attack.", 1);
    slowPrint("After what we did.....This is how you repay us? ", 1); std::cout << "said the king." << std::endl;
    slowPrint("What do you mean, you destroyed the village!.", 1); std::cout << "you exclaimed in confusion." << std::endl;
    slowPrint("No! We tried to saved the village from the Goblin's attack, but we could not win.", 1); std::cout << "the king further explains the truth." << std::endl;
    std::cout << "You witnessed the turmoil and fear struck in the kingdom" << std::endl;
    slowPrint("Please you don't need to do this!", 1); std::cout << "The prince continuees to plead for mercy." << std::endl;
    //ending
    std::cout << "Choose Ending (A) or Ending (B)" << std::endl;
    std::cin >> choice;
    if (choice == 'A')
    {
        // if ending a 
        slowPrint("The sword was placed down on the floor next to the mercenary.", 1);
        slowPrint("I'm sorry... I didn't know. I killed so many......", 1); std::cout << "you said with guilt over your actions." << std::endl;
        slowPrint("The deed is done at a heavy cost. My people are gone and they cannot return. All you can do now is to get out of my sight.", 1); std::cout << "said the mercenary as he orders you to leave." << std::endl;
        slowPrint("You walked away from the kingdom and start a new life.", 1);
    }
    else
    {
        //if ending b
        slowPrint("You hold the sword up in the air, the mercenary begged to speak more of the truth ", 1);
        slowPrint("Anger got the best of you and you slashed the mercenary.", 1);
        slowPrint("The king left with a shocked expression on his face as his breathe his last breath.", 1);
        slowPrint("You realised you succeed your goal in avenging those who you have lost to.", 1);
        slowPrint("However, you broke down in front of the king's body as the revenge earned comes at a heavy loss.", 1);
        std::cout << "The guards caught hold off you as you admitted to youor crimes." << std::endl;
        slowPrint("The law found you guilty of genocide in the city and deserved the death sentence.", 1);
        slowPrint("Time passes and your end living in this world is called to an end.", 1);
    }



}
void Dialogue::herodialogue(Character* hero)
{

}

void Dialogue::superiordialogue()
{
}

void Dialogue::mercenarydialogue()
{
}



