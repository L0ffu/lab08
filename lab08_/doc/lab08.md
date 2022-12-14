**Лабораторна робота №7. *Функції***

**Завдання:**

Переробити програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб використовувалися функції для обчислення результату.

**Розробник:** *Голобородько Михайло Олегович КН-922б*

**-Функціональне призначення. Призначення програми. Обмеження на застосування.**

-Визначає кількість слів у вхідному тексті, незважаючи на кількість або відсутність пропусків між словами.

*Обмеження – спец символи.*

**Опис логічної структури:**

*Графічна структура:*

![](https://github.com/L0ffu/lab08/raw/main/lab08_/doc/asssets/prog.png)

1. **Написання функцій(Які будуть у кінці коду)**

```

int gcd(int a, int b){

while(b)

b ^= a ^= b ^= a %= b;

return a<0? -a : a;

}

```

![](https://github.com/L0ffu/lab08/raw/main/lab08_/doc/asssets/gcd.png)

За допомоги цієї функції ми змінюємо місцями а та b.


```

int count\_words(char\* text){

int count = 0;

int is\_word\_begin = 0;

for(int i=0; text[i] != '\0'; i++){

if(text[i] == ' ')

is\_word\_begin = 0;

else if(!is\_word\_begin){

count++;

is\_word\_begin = 1;

}

}

return count;

}

```

![](https://github.com/L0ffu/lab08/raw/main/lab08_/doc/asssets/count_words.png)

За допомогою цієї функції ми рахуємо кількість слів у тексту

1. **Написання функцій(Які будуть у кінці коду)**

Виклик функцій перед основою частиною.

```
int gcd(int a, int b);
- int count\_words(char\* text);
- void random\_spaces(char\* text);
```

Робимо функції через виклик для спрощення самого коду.

1. **Main**
- У основній частині за допомогою *srand(time(0));* ми дізнаємося перший елемент псевдо послідовності. Далі починається if.
- Головне «якщо» закінчує програму, коли в нас одне слово.
- Друге «якщо». Якщо порядковий argv[1]==1.

Завдяки формулі виведеної завдяки послідовностям, значення за умовченням, рандомним значенням та консольним аргументам  мі знаходимо кількість слів.

- Третє «якщо». Якщо порядковий argv[1] ==2.

Рандомний текст у якому нема пропусків. Викликаємо фунцкію *random\_spaces* яка зробе рандомні пропуски посеред тексту та далі вже йде виклик другої функції яка порахує ці самі слова.

**Структура програми:**

```
*├── lab07*

*├── Makefile*

*├── README.md*

*└── src*

    *├── lib.c*

    *├── lib.h*

    *└── main.c*
```

**Варіанти використання:**

Так як програма була зроблена без подачі даних, то наразі можна щось змінювати тільки маючи код програми.

**Висновки:**

Я вважаю цю програму дійсно потрібною, так як і у самому Word-і є підрахунок слів, але я вважаю, що саме моя програма не є досконалою, а також завдання з постановкою рандомних пропусків не є чимось важливим у нашому всесвіті. Щодо набутих знань, то це закріплення роботи з попередніх лабораторних, а також щось нове: дізнався роботу функцій, як працює рандом, та як його застосовувати.
