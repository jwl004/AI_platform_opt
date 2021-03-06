#include <stdio.h>
#include <stdint.h>
unsigned int veax;
unsigned int vebx;
unsigned int vedx;
unsigned int vecx;
 
void cpuid(unsigned int veax1)
{
    asm("cpuid"
        :"=a"(veax),
        "=b"(vebx),
        "=c"(vecx),
        "=d"(vedx)
        :"a"(veax));
}
void LM(int var,uint32_t *vx)
{
  int i;
  for(i=0;i<3;i++)
  {
      var=(var>>i);
      vx[i]=var;
  }
}
  
static void getcpuid (char *id)
{
    uint32_t ax[3],cx[3],dx[3];
    cpuid(1);
    LM(veax,ax);
    cpuid(3);
    LM(vecx,cx);
    LM(vedx,dx);
    sprintf(id,"%u%u%u%u%u%u%u%u%u",ax[0],ax[1],ax[2],cx[0],cx[1],cx[2],dx[0],dx[1],dx[2]);
}
  
int main(void)
{
        char cpuid[100];
        getcpuid(cpuid);
        printf("cpuid is %s \n",cpuid);
        
        uint32_t a;
        a=5;
        printf("a=%u sizeof a is %ld\n",a,sizeof(a));

      return 0;

}
