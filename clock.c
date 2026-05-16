#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(){

    while(1){
        time_t now = time(NULL);
        printf("\r%.24s" , ctime(&now));


        fflush(stdout);


        sleep(1);

    }
    return 0;
}