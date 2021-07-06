#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>	
#include<string.h>

#define SIZE 8
#define WHITE 1
#define BLACK 0
#define MOVE_LIMIT 10000

// print the board in structured format from white side
void printBoard(char **board)
{
  int i, j;
  
  // top boundary
  printf(" +");
  for ( i = 0; i < SIZE; i++ ) {
    printf("-------+");
  }
  printf("\n");
  for ( i = SIZE-1; i >= 0; i-- ) { // for each 3-width row of 8 cells
    // top row of each cell-row
    printf(" |");
    for ( j = 0; j < SIZE; j++ ) {
      if ( (i+j)%2 ) { // white cells
        printf("       |");
      }
      else { // black cells
        printf(" . . . |");
      }
    }
    // middle row of each cell-row
    printf("\n |");
    for ( j = 0; j < SIZE; j++ ) {
      if ( (i+j)%2 ) { // white cells
        if ( board[i][j] == ' ' ) {
          printf("       |");
        }
        else {
          printf("  [%c]  |", board[i][j]);
        }
      }
      else { // black cells
        if ( board[i][j] == ' ') {
          printf(" . . . |");
        }
        else {
          if ( board[i][j] == ' ' ) {
            printf("       |");
          }
          else {
            printf(" .[%c]. |", board[i][j]);
          }
        }
      }
    }
    // bottom row of each cell-row
    printf("\n |");
    for ( j = 0; j < SIZE; j++ ) {
      if ( (i+j)%2 ) { // white cells
        printf("       |");
      }
      else { // black cells
        printf(" . . . |");
      }
    }
    // lower boundary of each cell-row
    printf("\n +");
    for ( j = 0; j < SIZE; j++ ) {
      if ( (i+j)%2 ) { // white cells
        printf("-------+");
      }
      else { // black cells
        printf("-------+");
      }
    }
    printf("\n");
  }
}

// initialize the pieces in board at the beginning of the game
void initBoard(char **board)
{
  int i, j;
  
  // making all cell empty
  for ( i = SIZE-1; i >= 0; i-- ) {
    for ( j = 0; j < SIZE; j++ ) {
      board[i][j] = ' ';
    }
  }
  
  // black pieces placement
  board[7][0] = board[7][7] = 'r';
  board[7][1] = board[7][6] = 'n';
  board[7][2] = board[7][5] = 'b';
  board[7][3] = 'q'; board[7][4] = 'k';
  for ( i = 0; i < SIZE; i++ ) {
    board[6][i] = 'p';
  }
  
  // white pieces placement
  board[0][0] = board[0][7] = 'R';
  board[0][1] = board[0][6] = 'N';
  board[0][2] = board[0][5] = 'B';
  board[0][3] = 'Q'; board[0][4] = 'K';
  for ( i = 0; i < SIZE; i++ ) {
    board[1][i] = 'P';
  }
}

// update board positions after each move is being taken
// by removing the old position and updating the new position
void updateBoard(char **board, char move[SIZE], int turn)
{
  int i, j;
  
  switch ( strlen(move) ) {
    case 3:
      if ( !strcmp(move,"O-O") ) { // king-side castling
        if ( turn == WHITE ) { // white-side
          board[0][6] = 'K'; board[0][5] = 'R';
          board[0][4] = ' '; board[0][7] = ' ';
        }
        else { // black-side
          board[7][6] = 'k'; board[7][5] = 'r';
          board[7][4] = ' '; board[7][7] = ' ';
        }
      }
      else { // illegal notation
        printf("~~ Error: Illegal Move Notation!");
      }
      break;
    
    case 5:
      if ( !strcmp(move,"O-O-O") ) { // queen-side castling
        if ( turn == WHITE ) { // white-side
          board[0][2] = 'K'; board[0][3] = 'R';
          board[0][4] = ' '; board[0][0] = ' ';
        }
        else { // black-side
          board[7][2] = 'k'; board[7][3] = 'r';
          board[7][4] = ' '; board[7][0] = ' ';
        }
      }
      else { // illegal notation
        printf("~~ Error: Illegal Move Notation!");
      }
      break;
    
    case 6:
      if ( (move[3] == 'x') && (move[0] == 'P') &&
           (board[move[5]-'0'-1][move[4]-'a'] == ' ') ) { // en-passant rule by white
        board[move[5]-'0'-2][move[4]-'a'] = ' ';
      }
      if ( (move[3] == 'x') && (move[0] == 'p') &&
           (board[move[5]-'0'-1][move[4]-'a'] == ' ') ) { // en-passant rule by black
        board[move[5]-'0'][move[4]-'a'] = ' ';
      }
      board[move[5]-'0'-1][move[4]-'a'] = move[0]; // update new position
      board[move[2]-'0'-1][move[1]-'a'] = ' '; // remove old position
      break;
    
    default:// illegal notation
      printf("~~ Error: Illegal Move Notation!");
      break;
  }
}

