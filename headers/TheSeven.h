#ifndef THESEVEN_H
#define THESEVEN_H

#include <stdio.h>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"



void printBanner() {
    printf(YELLOW "********************************************************\n" RESET);
    printf(YELLOW "*                                                      *\n" RESET);
    printf(YELLOW "*      WELCOME TO VOUGHT INTERNATIONAL - TECH DIVISION *\n" RESET);
    printf(YELLOW "*                                                      *\n" RESET);
    printf(YELLOW "********************************************************\n\n" RESET);

    printf(RED "████████╗██╗  ██╗███████╗     ███████╗███████╗██╗   ██╗███████╗███╗   ██╗\n");
    printf("╚══██╔══╝██║  ██║██╔════╝     ██╔════╝██╔════╝██║   ██║██╔════╝████╗  ██║\n");
    printf("   ██║   ███████║█████╗       ███████╗█████╗  ██║   ██║█████╗  ██╔██╗ ██║\n");
    printf("   ██║   ██╔══██║██╔══╝       ╚════██║██╔══╝  ╚██╗ ██╔╝██╔══╝  ██║╚██╗██║\n");
    printf("   ██║   ██║  ██║███████╗     ███████║███████╗ ╚████╔╝ ███████╗██║ ╚████║\n");
    printf("   ╚═╝   ╚═╝  ╚═╝╚══════╝     ╚══════╝╚══════╝  ╚═══╝  ╚══════╝╚═╝  ╚═══╝\n\n" RESET);
    
    printf(YELLOW ">> The Elite Programmers of VOUGHT <<\n\n" RESET);
}

void printTeamMembers() {
    printf(GREEN "\n===== Leadership =====\n" RESET);
    printf(RED "Ani Avagyan (Homelander - Team Manager):\n" RESET);
    printf(WHITE "The all-powerful leader. Keeps the team in line (or tries to). Don't cross her.\n\n" RESET);

    printf(BLUE "===== Code Managers =====\n" RESET);
    printf(YELLOW "Grigori Verdyan (The Butcher - Code Manager):\n" RESET);
    printf(WHITE "Relentlessly hunts down bugs and enforces code quality. Quality is his Compound V.\n\n" RESET);
    
    printf(YELLOW "Sergey Osokin (The Butcher - Code Manager):\n" RESET);
    printf(WHITE "Another Butcher, because one is never enough when it comes to crushing bugs.\n\n" RESET);
    
    printf(YELLOW "Artyom Amirkhanyan (The Butcher - Code Manager):\n" RESET);
    printf(WHITE "The third Butcher, forming a formidable trio of code quality enforcement.\n\n" RESET);

    printf(CYAN "===== Communication Managers =====\n" RESET);
    printf(CYAN "Artur Petoyan (Frenchie - Communication Manager):\n" RESET);
    printf(WHITE "Handles communication, documentation, and keeps things (relatively) organized. The tech wizard.\n\n" RESET);

    printf(CYAN "Knarik Ktunyan (Frenchie - Communication Manager):\n" RESET);
    printf(WHITE "Another Frenchie, ensuring smooth communication and collaboration.\n\n" RESET);

    printf(CYAN "Marianna Tumanyan (Frenchie - Communication Manager):\n" RESET);
    printf(WHITE "The third Frenchie, completing the communication trifecta.\n\n" RESET);

    printf(MAGENTA "===== Specialists =====\n" RESET);
    printf(MAGENTA "Sima Alaverdyan (The Kimiko - Emergency Troubleshooter):\n" RESET);
    printf(WHITE "Solves the unsolvable problems. Fast, efficient, and silent.\n\n" RESET);

    printf(WHITE "Alisa Harutyunyan (The Black Noir - The Whisperer):\n" RESET);
    printf(WHITE "Gathers intel from other departments. Knows all the secrets.\n\n" RESET);

    printf(GREEN "Armen Khachatryan (Hughie - Junior Developer):\n" RESET);
    printf(WHITE "Eager to learn and contribute. The fresh blood of the team.\n\n" RESET);

    printf(BLUE "Mikayel Zohrabyan (A-Train - Fastest Coder):\n" RESET);
    printf(WHITE "Delivers projects with incredible speed. Don't blink, or you'll miss it.\n\n" RESET);

    printf(YELLOW "Rozi Margaryan (Starlight - UI/UX Designer):\n" RESET);
    printf(WHITE "Creates beautiful and user-friendly interfaces. The shining light of user experience.\n\n" RESET);

    printf(YELLOW "Ruzanna Mkrtchyan (Starlight - House General Management):\n" RESET);
    printf(WHITE "Keeps everything running smoothly behind the scenes. The organizational powerhouse.\n\n" RESET);

    printf(CYAN "Andrei Panikov (The Deep - Code Diver):\n" RESET);
    printf(WHITE "Explores the depths of the codebase. Finds the hidden complexities.\n\n" RESET);

    printf(RED "Andranik Baghdasaryan (Soldier Boy - Discipline Enforcer):\n" RESET);
    printf(WHITE "Maintains order and ensures everyone follows the rules. The old-school enforcer.\n\n" RESET);

    printf(GREEN "===== Welcome to the team! Let's code like superheroes! =====\n\n" RESET);
}

#endif // THESEVEN_H