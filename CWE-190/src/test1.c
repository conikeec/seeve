#include <unistd.h>
#include <stdlib.h> 
int main()
{
    char *buf;
    int len;
    /* for some file descriptor fd*/
    read(0, &len, sizeof(len));
    /* We forgot to check for input < 0 */

    if (len > 8000) {return 0; }
    buf = malloc(len);
    read(0, buf, len); /* len casted to unsigned and overflows */
    return 0;
}
