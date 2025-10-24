/*#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
		
	int a = 3, b = 2, c = 1, bil;
	
	clrscr();
	printf("Bil-A| Bil-B | Bil-C\n");
	printf("-------------------------");
	for(bil = 1; bil <= 10; bil++){
		a += b; b += c; c += 2;
		printf("\n%d\t|%d\t|%d", a, b, c);
		if(c == 13)
			break;
		}
        getche();
	}
	
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    system("cls");  // replaces clrscr(), clears the screen

    printf("Bil-A\t| Bil-B\t| Bil-C\n");
    printf("-------------------------");

    for (bil = 1; bil <= 10; bil++) {
        a += b;
        b += c;
        c += 2;

        printf("\n%d\t| %d\t| %d", a, b, c);

        if (c == 13)
            break;
    }

    getche();  // waits for a key press before exit
    return 0;
}
