// #include <stdio.h>
// #include <stdlib.h>
// #include <dirent.h>
// #include <unistd.h>
// #include <limits.h>
// #include <sys/stat.h>

// #include <string.h>
// #if defined(_MSC_VER)
// #include <direct.h>
// #define getcwd _getcwd
// #elif defined(__GNUC__)
// #include <unistd.h>
// #endif

// void my_FUN(const char *p);

// int main() {
//     // Узнаем содержимое папки
// char* buffer;

//     if( (buffer=getcwd(NULL, 0)) == NULL) {
//         perror("failed to get current directory\n");
//     } else {
//         printf("%s \nLength: %zu\n", buffer, strlen(buffer));
//         free(buffer);
//     }


//     char cwd[PATH_MAX];
//     char path_2[PATH_MAX];
//    if (getcwd(cwd, sizeof(cwd)) != NULL) {
//        printf("Current working dir %s\n", cwd);
//    } else {
//        perror("getcwd() error");
//        return 1;
//    }

//    int result = mkdir("NEW", 0777);

//    sprintf(path_2,"%s/%s", cwd, "NEW_2");
//    printf("\n%s\n",path_2);
//    mkdir(path_2, 0777);
//     const char *homeDir = getenv("HOME");
    
//     printf("Home directory is %s\n", homeDir);
//     DIR *d;
//   struct dirent *dir;
//   char d_name_1[256];
//   char d_name_2[256];
//   int k = 0;
//   char ch;
//   d = opendir("/Users/igelya/Desktop/work/C/Fl1_07.27/DASHA04");
//   if (d) {
//      while ((dir = readdir(d)) != NULL) {
    
//       my_FUN(dir->d_name);
//      }
//     }
//     closedir(d);
//   }

// void my_FUN(const char * p) {

//     char ch_0, ch[256], ch_1[256], ch_2[256];
//     strcpy(ch, p); 
//     int i = 0;
//     while(ch_0 == ch[i])
//     {
//         if (ch_0 == '.')
//         {
//             ch[i] = 0;
//             break;
//         }
//         i++;
//     }
//     i++;
//     if ((ch[i] != 'T')&&(ch[i] != 't')) return;
//     sprintf(ch_1, "%s%s", ch, ".TXT");
//     sprintf(ch_2, "%s%s%s", "NEW/", ch, "_.TXT");
//     printf("%s\n", ch_1);
//     printf("%s\n", ch_2);

//      FILE *file = fopen(ch_1, "r");
//      FILE *file_2 = fopen(ch_2, "w");
     
//      char a;
//      char b[256];
//      int k = 0, j = 0;
//      float x;
//      N:
//      do {
//      a = fgetc (file);
//      if (a == EOF) goto M;

//      b[k] = a;
//      k++;
//      } while(a != ',');
//      b[k] = 0;
//      k = 0;
//     //  x = atof(b);
//     //  printf("%.3e\n", x);
//      printf("%s\n", b);
//     //  fprintf(file_2,"%.3e\n", x);
//      j++;
//      if (j <= 100) 
//      goto N;

//      fclose(file);
//      fclose(file_2);
//     M: 
//         printf("STOP");
//         return;
// }