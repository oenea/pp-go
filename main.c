#include <stdio.h>
#include <conio.h>

#define HADICAP 1
#define NORMAL_MODE 0

struct position { 
    int x;
    int y;

};
FILE *saving_file;
if(saving_file = fopen("filename", "w+") == NULL) {
    exit(1);

};
//fclose(saving_file);
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

#define sizeof_field(t, f) (sizeof(((t*)0)->f))


struct board_state {
    typedef unsigned char Intersection;
    
    struct board_state {
        int board_size;

        Intersection board[BOARDSIZE];
        int board_ko_pos;
        int black_captured;
        int white_captured;

        Intersection initial_board[BOARDSIZE];
        int initial_board_ko_pos;
        int initial_white_captured;
        int initial_black_captured;
        int move_history_pos[MAX_MOVE_HISTORY];
        int move_history_pointer;

        float komi;
        int move_number;
    };
};

handicap_test_removing_chains[9][9] = {
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', 'O', 'O', 'O', 'O', '.', '.', '.', '.'},
    {'O', 'X', 'X', 'X', 'X', 'O', '.', '.', '.'},
    {'.', 'O', 'O', 'O', 'O', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
};
handcap_test_removing_single_stone[9][9] = {
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', 'O', '.', '.', '.', '.', '.', '.', '.'},
    {'O', 'X', 'O', '.', '.', '.', '.', '.', '.'}, 
    {'.', 'O', '.', '.', '.', '.', '.', '.', '.'}, 
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
};

//char* stones_removal

// SCORING 
// the score is number of captured stones and number of enclosed intersections by player stones
// game is finished when status of every stone is determined directly or the players can just count it as if the movement was already made
// KOMI RULE
//
// [normal mode]
// +6.5 points to white user 
// [handicapped mode] 
// when some of the black stones are predefined and put on the board at start
// +0.5 point to white user to break a tie
//
// MANDATORY FUNCTIONALITY
//
// move through arrows
// legent contain current position of cursor
// impossible to cursor to leavethe board
// cursor visible
// q - end program
// n - new game
// 1 - place a stone, if empty or not suicide (at least one liberty)
// game between two players
// detect capturing of stone and remove from the board, incrementing score to right player
// 
// OPTIONAL
//
// s - save game state to file named by user
// l - load game state from file named by user
// forcing rule of KO => save to file one last move of both players
// changing the size of the board ((9x9, 13x13, 19x19) or custom) if not fit implement scrolling
// detect the capture of every possible chain of stones, remove it from the board and increment the score of right player
// player can enter every possible initial configuration of black stones before start of gameplay
// f - finish the game, show the score, calculated to rules
//
// ADDITIONAL 
// 
// if any other move can still be made without reducing the score of one or both players, otherwise stop game, showing score
// mark the stones that have one liberty (chains share their liberties) and might be captured in the next move of the oponent

/*struct legend {
    char name[] = "Pawel";
    char  surname[] = "Pstragowski";
    char album_number[] = "s193473";
    char list_of_points[] = "";
    char list_of_working_keys[] = "";

};
*/

int k(){
    while (1) {
        char character = getch();
        printf("%c", character);
        if(character == 'q') {
            break;
        }
    }
}
int print_table(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            putchar('.');
        }
        putchar('\n');
    }
}

int main(void) {
   int a, b;
   a = 50;
   b = 40;
   clrscr();
   gotoxy(a, b);
    
}
