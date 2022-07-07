#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int c,p,i,age,flight,j;
char flightst[30]="Visit" ,fname[15],lname[15],gender[6],pno[10],id[10];
int s[10];
printf("\n******************************Welcome to AIRLINES******************************\n");
printf("\nEnter Your First Name:");
scanf("%s",&fname);
printf("\nEnter Your Last Name:");
scanf("%s",&lname);
printf("\nEnter Your Gender:");
scanf("%s",&gender);
printf("\nEnter Your Age:");
scanf("%d",&age);
printf("\nEnter Your Phone Number:");
scanf("%s",&pno);
printf("\nEnter Aadhar No:");
scanf("%s",&id);
printf("\n Source------->Destination       FlightName   \n");
printf("1. Hyd--->Goa                      Vistara      \n");
printf("2. Chennai---->Bhopal              IndiGo       \n");
printf("3. Hyd--->Goa                      SpiceJet     \n");
printf("4. Delhi--->Kolkata                Vistara      \n");
printf("5. Hyd--->Delhi                    Vistara      \n");
printf("6. Mumbai--->Chennai               Vistara      \n");
printf("7. Hyd--->Bengaluru                Vistara      \n");
printf("8. India--->Kuwait                 Vistara      \n");
printf("9. Tirupathi--->Hyd                SpiceJet     \n");
printf("10.Goa--->Mumbai                   SpiceJet     \n");
printf("11.Banglore--->Delhi               SpiceJet     \n");
printf("12.Pune--->Banglore                SpiceJet     \n");
printf("13.Mumbai--->Dubai                 SpiceJet     \n");
printf("14.Kolkata--->Bangkok              SpiceJet     \n");
printf("15.Chennai--->Delhi                SpiceJet     \n");
printf("16.Chennai--->Singapore            IndiGo       \n");
printf("17.Chennai--->Hyd                  IndiGo       \n");
printf("18.Delhi--->Pune                   IndiGo       \n");
printf("19.Goa--->Delhi                    IndiGo       \n");
printf("20.Kathmandu--->Delhi              IndiGo       \n");
printf("21.Banglore--->Colombo             IndiGo       \n");

printf("   Choose: ");
scanf("%d",&flight);
switch(flight){
    case 1:
        strcat(flightst," To Goa");
        break;
    case 2:
        strcat(flightst," To Bhopal ");
        break;
    case 3:
        strcat(flightst," To Goa");
        break;
    case 4:
        strcat(flightst," To Kolkata");
        break;
    case 5:
        strcat(flightst," To Delhi");
        break;
    case 6:
        strcat(flightst," To Chennai");
        break;
    case 7:
        strcat(flightst," To Bengaluru");
        break;
    case 8:
        strcat(flightst," To Kuwait");
        break;
    case 9:
        strcat(flightst," To Hyd");
        break;
    case 10:
        strcat(flightst," To Mumbai");
        break;
    case 11:
        strcat(flightst," To Delhi");
        break;
    case 12:
        strcat(flightst," To Banglore");
        break;
    case 13:
        strcat(flightst," To Dubai");
        break;
    case 14:
        strcat(flightst," To Bangkok");
        break;

    case 15:
        strcat(flightst," To Delhi");
        break;
    case 16:
        strcat(flightst," To Singapore");
        break;
    case 17:
        strcat(flightst," To Hyd");
        break;
    case 18:
        strcat(flightst," To Pune");
        break;
    case 19:
        strcat(flightst," To Delhi");
        break;
    case 20:
        strcat(flightst," To Delhi");
        break;
    case 21:
        strcat(flightst," To Colombo");
        break;
    default:
        return 0;
}
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("   Class:\n   (1) Business Class\n   (2)Economic class\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("   Choose: ");
scanf("%d",&c);
switch(c)
{
case 1:
printf("***\n");
printf("   Business class:\n");
printf("   Seats available:\n     |1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|\n\n");
printf("***\n");
                printf("   Pick a seat: ");
                scanf("%d",&p);
                if(p <= 20)
                {
                     printf("*****************************************\n");
                     printf("   %s \n",flightst);
                     
                    printf("   Class: Business class\n");
                    printf("   Seat no : %d\n\n",p);
                    printf("   Aadhar No:%s\n",id);
                    printf("   Name:%s.%s\n",fname,lname);
                    printf("   Gender:%s\n",gender);
                    printf("   Age:%d\n",age);
                    printf("   Phone Number:%s\n",pno);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
case 2:
printf("**\n");
printf("   Economical class:\n");
printf("   Seats available:\n    |21|22|23|24|25|26|27|28|29|30|31|32|33|34|35|36|37|38|39|40|\n\n");
printf("***\n");

                printf("   Pick a seat: ");
                scanf("%d",&p);
                if(p >= 21 && p<=40)
                {
                    printf("*****************************************\n");
                    printf("   Trip from %s\n",flightst);
                    printf("   Class: Economical class\n");
                    printf("   Seat no : %d\n\n",p);
                    printf("   Aadhar No:%s\n",id);
                    printf("   Name:%s.%s\n",fname,lname);
                    printf("   Gender:%s\n",gender);
                    printf("   Age:%d\n",age);
                    printf("   Phone Number:%s\n",pno);
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        default:
                break;
        }
    printf("   Thank you......Happy Journey... %s.%s\n",fname,lname);
return 0;
}


