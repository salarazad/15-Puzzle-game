#include <windows.h>

// color automation
#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15


// write a string to a coordination
void printmid(double x, double y, char text[]) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%s\n", text);
}

// write a character to a coordination
void printcharmid(double x, double y, char text) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%c\n", text);
}

// cursor move to coordination
void cursor(double x, double y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



// flashing banner
void flashing () {		
	int f;
	for (f=0; f<=2; f++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printmid(50,3,"Let the battle begin");
		Sleep(400);
		system("cls");
		Sleep(400);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
}


void SetTextBold()
{
    // hi-white on black 
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),
                              FOREGROUND_RED |
                                FOREGROUND_GREEN |
                                FOREGROUND_BLUE |
                                FOREGROUND_INTENSITY );
}



// change console background color
//	system("COLOR 5");                            // change the text font color to pinnk (5)
//	printf("Hello,World!\n");
//	system("COLOR FC");                           // double degit is for changing the text font and the background color
//	printf("Goodbuy Moon\n");
//	system("COLOR 7");




// change font to BOLD
//	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_FONT_INFOEX font;
//	font.dwFontSize.X=7;
//	font.dwFontSize.Y=12;
//	SetCurrentConsoleFontEx(outcon, false, &font);
//	SetConsoleTextAttribute(outcon, 0x0C);