#include <stdio.h>
#include <myheader.h>
#include <conio.h>

void layout () {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),GREEN);
	int m;
	for (m=20; m<= 90; m++) {
		printmid(m,5,"_");
		printmid(m,11,"_");
		printmid(m,17,"_");
		printmid(m,23,"_");
		printmid(m,29,"_");
	}
	int n;
	for (n=6; n<=29; n++) {
		printmid(19,n,"|");
		printmid(37,n,"|");
		printmid(55,n,"|");
		printmid(73,n,"|");
		printmid(91,n,"|");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
}


void numbers() {
	//number 1
	printmid(27,7,"\/");
	printmid(28,7,"|");
	printmid(28,8,"|");
	printmid(28,9,"|");
	printmid(28,10,"|");
	printmid(27,10,"_");
	printmid(29,10,"_");
	
	//number 2
	printmid(44,7,"\/");
	printmid(45,6,"_");
	printmid(46,6,"_");
	printmid(47,6,"_");
	printmid(48,6,"_");
	printmid(49,7,"\\");
	printmid(49,8,"\/");
	printmid(48,8,"_");
	printmid(47,8,"_");
	printmid(46,8,"_");
	printmid(45,8,"_");
	printmid(44,9,"\/");
	printmid(44,10,"\\");
	printmid(48,10,"_");
	printmid(47,10,"_");
	printmid(46,10,"_");
	printmid(45,10,"_");
	printmid(49,10,"\/");
	
	//number 3
	printmid(62,6,"_");
	printmid(63,6,"_");
	printmid(64,6,"_");
	printmid(65,6,"_");
	printmid(66,6,"_");
	printmid(67,7,"|");
	printmid(67,8,"|");
	printmid(62,8,"_");
	printmid(63,8,"_");
	printmid(64,8,"_");
	printmid(65,8,"_");
	printmid(66,8,"_");
	printmid(67,9,"|");
	printmid(67,10,"|");
	printmid(62,10,"_");
	printmid(63,10,"_");
	printmid(64,10,"_");
	printmid(65,10,"_");
	printmid(66,10,"_");
	
	//number 4
	printmid(81,7,"\/");
	printmid(80,8,"\/");
	printmid(79,9,"\/");
	printmid(80,9,"_");
	printmid(81,9,"_");
	printmid(82,9,"_");
	printmid(83,9,"_");
	printmid(84,9,"_");
	printmid(85,9,"_");
	printmid(83,7,"|");
	printmid(83,8,"|");
	printmid(83,9,"|");
	printmid(83,10,"|");
	
	//number 5
	printmid(26,12,"_");
	printmid(27,12,"_");
	printmid(28,12,"_");
	printmid(29,12,"_");
	printmid(30,12,"_");
	printmid(25,13,"|");
	printmid(25,14,"|");
	printmid(26,14,"_");
	printmid(27,14,"_");
	printmid(28,14,"_");
	printmid(29,14,"_");
	printmid(30,14,"_");
	printmid(31,15,"|");
	printmid(31,16,"|");
	printmid(30,16,"_");
	printmid(29,16,"_");
	printmid(28,16,"_");
	printmid(27,16,"_");
	printmid(26,16,"_");
	
	//number 6
	printmid(44,12,"_");
	printmid(45,12,"_");
	printmid(46,12,"_");
	printmid(47,12,"_");
	printmid(48,12,"_");
	printmid(43,13,"|");
	printmid(43,14,"|");
	printmid(44,14,"_");
	printmid(45,14,"_");
	printmid(46,14,"_");
	printmid(47,14,"_");
	printmid(48,14,"_");
	printmid(43,15,"|");
	printmid(43,16,"|");
	printmid(44,16,"_");
	printmid(45,16,"_");
	printmid(46,16,"_");
	printmid(47,16,"_");
	printmid(48,16,"_");
	printmid(49,15,"|");
	printmid(49,16,"|");
	
	//number 7
	printmid(62,12,"_");
	printmid(63,12,"_");
	printmid(64,12,"_");
	printmid(65,12,"_");
	printmid(66,12,"_");
	printmid(67,13,"|");
	printmid(67,14,"|");
	printmid(67,15,"|");
	printmid(67,16,"|");
	printmid(66,14,"_");
	printmid(68,14,"_");
	
	//number 8
	printmid(79,12,"_");
	printmid(79,12,"_");
	printmid(80,12,"_");
	printmid(81,12,"_");
	printmid(82,12,"_");
	printmid(83,12,"_");
	printmid(78,13,"|");
	printmid(78,14,"|");
	printmid(78,15,"|");
	printmid(78,16,"|");
	printmid(79,14,"_");
	printmid(79,14,"_");
	printmid(80,14,"_");
	printmid(81,14,"_");
	printmid(82,14,"_");
	printmid(83,14,"_");
	printmid(84,14,"_");
	printmid(84,13,"|");
	printmid(84,14,"|");
	printmid(84,15,"|");
	printmid(84,16,"|");
	printmid(79,16,"_");
	printmid(79,16,"_");
	printmid(80,16,"_");
	printmid(81,16,"_");
	printmid(82,16,"_");
	printmid(83,16,"_");
	
	//number 9
	printmid(31,21,"|");
	printmid(31,22,"|");
	printmid(26,18,"_");
	printmid(27,18,"_");
	printmid(28,18,"_");
	printmid(29,18,"_");
	printmid(30,18,"_");
	printmid(31,19,"|");
	printmid(31,20,"|");
	printmid(26,20,"_");
	printmid(27,20,"_");
	printmid(28,20,"_");
	printmid(29,20,"_");
	printmid(30,20,"_");
	printmid(25,19,"|");
	printmid(25,20,"|");
	
	//number 10
	printmid(41,19,"\/");
	printmid(42,19,"|");
	printmid(42,20,"|");
	printmid(42,21,"|");
	printmid(42,22,"|");
	printmid(41,22,"_");
	printmid(43,22,"_");
	
	printmid(46,18,"_");
	printmid(47,18,"_");
	printmid(48,18,"_");
	printmid(49,18,"_");
	printmid(50,19,"|");
	printmid(50,20,"|");
	printmid(50,21,"|");
	printmid(50,22,"|");
	printmid(46,22,"_");
	printmid(47,22,"_");
	printmid(48,22,"_");
	printmid(49,22,"_");
	printmid(45,19,"|");
	printmid(45,20,"|");
	printmid(45,21,"|");
	printmid(45,22,"|");
	
	//number 11
	printmid(61,19,"\/");
	printmid(62,19,"|");
	printmid(62,20,"|");
	printmid(62,21,"|");
	printmid(62,22,"|");
	printmid(61,22,"_");
	printmid(63,22,"_");
	
	printmid(66,19,"\/");
	printmid(67,19,"|");
	printmid(67,20,"|");
	printmid(67,21,"|");
	printmid(67,22,"|");
	printmid(66,22,"_");
	printmid(68,22,"_");
	
	//number 12
	printmid(78,19,"\/");
	printmid(79,19,"|");
	printmid(79,20,"|");
	printmid(79,21,"|");
	printmid(79,22,"|");
	printmid(78,22,"_");
	printmid(80,22,"_");
	
	printmid(82,19,"\/");
	printmid(83,18,"_");
	printmid(84,18,"_");
	printmid(85,18,"_");
	printmid(86,18,"_");
	printmid(87,19,"\\");
	printmid(87,20,"\/");
	printmid(86,20,"_");
	printmid(85,20,"_");
	printmid(84,20,"_");
	printmid(83,20,"_");
	printmid(82,21,"\/");
	printmid(82,22,"\\");
	printmid(86,22,"_");
	printmid(85,22,"_");
	printmid(84,22,"_");
	printmid(83,22,"_");
	printmid(87,22,"\/");
	
	//number 13
	printmid(24,25,"\/");
	printmid(25,25,"|");
	printmid(25,26,"|");
	printmid(25,27,"|");
	printmid(25,28,"|");
	printmid(24,28,"_");
	printmid(26,28,"_");
	
	printmid(29,24,"_");
	printmid(30,24,"_");
	printmid(31,24,"_");
	printmid(32,24,"_");
	printmid(33,24,"_");
	printmid(34,25,"|");
	printmid(34,26,"|");
	printmid(29,26,"_");
	printmid(30,26,"_");
	printmid(31,26,"_");
	printmid(32,26,"_");
	printmid(33,26,"_");
	printmid(34,27,"|");
	printmid(34,28,"|");
	printmid(29,28,"_");
	printmid(30,28,"_");
	printmid(31,28,"_");
	printmid(32,28,"_");
	printmid(33,28,"_");
	
	//number 14
	printmid(41,25,"\/");
	printmid(42,25,"|");
	printmid(42,26,"|");
	printmid(42,27,"|");
	printmid(42,28,"|");
	printmid(41,28,"_");
	printmid(43,28,"_");
	
	printmid(47,25,"\/");
	printmid(46,26,"\/");
	printmid(45,27,"\/");
	printmid(46,27,"_");
	printmid(47,27,"_");
	printmid(48,27,"_");
	printmid(49,27,"_");
	printmid(50,27,"_");
	printmid(51,27,"_");
	printmid(49,25,"|");
	printmid(49,26,"|");
	printmid(49,27,"|");
	printmid(49,28,"|");
	
	//number 15
	printmid(60,25,"\/");
	printmid(61,25,"|");
	printmid(61,26,"|");
	printmid(61,27,"|");
	printmid(61,28,"|");
	printmid(60,28,"_");
	printmid(62,28,"_");
	
	printmid(65,24,"_");
	printmid(66,24,"_");
	printmid(67,24,"_");
	printmid(68,24,"_");
	printmid(69,24,"_");
	printmid(64,25,"|");
	printmid(64,26,"|");
	printmid(65,26,"_");
	printmid(66,26,"_");
	printmid(67,26,"_");
	printmid(68,26,"_");
	printmid(69,26,"_");
	printmid(70,27,"|");
	printmid(70,28,"|");
	printmid(69,28,"_");
	printmid(68,28,"_");
	printmid(67,28,"_");
	printmid(66,28,"_");
	printmid(65,28,"_");
	
}


