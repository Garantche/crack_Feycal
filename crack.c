#define _XOPEN_SOURCE

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <unistd.h> // for the crypt fonction


   int main(int argc, string argv[])
{
    if (argc == 2)
    {
       printf("Usage: crack <came>+50abdc");
       return 1;
    }
{



    const int numb = 53;


    string alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string came = argv[1];

    char flop[3];
    memcpy(flop, came, 2);
    flop[2] = '\0';

    char call[5] = "\0\0\0\0\0";






    {
        for (int ca = 0; ca < numb; ca++)
            {
               for (int der = 0; der < numb; der++)
                {
                       for (int serg = 0; serg < numb; serg++)

                    {

                           for (int tug = 1; tug < numb; tug++)
                        {
                          call[0] = alp[tug];
                          call[1] = alp[serg];
                          call[2] = alp[der];
                          call[3] = alp[ca];


                         if (strcmp(crypt(call, flop), came) == 0)

                                            {
                                                printf("%s", call);
                                                return 0;
                                             }
                     }
                 }
             }
         }
    }

    printf("Password couldn't be cracked!");


    return 1;
}
}