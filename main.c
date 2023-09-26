
// #include <wchar.h>
// #include <stdio.h>
// #include <curses.h>
// #include <locale.h>
// 
// int main()
// {
// 	char ch; ffffffffff
// 	char txt[256]; gggggggg
// 	//wchar_t	txt[256];
// 	//setlocale(LC_CTYPE, "Russian");
// 	setlocale(LC_ALL, "Russian");
// 	printf("HELO WORD\n");
// 	printf("Ирина Гевель 2   %d %f\n", 26, 17.34);	// Для русских букв wprintf вместо printf и L"..." вместо "..."
// 	printf("START\n");
// 	printf("STOP\n");
// 	ch = getchar();
// 	if (ch == 0x20)
// 	{
// 		wprintf(L"ВВЕДИТЕ строку:\n");
// 		setlocale(LC_CTYPE, "C");
// 		scanf("%s",txt);
// 		//wscanf(L"%s",txt);
// 		printf("STOP_2\n");
// 		printf("%s",txt);	
// 		//wprintf(L"%hs",txt);
// 		getchar();
// 	}
// 	return 0;
// }


//  #include <stdio.h>
//  int main()
//  {
// 	printf("Hello, World!\n");
// 	return 0;
//  }



// 	#include <stdio.h>

// 	/*int main( )/*простая программа*/
// {
// 	int courses;
// 	courses=30;
// 	printf("Сколько учебных курсов на сайте");
// 	printf(" www.intuit.ru?\n");
// 	printf("Более %d. Но будет еще больше!\n", courses);
// 	return 0;
// } 

	

// #include <stdio.h>
// main( )
// {
// 	int l, m, n;
// 	n=m=l=165;
// 	printf("l m n\n");
// 	printf("Счет первой партии %4d %8d %8d\n", l, m, n);
// }



/* использование операции присваивания */
//#include <stdio.h>
// main( )
// {
// /* переменные number, ouzo, cost инициализируются конкретными значениями*/
// 	int number=5;
// 	float ouzo=13.5;
// 	int cost=31000;
// 	printf("number ouzo cost\n");
// 	printf("number=%d ouzo=%f cost=%d\n",
// 		number, ouzo, cost);
// }



/* Задача № 1 (пример на использование операции *) 
Определить площадь боковой поверхности конуса радиуса 
r и имеющего длину образующей l.*/
// #include <stdio.h>
// #include <math.h>
// /* подключение библиотеки математических функций */
// const float pi=3.14159;
// float r=10; float l=50; float s;
// main()
// {
// 	s=pi*r*l;
// 	printf("\n Площадь боковой поверхности s=%f",s);
// }


// /* Задача № 2 (пример на использование операций +,
//  * и /. Тело движется прямолинейно с ускорением. 
//  Даны а(м/сек2) - ускорение, V(M/C) - начальная 
//  скорость. Требуется определить, какой путь пройдет 
//  тело за t секунд.*/
// #include <stdio.h>
// float a, v, t, s ;
// main()
// {
// 	a=20.2;
// 	v=50.3;
// 	t=65;
// 	s=(v*t)+(a*t*t/2);
// 	printf("\n Путь s=%f M",s);
// }



// /* Задача № 3 (пример на использование операций =, 
// / и вычисления степени). Вычислите среднее арифметическое 
// и среднее геометрическое трех чисел а,b,с.*/ 
// #include <stdio.h> 
// #include <math.h> 
// float a=b=c=2005.1; float x,y;
// main ()
// {
// 	x=(a+b+c)/3;
// 	y=pow( (a*b*c),(1/3)); 
// 	/*функция pow берется из библиотеки math.h*/
// 	printf("\n среднее арифметическое x=%f",x);
// 	printf("\n среднее геометрическое y=%f",y);
// }


// #include <stdio.h>
// int main()
// {
// 	int age;
// 	float assets;
// 	char fio[50];
// 	printf("Введите ваш возраст, оклад, фамилию. \n");
// 	scanf("%d %f", &age, &assets);
// 	scanf("%s", fio); /* & отсутствует при указании 
// 						массива символов */
// 	printf("%d $%.0f %s\n",age, assets, fio);
// }



// /* От города А до города В расстояние равно 20 км. 
// Велосипедист выехал из А и в первый день проехал 
// 10 км. В последующие дни он проезжал со скоростью, 
// в 1,5 раз большей, чем в предыдущий день. За сколько 
// дней велосипедист доберется до города В.*/
// #include<stdio.h>
// #include<curses.h>
// float km=10;
// int main()
// {
// 	clear() ; /* чистка экрана, функция берется 
// 			 из головного файла conio.h*/
// 	int d;
// 	d=1; 	   /* первый день, за который велосипедист
// 			 проехал 10 км.*/
// 	while(km<20) /* пока выполнено условие цикла,
// 			    подсчитываются километры и дни*/
// 	{
// 		km+=(km*0.5);
// 		d++;
// 	}
// 	printf("велосипедист был в пути %d дней",d);
// 	getch();
// }

// //УКАЗАТЕЛИ
// #include <stdio.h>