void numberseasy(char a[], char b[], char c[], char d[], char e[], char f[], char g[], char h[], char i[], char j[], char k[], char l[], char m[], char n[], char o[], char p[]) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(28,8,a);                    // position A
	printmid(46,8,b);                    // position B
	printmid(64,8,c);                    // position C
	printmid(82,8,d);                    // position D
	printmid(28,14,e);                   // position E
	printmid(46,14,f);                   // position F
	printmid(64,14,g);                   // position G
	printmid(82,14,h);                   // position H
	printmid(28,20,i);                   // position I
	printmid(46,20,j);                   // position J
	printmid(64,20,k);                   // position K
	printmid(82,20,l);                   // position L
	printmid(28,26,m);                   // position M
	printmid(46,26,n);                   // position N
	printmid(64,26,o);                   // position O
	printmid(82,26,p);                   // position P
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
}


// to delete the number on board
void deletenumber (char *delt) {
	switch (*delt) {
		case 'a': printmid(28,8,"  "); break;                  // delete slot A
		case 'b': printmid(46,8,"  "); break;                  // delete slot B
		case 'c': printmid(64,8,"  "); break;                  // delete slot C
		case 'd': printmid(82,8,"  "); break;                  // delete slot D
		case 'e': printmid(28,14,"  "); break;                 // delete slot E
		case 'f': printmid(46,14,"  "); break;                 // delete slot F
		case 'g': printmid(64,14,"  "); break;                 // delete slot G
		case 'h': printmid(82,14,"  "); break;                 // delete slot H
		case 'i': printmid(28,20,"  "); break;                 // delete slot I
		case 'j': printmid(46,20,"  "); break;                 // delete slot J
		case 'k': printmid(64,20,"  "); break;                 // delete slot K
		case 'l': printmid(82,20,"  "); break;                 // delete slot L
		case 'm': printmid(28,26,"  "); break;                 // delete slot M
		case 'n': printmid(46,26,"  "); break;                 // delete slot N
		case 'o': printmid(64,26,"  "); break;                 // delete slot O
		case 'p': printmid(82,26,"  "); break;                 // delete slot P
	}
}



