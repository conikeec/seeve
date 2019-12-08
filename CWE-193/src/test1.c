/*In this example,the code does not account for the terminating null character, 
and it writes one byte beyond the end of the buffer.The first call to strncat() appends up to 20 characters 
plus a terminating null character to fullname[]. There is plenty of allocated space for this, 
and there is no weakness associated with this first call. However, the second call to strncat() potentially 
appends another 20 characters. The code does not account for the terminating null character that is automatically added by strncat(). 
This terminating null character would be written one byte beyond the end of the fullname[] buffer. 
Therefore an off-by-one error exists with the second strncat() call, as the third argument should be 19.*/
#include <stdio.h>
#include <string.h>
int main(){
    char firstname[20];
    char lastname[20];
    char fullname[40];
    firstname[0]='\0';
    strncat(fullname, firstname, 20);
    strncat(fullname, lastname, 20);
    return 0;
}
