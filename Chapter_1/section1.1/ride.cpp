/*
ID: septicmk
LANG: C++
TASK: ride
*/
#include <cstdio>
#include <cstring>

char buf[7];
int a = 1 , b = 1;

int main(){
    freopen("ride.in", "r" , stdin);
    freopen("ride.out", "w", stdout);
    scanf("%s", buf); 
    for (char* i = buf; *i != '\0'; a *= (*i)-'A'+1, i++);
    scanf("%s", buf);
    for (char* i = buf; *i != '\0'; b *= (*i)-'A'+1, i++);
    if ( a%47 == b%47)  puts("GO");
    else puts("STAY");
    return 0;
}