// to move the number from one slot to another, emitate the sliding operation on the board
void sliding(char emptytile, char *move, char *tileupdate, char *tiledelete, char a[], char b[], char c[], char d[], char e[], char f[], char g[], char h[], char i[], char j[], char k[], char l[], char m[], char n[], char o[], char p[]) {
//	char *tileupdate;
//	tileupdate = malloc(sizeof(char)*10);
//	char a[] = "1";
//	char b[] = "2";
//	char c[] = "3";
//	char d[] = "4";
//	char e[] = "5";
//	char f[] = "6";
//	char g[] = "7";
//	char h[] = "8";
//	char i[] = "9";
//	char j[] = "10";
//	char k[] = "11";
//	char l[] = "12";
//	char m[] = "13";
//	char n[] = "14";
//	char o[] = "15";
//	char p[] = "  ";
	switch (emptytile) {
//		case 'a': move = a; printmid(28,8,move); break;                                             // position A
//		case 'a': numberseasy(move,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p); break;                           // position A
		case 'a': switch (*move) {
			case 'b': printmid(28,8,b); *tileupdate = strcpy(a,b); *tiledelete = strcpy(b," "); break;
			case 'e': printmid(28,8,e); *tileupdate = strcpy(a,e); *tiledelete = strcpy(e," "); break;
		} break;
//		case 'b': move = b; printmid(46,8,move); break;                   // position B
		case 'b': switch (*move) {
			case 'a': printmid(46,8,a); *tileupdate = strcpy(b,a); *tiledelete = strcpy(a," "); break;
			case 'c': printmid(46,8,c); *tileupdate = strcpy(b,c); *tiledelete = strcpy(c," "); break;
			case 'f': printmid(46,8,f); *tileupdate = strcpy(b,f); *tiledelete = strcpy(f," "); break;
		} break;
//		case 'c': move = c; printmid(64,8,move); break;                   // position C
		case 'c': switch (*move) {
			case 'b': printmid(64,8,b); *tileupdate = strcpy(c,b); *tiledelete = strcpy(b," "); break;
			case 'd': printmid(64,8,d); *tileupdate = strcpy(c,d); *tiledelete = strcpy(d," "); break;
			case 'g': printmid(64,8,g); *tileupdate = strcpy(c,g); *tiledelete = strcpy(g," "); break;
		} break;
//		case 'd': move = d; printmid(82,8,move); break;                   // position D
		case 'd': switch (*move) {
			case 'c': printmid(82,8,c); *tileupdate = strcpy(d,c); *tiledelete = strcpy(c," "); break;
			case 'h': printmid(82,8,h); *tileupdate = strcpy(d,h); *tiledelete = strcpy(h," "); break;
		} break;
//		case 'e': move = e; printmid(28,14,move); break;                  // position E
		case 'e': switch (*move) {
			case 'a': printmid(28,14,a); *tileupdate = strcpy(e,a); *tiledelete = strcpy(a," "); break;
			case 'f': printmid(28,14,f); *tileupdate = strcpy(e,f); *tiledelete = strcpy(f," "); break;
			case 'i': printmid(28,14,i); *tileupdate = strcpy(e,i); *tiledelete = strcpy(i," "); break;
		} break;
//		case 'f': move = f; printmid(46,14,move); break;                  // position F
		case 'f': switch (*move) {
			case 'b': printmid(46,14,b); *tileupdate = strcpy(f,b); *tiledelete = strcpy(b," "); break;
			case 'e': printmid(46,14,e); *tileupdate = strcpy(f,e); *tiledelete = strcpy(e," "); break;
			case 'g': printmid(46,14,g); *tileupdate = strcpy(f,g); *tiledelete = strcpy(g," "); break;
			case 'j': printmid(46,14,j); *tileupdate = strcpy(f,j); *tiledelete = strcpy(j," "); break;
		} break;
//		case 'g': move = g; printmid(64,14,move); break;                  // position G
		case 'g': switch (*move) {
			case 'c': printmid(64,14,c); *tileupdate = strcpy(g,c); *tiledelete = strcpy(c," "); break;
			case 'h': printmid(64,14,h); *tileupdate = strcpy(g,h); *tiledelete = strcpy(h," "); break;
			case 'f': printmid(64,14,f); *tileupdate = strcpy(g,f); *tiledelete = strcpy(f," "); break;
			case 'k': printmid(64,14,k); *tileupdate = strcpy(g,k); *tiledelete = strcpy(k," "); break;
		} break;
//		case 'h': move = h; printmid(82,14,move); break;                  // position H
		case 'h': switch (*move) {
			case 'd': printmid(82,14,d); *tileupdate = strcpy(h,d); *tiledelete = strcpy(d," "); break;
			case 'g': printmid(82,14,g); *tileupdate = strcpy(h,g); *tiledelete = strcpy(g," "); break;
			case 'l': printmid(82,14,l); *tileupdate = strcpy(h,l); *tiledelete = strcpy(l," "); break;
		} break;
//		case 'i': move = i; printmid(28,20,move); break;                  // position I
		case 'i': switch (*move) {
			case 'e': printmid(28,20,e); *tileupdate = strcpy(i,e); *tiledelete = strcpy(e," "); break;
			case 'j': printmid(28,20,j); *tileupdate = strcpy(i,j); *tiledelete = strcpy(j," "); break;
			case 'm': printmid(28,20,m); *tileupdate = strcpy(i,m); *tiledelete = strcpy(m," "); break;
		} break;
//		case 'j': move = j; printmid(46,20,move); break;                  // position J
		case 'j': switch (*move) {
			case 'i': printmid(46,20,i); *tileupdate = strcpy(j,i); *tiledelete = strcpy(i," "); break;
			case 'f': printmid(46,20,f); *tileupdate = strcpy(j,f); *tiledelete = strcpy(f," "); break;
			case 'k': printmid(46,20,k); *tileupdate = strcpy(j,k); *tiledelete = strcpy(k," "); break;
			case 'n': printmid(46,20,n); *tileupdate = strcpy(j,n); *tiledelete = strcpy(n," "); break;
		} break;
//		case 'k': move = k; printmid(64,20,move); break;                  // position K
		case 'k': switch (*move) {
			case 'j': printmid(64,20,j); *tileupdate = strcpy(k,j); *tiledelete = strcpy(j," "); break;
			case 'g': printmid(64,20,g); *tileupdate = strcpy(k,g); *tiledelete = strcpy(g," "); break;
			case 'l': printmid(64,20,l); *tileupdate = strcpy(k,l); *tiledelete = strcpy(l," "); break;
			case 'o': printmid(64,20,o); *tileupdate = strcpy(k,o); *tiledelete = strcpy(o," "); break;
		} break;
//		case 'l': move = l; printmid(82,20,move); break;                  // position L
		case 'l': switch (*move) {
			case 'h': printmid(82,20,h); *tileupdate = strcpy(l,h); *tiledelete = strcpy(h," "); break;
			case 'k': printmid(82,20,k); *tileupdate = strcpy(l,k); *tiledelete = strcpy(k," "); break;
			case 'p': printmid(82,20,p); *tileupdate = strcpy(l,p); *tiledelete = strcpy(p," "); break;
		} break;
//		case 'm': move = m; printmid(28,26,move); break;                  // position M
		case 'm': switch (*move) {
			case 'i': printmid(28,26,i); *tileupdate = strcpy(m,i); *tiledelete = strcpy(i," "); break;
			case 'n': printmid(28,26,n); *tileupdate = strcpy(m,n); *tiledelete = strcpy(n," "); break;
		} break;
//		case 'n': move = n; printmid(46,26,move); break;                  // position N
		case 'n': switch (*move) {
			case 'j': printmid(46,26,j); *tileupdate = strcpy(n,j); *tiledelete = strcpy(j," "); break;
			case 'm': printmid(46,26,m); *tileupdate = strcpy(n,m); *tiledelete = strcpy(m," "); break;
			case 'o': printmid(46,26,o); *tileupdate = strcpy(n,o); *tiledelete = strcpy(o," "); break;
		} break;
//		case 'o': move = o; printmid(64,26,move); break;                  // position O
		case 'o': switch (*move) {
			case 'k': printmid(64,26,k); *tileupdate = strcpy(o,k); *tiledelete = strcpy(k," "); break;
			case 'n': printmid(64,26,n); *tileupdate = strcpy(o,n); *tiledelete = strcpy(n," "); break;
			case 'p': printmid(64,26,p); *tileupdate = strcpy(o,p); *tiledelete = strcpy(p," "); break;
		} break;
//		case 'p': move = p; printmid(82,26,move); break;                  // position P
		case 'p': switch (*move) {
			case 'l': printmid(82,26,l); *tileupdate = strcpy(p,l); *tiledelete = strcpy(l," "); break;
			case 'o': printmid(82,26,o); *tileupdate = strcpy(p,o); *tiledelete = strcpy(o," "); break;
		} break;
	}
}