// simulating the automatic play from preloaded sequence of move data
void automaticGamePlay(char **board, char **move, int n)
{
  int i, check = 0;
  
  for ( i = 0; i < n; i++) {
    if ( !strcmp(move[i],"DRAW") || !strcmp(move[i],"draw") ) { // match drawn
      printf("~~ Game Over: Match DRAWN! [0.5-0.5]\n");
      break;
    }
    else if ( !strcmp(move[i],"RESIGN") || !strcmp(move[i],"resign") ) { // resignation
      if ( i%2 ) { // resign in black move
        printf("~~ Game Over: BLACK Resigns! WHITE Wins! [1-0]\n");
      }
      else { // resign in white move
        printf("~~ Game Over: WHITE Resigns! BLACK Wins! [0-1]\n");
      }
      break;
    }
    else {
      if ( move[i][strlen(move[i])-1] == '+' ) {
        move[i][strlen(move[i]) - 1] = '\0';
        check = 1;
      }
      if ( move[i][strlen(move[i])-1] == '#' ) {
        move[i][strlen(move[i]) - 1] = '\0';
        check = 2;
      }
      if ( i%2 ) { // black plays
        if ( move[i][0] != 'O' ) {
          move[i][0] = tolower(move[i][0]);
        }
        updateBoard(board, move[i], BLACK);
        printf("\n** After BLACK's Move : %s\n", move[i]);
        printBoard(board);
      }
      else { // white plays
        move[i][0] = toupper(move[i][0]);
        updateBoard(board, move[i], WHITE);
        printf("\n** After WHITE's Move : %s\n", move[i]);
        printBoard(board);
      }
      if ( check == 1 ) { // check
        if ( i%2 ) { // check threaten by black
          printf("~~ Game Decision: BLACK Offers CHECK!\n");
        }
        else { // check threaten by white
          printf("~~ Game Decision: WHITE Offers CHECK!\n");
        }
        check = 0;
      }
      if ( check == 2 ) { // checkmate
        if ( i%2 ) { // checkmate after black move
          printf("~~ Game Over: BLACK Checkmates WHITE! [0-1]\n");
        }
        else { // checkmate after white move
          printf("~~ Game Over: WHITE Checkmates BLACK! [1-0]\n");
        }
        check = 0;
      }
    }
  }
}

int main()
{
  char **board, **move;
  int i;
  
  // allocate the memory for keeping the chess board positions
  board = (char **)malloc(SIZE*sizeof(char *));
  for ( i = 0; i < SIZE; i++ ) {
    board[i] = (char *)malloc(SIZE*sizeof(char));
  }
  
  // board initialization and show at game start
  initBoard(board);
  printf("** Initial Board Configuration:\n");
  printBoard(board);
  
  // allocate the memory for keeping pre-loaded chess move sequence
  move = (char **)malloc(MOVE_LIMIT*sizeof(char *));
  for ( i = 0; i < MOVE_LIMIT; i++ ) {
    move[i] = (char *)malloc(SIZE*sizeof(char));
  }
  
  // scan pre-loaded data of game play sequences
  printf("\n++ Load Game Data:\n");
  i = 0;
  do {
    scanf("%s", move[i]);
    i++;
  } while ( (move[i-1][strlen(move[i-1])-1] !='#') &&
            strcmp(move[i-1],"DRAW") && strcmp(move[i-1],"draw") &&
            strcmp(move[i-1],"RESIGN") && strcmp(move[i-1],"resign") );
  
  // automatic game play with pre-loaded move sequences
  automaticGamePlay(board,move,i);

  return 0;
}