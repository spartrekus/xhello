

// libs for more
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>


void drawit()
{
        int rows, cols;  
        getmaxyx( stdscr, rows, cols);
        erase();
        mvprintw( 0, 0, "HELLO" );
}


///////////////////////////////////////////////////////////
int main( int argc, char *argv[])
{
   initscr();			
   curs_set( 0 );
   start_color();
   init_pair(1, COLOR_RED, COLOR_BLACK);
   init_pair(2, COLOR_GREEN, COLOR_BLACK);
   init_pair(3, COLOR_BLUE, COLOR_BLACK);
   init_pair(4, COLOR_CYAN, COLOR_BLACK);
   color_set( 2, NULL );

   int ch ; 
   int rows, cols;  
   getmaxyx( stdscr, rows, cols);
   int gameover_nsc = 0;

   while ( gameover_nsc == 0)
   {
           drawit();
	   refresh();			/* Print it on to the real screen */
           ch = getch();

           if ( ch == 'q' ) gameover_nsc =1 ;
 
    }

    curs_set( 1 );
    endwin();			/* End curses mode		  */
    return 0;
}



