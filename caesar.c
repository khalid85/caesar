/* 
* Edx CS50, Pset2, Ceasar.c
*
*
* By Khalid ATIF
*
*   In this program, the user will submit an integer key as a command line argument,be prompted 
* to enter a plain text to encipher, encrypt by shifting 
* each letter by the key, and then print the cipher text message.
*
*
*              ____                           
*             / ___|__ _  ___  ___  __ _ _ __ 
*            | |   / _` |/ _ \/ __|/ _` | '__|
*            | |__| (_| |  __/\__ \ (_| | |   
*             \____\__,_|\___||___/\__,_|_|   
*
*
*
*/

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    
    // The code below will return an error message if the user doesn't insert the key while calling the program.

    if(argc !=2 )
    {
        printf("The normal usage is the following:./ceasar key\n");
        
        return 1;
    }
    
    // Asking the user to input a message to encode. The atoi function will convert argv[1] from a string to an integer. 
    int key = atoi(argv[1]);
      
    
    
    
    // The code below will ask the user to prompt a plain text to encrypt.    
    //printf("Enter the message you want to encrypt:");  <==== I've removed this prompt since check50 consider it as an error (thanks to irenecobian in reddit for the solution). 
    
    string plain_text = GetString();
    
    
    
    
    

    // The "if" statement below make sure that the user insert a plain text when prompted, and prompt again if not. 
    
    if(plain_text != NULL)
    
    
    
    
    // Encrypting the text using the given formula. A loop is needed to encrypt each strings.I personally see this can be seen as knitting to don't forget the process. 
 
    {
    //I did a mistake first by including a semi-colon instead of a comma between the declaration of "i" and "n" as ints. Thanks to Delpity 
    for (int i = 0, n = strlen(plain_text); i < n; i++)
    
    { 
    
        // With this code below the program will process alphabetical characters only. 
        if (isalpha(plain_text[i]))  
        {
             
             // Below is the formula for lower characters. The value of 'a' is substracted to the plain text in order to start to the alphabetical index of "a".
             if (islower(plain_text[i]))
                {   
                    // The letter ('a') when introduced between apostrophes will refer to "a" as an ASCII value. It can be replaced by 97.
                    
                    int encrypted_lower = (((plain_text[i] - 'a') + key)  % 26) + 'a';
                    
                    printf("%c", encrypted_lower);
                   
                }
               
             if (isupper(plain_text[i]))
               
                {   
                     
                    int encrypted_upper = (((plain_text[i]- 'A') + key)  % 26) + 'A';
                    printf("%c", encrypted_upper);
        
                }
           
         } 
         // This statement will print all the non alphabetical characters, such as punctuations and spaces. 
         else
                {
                    printf("%c", plain_text[i]); 
                }
        
     }
     
     
   }

   printf("\n");
   
}  
  
/*
*
* Thanks for having taken the time to read, and most of all, to the cs50 team on Reddit for their kind support
* (especially Delpity, smokehead17, irenecobian and Dotcorpizzas).
*   _ _ 
*  ( | )  
*   V V     
*            _              
*        ___| |_ __ _ _   _ 
*       / __| __/ _` | | | |
*       \__ \ || (_| | |_| |
*       |___/\__\__,_|\__, |
*                     |___/ 
*        _                                    
*       | |__  _   _ _ __   __ _ _ __ _   _   
*       | '_ \| | | | '_ \ / _` | '__| | | |  
*       | | | | |_| | | | | (_| | |  | |_| |_ 
*       |_| |_|\__,_|_| |_|\__, |_|   \__, ( )
*                          |___/      |___/|/ 
*            _              
*        ___| |_ __ _ _   _ 
*       / __| __/ _` | | | |
*       \__ \ || (_| | |_| |
*       |___/\__\__,_|\__, |
*                     |___/ 
*         __             _ _     _     
*        / _| ___   ___ | (_)___| |__  
*       | |_ / _ \ / _ \| | / __| '_ \ 
*       |  _| (_) | (_) | | \__ \ | | |
*       |_|  \___/ \___/|_|_|___/_| |_|
*                               
*                                        _ _ 
*                                       ( | )
*                                        V V 
*
*
*
*
*
*
*
*
*
*Ascii art credit: http://www.network-science.de/ascii/
*
*
*/      

    
        
