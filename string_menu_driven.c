// Assesment of string concept...(Menu Driven)

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

	char string[100],choice;
	int user;

			void reverse_string(){
			
			printf("\n------------Your choice reverse order of string-------------\n");
			printf("------------------------------------------------------------------\n"); 
			
			char str[100]; 					/* Declares a string of size 100 */
    		int l,i;
		
       		printf("Input the string : ");
       		scanf("%s",&str);
       		
	   		l=strlen(str);
	   		
	   		printf("The characters of the string in reverse are : %d\n\n",l-1);
	   		
       		for(i=l;i>=0;i--)
        	{
          		printf("%c  ", str[i]);
        	}
    		printf("\n");
    		
    		printf("\n Do you contiue perform more operation?(y or n)");
    		scanf(" %c",&choice);
    		
			};
			
			
			
			void concatenation(){
				
				printf("\n------------Your choice string concatenation -------------------\n");
				printf("----------------------------------------------------------------------\n");
				
				char first_word[20],second_word[20];
				
				printf("Enter First string: ");
				scanf("%s",&first_word);
				
				printf("Enter Second string: ");
				scanf("%s",&second_word);
				
				strcat(first_word,second_word);
				
				printf("Your string Concatenation is: %s \n",first_word);
				
				printf("\n Do you contiue perform more operation?(y or n)");
    			scanf(" %c",&choice);
			};
			
			void palindrome(){
					char string[100], rev_string[100];

   					printf("Enter a string: ");
   					scanf(" %s",&string);

   					strcpy(rev_string, string);
   					strrev(rev_string);

   					if(strcmp(string, rev_string) == 0)
      					printf("%s is a palindrome string.\n", string);
   					else
      					printf("%s is not a palindrome string.\n", string);
					
					printf("\n Do you contiue perform more operation?(y or n)");
    				scanf(" %c",&choice);
				};
			
			void copy_string(){
				
				printf("\n------------Your choice copy the string to another string-------------\n");
				printf("---------------------------------------------------------------------------\n");
				
				char str1[20], str2[20];
				
    				printf("Enter the string: ");
    				scanf("%s",str1);
    				
    				printf("\nString 1 = %s", str1);
    				strcpy(str2, str1);
    				
    				printf("\nString 2 = %s", str2);
    				getch();
    				
    				printf("\n");
    				
    				printf("\n Do you contiue perform more operation?(y or n)");
    				scanf(" %c",&choice);
				
			}
			
			
			void length_string(){
				
				printf("\n------------Your choice length of string checking-------------\n");
				printf("------------------------------------------------------------------\n"); 
				
				char str[100]; 					/* Declares a string of size 100 */
    			int l,i;
       			
       		printf("Input the string : ");
       		
       		scanf("%s",&str);
       		
	   		l=strlen(str);
	   		
	   		printf("The characters of string length : %d\n",l);
	   		
	   		printf("\n Do you contiue perform more operation?(y or n)");
    		scanf(" %c",&choice);
	   		
			};
			
			int frequency_character(char str[], char ch){
				int i;
				int count = 0;
				
				
				for(i=0;str[i] != '\0';i++){
					if(str[i] == ch) {
						count++;
					}
				}
				
				return count;
			};
			
			void vovel_constents(){
				
				printf("\n------------Your choice vovel or constents checking-------------\n");
				printf("----------------------------------------------------------------------\n");
				char c;
				
				printf("Enter the character: ");
				scanf(" %c",&c);
				
				if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c =='u'){
					printf("Your character is vowel\n");
				}else{
					printf("Your character is constent\n");
				};
				
				printf("\n Do you contiue perform more operation?(y or n)");
    			scanf(" %c",&choice);
				
			};
			
			void blank_digit(){
				
					printf("\n------------Your choice blank or digit number checking-------------\n");
					printf("----------------------------------------------------------------------\n");
					
					char line[100];
    				int blanks = 0, digits = 0,i;
    				printf("Enter a line of text:");
    				fgets(line,sizeof line,stdin);
    				fgets(line,sizeof line,stdin);
    
    				for (i = 0; line[i] != '\0'; ++i) {
        			if (isspace(line[i])) {
            				blanks++;
        			} else if (isdigit(line[i])) {
            			digits++;
        			}
   			 }
    
    printf("Number of blank spaces: %d\n", blanks-1);
    printf("Number of digits: %d\n", digits);
				
				printf("\n Do you contiue perform more operation?(y or n)");
    			scanf(" %c",&choice);
}

	int main(){
		char str[100],ch;
			
		do{
		printf("\n-----------------What You Perform?------------\n");
		printf("-----------------Choose Any one in(1-8 option)------------\n");
		printf("\n1.reverse a string \n2.Concatenation \n3.Palindrome \n4.Copy a string"
		"\n5.Length of a string \n6.Frequency of character in (s) string \n7.Find number of vowels and consonants"
		"\n8.Find number of blank spaces and digits");
	
			
			printf("\n\nEnter Your Choice: ");
			scanf("%d",&user);
			
			switch(user){
				case 1:
					reverse_string();
					break;
				case 2:
					concatenation();
					break;
				case 3:
					palindrome();
					break;
				case 4:
					copy_string();
					break;
				case 5:
					length_string();
					break;
				case 6:
					
					printf("\n------------Your choice is frequency of character checking-------------\n");
					printf("----------------------------------------------------------------------\n");
									
					printf("Enter String: ");
					scanf("%s",&str);
					
					printf("Enter Charcter which you want check frequency: ");
					scanf(" %c",&ch);
					
					printf("Your charcter %c frequency is %d",ch,frequency_character(str,ch));
					
					
					break;
				case 7:
					vovel_constents();
					break;
				case 8:
					blank_digit();
					break;
				default:
					printf("Invalid choice !!!");
			}
		}while(choice == 'y' || choice == 'Y');
		
		
					
}