// choose which tile to move
char *tiletomove (char emptytile, int press) {                  
	char *tile;
	tile = malloc(sizeof(char)*10);
	if (emptytile == 'a') {
		switch (press) {
			case 80: strcpy(tile,"e"); break;                                        // DOWN
			case 72: printf("not possible!\n"); break;                               // UP
			case 77: strcpy(tile,"b"); break;                                        // RIGHT
			case 75: printf("not possible!\n"); break;                               // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'b') {
		switch (press) {
			case 80: strcpy(tile,"f"); break;                                        // DOWN
			case 72: printf("not possible!\n"); break;                           // UP
			case 77: strcpy(tile,"c"); break;                                        // RIGHT
			case 75: strcpy(tile,"a"); break;                                        // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'c') {
		switch (press) {
			case 80: strcpy(tile,"g"); break;                                        // DOWN
			case 72: printf("not possible!\n"); break;                           // UP
			case 77: strcpy(tile,"d"); break;                                        // RIGHT
			case 75: strcpy(tile,"b"); break;                                        // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'd') {
		switch (press) {
			case 80: strcpy(tile,"h"); break;                                        // DOWN
			case 72: printf("not possible!\n"); break;                           // UP
			case 77: printf("not possible!\n"); break;                           // RIGHT
			case 75: strcpy(tile,"c"); break;                                        // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'e') {
		switch (press) {
			case 80: strcpy(tile,"i"); break;                                        // DOWN
			case 72: strcpy(tile,"a"); break;                                        // UP
			case 77: strcpy(tile,"f"); break;                                        // RIGHT
			case 75: printf("not possible!\n"); break;                           // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'f') {
		switch (press) {
			case 80: strcpy(tile,"j"); break;                                        // DOWN
			case 72: strcpy(tile,"b"); break;                                        // UP
			case 77: strcpy(tile,"g"); break;                                        // RIGHT
			case 75: strcpy(tile,"e"); break;                                        // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'g') {
		switch (press) {
			case 80: strcpy(tile,"k"); break;                                        // DOWN
			case 72: strcpy(tile,"c"); break;                                        // UP
			case 77: strcpy(tile,"h"); break;                                        // RIGHT   
			case 75: strcpy(tile,"f"); break;                                        // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'h') {
		switch (press) {
			case 80: strcpy(tile,"l"); break;                                         // DOWN
			case 72: strcpy(tile,"d"); break;                                         // UP
			case 77: printf("not possible!\n"); break;                            // RIGHT
			case 75: strcpy(tile,"g"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'i') {
		switch (press) {
			case 80: strcpy(tile,"m"); break;                                         // DOWN
			case 72: strcpy(tile,"e"); break;                                         // UP
			case 77: strcpy(tile,"j"); break;                                         // RIGHT
			case 75: printf("not possible!\n"); break;                            // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'j') {
		switch (press) {
			case 80: strcpy(tile,"n"); break;                                         // DOWN
			case 72: strcpy(tile,"f"); break;                                         // UP
			case 77: strcpy(tile,"k"); break;                                         // RIGHT
			case 75: strcpy(tile,"i"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'k') {
		switch (press) {
			case 80: strcpy(tile,"o"); break;                                         // DOWN
			case 72: strcpy(tile,"g"); break;                                         // UP
			case 77: strcpy(tile,"l"); break;                                         // RIGHT
			case 75: strcpy(tile,"j"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'l') {
		switch (press) {
			case 80: strcpy(tile,"p"); break;                                         // DOWN
			case 72: strcpy(tile,"h"); break;                                         // UP
			case 77: printf("not possible!\n"); break;                            // RIGHT
			case 75: strcpy(tile,"k"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'm') {
		switch (press) {
			case 80: printf("not possible!\n"); break;                            // DOWN
			case 72: strcpy(tile,"i"); break;                                         // UP
			case 77: strcpy(tile,"n"); break;                                         // RIGHT
			case 75: printf("not possible!\n"); break;                            // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'n') {
		switch (press) {
			case 80: printf("not possible!\n"); break;                            // DOWN
			case 72: strcpy(tile,"j"); break;                                         // UP
			case 77: strcpy(tile,"o"); break;                                         // RIGHT
			case 75: strcpy(tile,"m"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else if (emptytile == 'o') {
		switch (press) {
			case 80: printf("not possible!\n"); break;                            // DOWN
			case 72: strcpy(tile,"k"); break;                                         // UP
			case 77: strcpy(tile,"p"); break;                                         // RIGHT
			case 75: strcpy(tile,"n"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	else {                       //(emptytile == 'p')
		switch (press) {
			case 80: printf("not possible!\n");printf("ppp\n"); break;                            // DOWN
			case 72: strcpy(tile,"l"); break;                                         // UP
			case 77: printf("not possible!\n");printf("ppp\n"); break;                            // RIGHT
			case 75: strcpy(tile,"o"); break;                                         // LEFT
			default: printf("wrong key!\n"); break;
		}
	}
	return tile;
}



int main(int argc, char **argv)
{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BLUE);
	SetTextBold();
	printmid(50,3,"15 Puzzle game");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
	
	layout();
//	numbers();
//	numberseasy();
	
	char a[] = "1";
	char b[] = "2";
	char c[] = "3";
	char d[] = "4";
	char e[] = "5";
	char f[] = "6";
	char g[] = "7";
	char h[] = "8";
	char i[] = "9";
	char j[] = "10";
	char k[] = "11";
	char l[] = "12";
	char m[] = "13";
	char n[] = "14";
	char o[] = "15";
	char p[] = "  ";
	numberseasy(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
	
	printmid(96,12,"Press Esc to exit");
	printmid(97,13,"the game");
	
//	char returnedtile = 'a';
//	deletenumber(returnedtile);
//	sliding('a','b');
	char *tileupdate = "s";
	char *tiledelete = "a";
	char emptytile;                                     // current empty tile
//	char tobeemptytile;                                 // tile to be emptied
	emptytile = 'p';                                      // by default, empty slot is at p, which is 16
	int press;
//	char *returnedtile[10];
	while (press != 0x1B) {                                                   // to keep playing until press escape
//		char emptytile = tobeemptytile;
		press = getch();
		if (press == 224) {
			press = getch();
			char *returnedtile = tiletomove(emptytile, press);                      // decide and return which tile should be moved to the empty slot
			sliding(emptytile,returnedtile,&tileupdate,&tiledelete,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);                                  // move the selected tile to the empty slot
			deletenumber(returnedtile);                                          // delete the number from slot which been emptied
//			tobeemptytile = returnedtile;                                     // update the empty slot
			emptytile = *returnedtile;                                     // update the empty slot on the draw
			free(returnedtile);
		}
		switch (*tiledelete) {                                            //updating the value of the tiles before going to next round
				case 'a': switch (*tileupdate) {
					case 'b': strcpy(a,b); strcpy(b," "); break;
					case 'e': strcpy(a,e); strcpy(e," "); break;
						  } break;
				case 'b': switch (*tileupdate) {
					case 'a': strcpy(b,a); strcpy(a," "); break;
					case 'c': strcpy(b,c); strcpy(c," "); break;
					case 'f': strcpy(b,f); strcpy(f," "); break;
						  } break;
				case 'c': switch (*tileupdate) {
					case 'b': strcpy(c,b); strcpy(b," "); break;
					case 'd': strcpy(c,d); strcpy(d," "); break;
					case 'g': strcpy(c,g); strcpy(g," "); break;
						  } break;
				case 'd': switch (*tileupdate) {
					case 'c': strcpy(d,c); strcpy(c," "); break;
					case 'h': strcpy(d,h); strcpy(h," "); break;
					      } break;
				case 'e': switch (*tileupdate) {
					case 'a': strcpy(e,a); strcpy(a," "); break;
					case 'f': strcpy(e,f); strcpy(f," "); break;
					case 'i': strcpy(e,i); strcpy(i," "); break;
						 } break;
				case 'f': switch (*tileupdate) {
					case 'b': strcpy(f,b); strcpy(b," "); break;
					case 'e': strcpy(f,e); strcpy(e," "); break;
					case 'g': strcpy(f,g); strcpy(g," "); break;
					case 'j': strcpy(f,j); strcpy(j," "); break;
						 } break;
				case 'g': switch (*tileupdate) {
					case 'c': strcpy(g,c); strcpy(c," "); break;
					case 'h': strcpy(g,h); strcpy(h," "); break;
					case 'f': strcpy(g,f); strcpy(f," "); break;
					case 'k': strcpy(g,k); strcpy(k," "); break;
						 } break;
				case 'h': switch (*tileupdate) {
					case 'd': strcpy(h,d); strcpy(d," "); break;
					case 'g': strcpy(h,g); strcpy(g," "); break;
					case 'l': strcpy(h,l); strcpy(l," "); break;
						 } break;
				case 'i': switch (*tileupdate) {
					case 'e': strcpy(i,e); strcpy(e," "); break;
					case 'j': strcpy(i,j); strcpy(j," "); break;
					case 'm': strcpy(i,m); strcpy(m," "); break;
						 } break;
				case 'j': switch (*tileupdate) {
					case 'i': strcpy(j,i); strcpy(i," "); break;
					case 'f': strcpy(j,f); strcpy(f," "); break;
					case 'k': strcpy(j,k); strcpy(k," "); break;
					case 'n': strcpy(j,n); strcpy(n," "); break;
						 } break;
				case 'k': switch (*tileupdate) {
					case 'j': strcpy(k,j); strcpy(j," "); break;
					case 'g': strcpy(k,g); strcpy(g," "); break;
					case 'l': strcpy(k,l); strcpy(l," "); break;
					case 'o': strcpy(k,o); strcpy(o," "); break;
						 } break;
				case 'l': switch (*tileupdate) {
					case 'h': strcpy(l,h); strcpy(h," "); break;
					case 'k': strcpy(l,k); strcpy(k," "); break;
					case 'p': strcpy(l,p); strcpy(p," "); break;
						 } break;
				case 'm': switch (*tileupdate) {
					case 'i': strcpy(m,i); strcpy(i," "); break;
					case 'n': strcpy(m,n); strcpy(n," "); break;
						 } break;
				case 'n': switch (*tileupdate) {
					case 'j': strcpy(n,j); strcpy(j," "); break;
					case 'm': strcpy(n,m); strcpy(m," "); break;
					case 'o': strcpy(n,o); strcpy(o," "); break;
						 } break;
				case 'o': switch (*tileupdate) {
					case 'k': strcpy(o,k); strcpy(k," "); break;
					case 'n': strcpy(o,n); strcpy(n," "); break;
					case 'p': strcpy(o,p); strcpy(p," "); break;
						 } break;
				case 'p': switch (*tileupdate) {
					case 'l': strcpy(p,l); strcpy(l," "); break;
					case 'o': strcpy(p,o); strcpy(o," "); break;
						 } break;
			}
	}


	printf("\n\n\n\n");
	return 0;
}