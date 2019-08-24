#include <stdio.h>

void get_popen(char *directory){

  FILE *pf;
  char command[100];
  char data[1024];

  //prep command with radare2 shell activation
  //Setup pipe for reading/writing and exectue command
  pf = popen(sprintf(command, "r2 %s ", directory),"r");
  //Error handling

  //prep command for pdf call to radare2 shell
  sprintf(command, "aa");
  //Setup pipe for reading/writing and exectue command
  pf = popen(command,"r");
  //Error handling

  //prep command for pdf call to radare2 shell
  sprintf(command, "pdf @ main");
  //Setup pipe for reading/writing and exectue command
  pf = popen(command,"r");
  //Error handling

  //Get the data from the process execution
  fgets(data, 512, pf);

  //the data is now in 'data'

  if (pclose(pf) !=0){
    fprintf(stderr, " Error: Failed to close command stream \n");
  }

    return;
}

int main (int argc, char *argv[]){

  if((get_popen(argv[0])){
      printf("get_open function failed.");


  //FILE *fopen (const char * argv[0], const char * mode);


  return 0;
}
