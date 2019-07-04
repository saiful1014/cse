
#include<stdio.h>
#include<string.h>
int main()
{

    FILE *code,*console;
    code=fopen("instruction.doc","r");

    console=fopen("console.doc","w");
    while(!feof(code))
    {
        /** instruction name : jog koro <first operand> <second operand>
            functionality : adds two times the first operand and 3 times the second operand

            instruction name: biyog koro <first operand> <second operand>
            functionality :substracting 1 times <second operand> from 2 times of <first operand>

            instruction name : power koro <first operand> <second operand>
            functionality : exponentiate <first operand> up to <second operand>

            instruction name: gun koro <first operand> <second operand>
            functionality : multiplies the <first operand> and the <second operand>

            instruction name: vag koro <first operand> <second operand>
            functionality : divides the<first operand> by the <second operand>


        */
        char *instruct;
         int a,b;
         int c;
        fscanf(code,"%s%d%d",instruct,&a,&b);
         if(strcmp(instruct,"jog_koro")==0)
        {
            c=a*2+b*3;
            fprintf(console,"%d\n",c);
        }
        else if(strcmp(instruct,"biyog_koro")==0)
            {

                c=b*2-a;
                fprintf(console,"%d\n",c);

            }
         else if(strcmp(instruct,"gun_koro")==0)
           {
               c=a*b;
               fprintf(console,"%d\n",c);
           }
           else if(strcmp(instruct,"power_koro")==0)
           {

               int i;
               c=1;
               int j;
               for(j=1;j<=b;j++)
                c*=a;
               fprintf(console,"%d\n",c);
           }
           else if(strcmp(instruct,"vag_koro")==0)
           {
               c=a/b;
               fprintf(console,"%d\n",c);
           }


    }
}
