#include <stdlib.h>
#include <time.h>


int gcd(int a, int b);
int count_words(char* text);
void random_spaces(char* text);


int main(int argc, char** argv)
{
	srand(time(0)); // Определение первого элемента псевдослучайной последовательности
	int res;
	if(argc==1) {
		return 0;
	}
	else if(atoi(argv[1])==1){
		int a = 15, b = 10000;
		int rnd1 = rand() % (b - a + 1) + a;
		int rnd2 = rand() % (b - a + 1) + a;
		res = gcd(a,b); // Значения по умолчанию
		res = gcd(rnd1,rnd2); // Случайные значения
		if(argc==4){
			a = atoi(argv[2]);
			b = atoi(argv[3]);
			res = gcd(a,b); // Консольные аргументы.			
		}
	}
	else if(atoi(argv[1])==2){
		char a[] = "   ABCDEF    GHIJKLMNOP    QRSTUV WXYZ    ";
		char b[] = 	"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
		random_spaces(b); // Случайно ставим пробелы в тексте.
		res = count_words(a); // Строка по умолчанию;
		res = count_words(b); // Случайная строка.
		if(argc==3)
			res = count_words(argv[2]);
	}
    return 0;
}

int gcd(int a, int b){
    while(b)
        b ^= a ^= b ^= a %= b;
    return a<0? -a : a;
}

void random_spaces(char* text){
	for(int i=0; text[i] != '\0'; i++){
		if(rand()%2)
			text[i] = ' ';
	}
}








int count_words(char* text){
  int count = 0;
    int is_word_begin = 0;
    for(int i=0; text[i] != '\0'; i++){
        if(text[i] == ' ')
            is_word_begin = 0;
        else if(!is_word_begin){
            count++;
            is_word_begin = 1;
        }
    }
  return count;
}