// int main() {
//     int x=0;
// 	int *px = &x;
//     printf("%p\n", px);
    
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <limits.h>
#include <sys/stat.h>
#include <string.h>
#if defined(_MSC_VER)
#elif defined(__GNUC__)
#include <unistd.h>
#endif
char tx_1[PATH_MAX];
char tx_2[PATH_MAX];
char cwd[PATH_MAX];
void my_FUN(const char *p);
int main(int argc, char *argv[]) {
    const char *programPath = "./vb_3";
    const char *arguments = "";
    char command[1024];
    sprintf(command, "%s %s", programPath, arguments);
    int result = system(command);
    if (result == -1){
        printf("Error\n");}
    strcpy(tx_1, argv[0]);
    printf("%s\n", tx_1);
    int i_1, i;
    i_1 = strlen(tx_1);
    for (i = i_1; i > 0; i--){
        if (tx_1[i] == '/') {
            tx_1[i+1] = 0;
        break;}};
    printf("%s\n", tx_1);
    char* buffer;
    if( (buffer=getcwd(NULL, 0)) == NULL) {
        perror("failed to get current directory\n");} 
        else {
        printf("%s \nLength: %zu\n", buffer, strlen(buffer));
        free(buffer);}
    char path_2[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;}
   strcpy(tx_2, tx_1);
   strcat(tx_2, "/NEW");
   result = mkdir(tx_2, 0777);
   printf("RESULT = %d\n", result);
   sprintf(path_2,"%s/%s", cwd, "NEW_2");
   printf("\n%s\n",path_2);
   mkdir(path_2, 0777);
   const char * homeDir;
     homeDir = getenv("HOME");
    printf("Home directory is %s\n", homeDir);
    DIR *d;
  struct dirent *dir;
  char d_name_1[256];
  char d_name_2[256];
  int k = 0;
  char ch;
  d = opendir(tx_1);
  if (d) {
     while ((dir = readdir(d)) != NULL) {
    printf("*");
      my_FUN(dir->d_name);}}
    else{
        printf("ERR_1 %s", tx_1);}
    closedir(d);}
void my_FUN(const char * p) {
    printf("%s\n", p);
    char ch_0, ch[256], ch_1[256], ch_2[256];
    strcpy(ch, p);
    int i = 0;
    while(1){
        if (ch[i] == '.'){
            ch[i] = 0;
            break;}
        if (ch[i] == 0 ){
            break;}
        i++;};
    i++;
    if ((ch[i] != 'T')&&(ch[i] != 't')) return;
    sprintf(ch_1, "%s%s%s", tx_1, ch, ".TXT");
    sprintf(ch_2, "%s%s%s%s", tx_1, "NEW/", ch, "_.TXT");
     FILE *file = fopen(ch_1, "r");
     FILE *file_2 = fopen(ch_2, "w");
     if (file_2 == NULL) {
        printf("error = %p\n", (void *)file_2);}
     char a;
     char b[256];
     int k = 0, j = 0;
     float x;
     N:
     do {
     a = fgetc (file);
     if (a == EOF) goto M;
     b[k] = a;
     k++;
     } while(a != ',');
     b[k-1] = 0;
     k = 0;
    fprintf(file_2,"%s\n", b);
     j++;
     if (1) 
     goto N;
    M: 
     fclose(file);
     fclose(file_2);
        return;}


#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <sys/stat.h>
#include <dirent.h>
#define ARRAY_SIZE 4096
#define getch() wgetch(stdscr)
float arr[750];
char array[4096];
char cwd[PATH_MAX];
char tx_1[PATH_MAX];
char tx_2[PATH_MAX];
int my_get_float(FILE * file, float * f_A);
int my_get_arr(FILE * file, float  * p_arr);
int findMinIndex(float * array, int size);
int do_one_file(FILE * file);
int main(int argc, char const *argv[]){
  FILE *file = fopen("/Users/igelya/Desktop/work/C/Fl1_07.27/DASHA04/C1_1.TXT", "r");
   do_one_file(file);
   return 0;}
int my_get_float(FILE * file, float * f_A){
     char a;
     char b[256];
     int k = 0, j = 0;
     float x;
     while(1) {
     a = fgetc (file);
     if (a == EOF) return -1;
     if (a == ',') {
         a = 0;
         b[k] = a;
         break;}
      b[k] = a;
      k++;} 
     *f_A = atof(b);
     return 0;}
int my_get_arr(FILE * file, float * p_arr){
   int i, i_rez;
   for (i = 0; i < ARRAY_SIZE / 2; i++){
      i_rez = my_get_float(file, &(p_arr[i]));
      if (i_rez == -1) return -1;};
   return 0;}
int findMinIndex(float * array, int size) {
   int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;}}
    return minIndex;}
int do_one_file(FILE * file) {
    if (file == NULL) printf("file = 0\n");
   printf("START_A\n");
   float array[ARRAY_SIZE];
   float array_2[1800];
   int i, j, i_rez, size, minIndex;
   float * p_arr;
   p_arr = array;
   i_rez = my_get_arr(file, p_arr);
   size = 750;
   minIndex = findMinIndex(array, size);
   minIndex = findMinIndex(array + minIndex + 400, size);
   for (i = 0; i < 1800; i++) {
       array_2[i] = 0;}
   j = 0;
   while(1){
      i_rez = my_get_arr(file, p_arr + ARRAY_SIZE / 2);
      if (i_rez == -1) {
         printf("End of file\n");
         break;}
      size = 300;
      do {
         for (i = 0; i < 1800; i++) {
            array_2[i] = array_2[i] + *(array + minIndex - 20 + i);}
         minIndex = minIndex + 400 + findMinIndex(array + minIndex + 400, size);
         j++;
      } while (minIndex <= (ARRAY_SIZE / 2));
      for(i = 0; i < (ARRAY_SIZE / 2); i++){
         array[i] = array[i + ARRAY_SIZE / 2];}
      minIndex -= ARRAY_SIZE /2 ;}
   for (i = 0; i < 1800; i++) {
         array_2[i] = array_2[i] / j; }
      fclose(file);
     FILE *file_2 = fopen("/Users/igelya/Desktop/work/C/Fl1_07.27/DASHA04/C1_1c.TXT", "w");
     if (file_2 == NULL) printf("file_2 = 0\n");
     for (i = 0; i < 1800; i++) {
         fprintf(file_2,"%e\n", array_2[i]);}
    return 0;}
