#include <stdio.h>
#include<stdlib.h>

int main(void)
{
      	int ch,days,H,M,num,passin;
      	char user[999];
      	char pass[999];
      	char pas[999];
      	char exp[999];
      	char del[255];
      	char domain[50];
      	char zone[250];
      system("clear");
  
      	
      	printf("\033[1;32m\n**********************************\033[0m");
      printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[1]\033[0m");
     printf("\033[1;35mAdd users\033[0m");
 	printf("\033[1;32m                    *\033[0m");

     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[2]\033[0m");
     printf("\033[1;35mDelete users\033[0m");
     printf("\033[1;32m                 *\033[0m");

    printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[3]\033[0m");
     printf("\033[1;35mCheck connected users\033[0m");
     printf("\033[1;32m        *\033[0m");

printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[4]\033[0m");
     printf("\033[1;35mUpdate domain\033[0m");
     printf("\033[1;32m                *\033[0m");


     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[5]\033[0m");
     printf("\033[1;35mChange banner\033[0m");
     printf("\033[1;32m                *\033[0m");

   printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[6]\033[0m");
     printf("\033[1;35mChange timezone\033[0m");
     printf("\033[1;32m              *\033[0m");

    printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[7]\033[0m");
     printf("\033[1;35mSet auto reboot\033[0m");
     printf("\033[1;32m              *\033[0m");

   printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[8]\033[0m");
     printf("\033[1;35mRestart all services\033[0m");
     printf("\033[1;32m         *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[9]\033[0m");
     printf("\033[1;35mSpeed test\033[0m");
     printf("\033[1;32m                   *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[10]\033[0m");
     printf("\033[1;35mRemove this script\033[0m");
     printf("\033[1;32m          *\033[0m");
     
        printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[11]\033[0m");
     printf("\033[1;35mAbout the author\033[0m");
     printf("\033[1;32m            *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[12]\033[0m");
     printf("\033[1;35mExit\033[0m");
     printf("\033[1;32m                        *\033[0m");
     
     










      for(int count = 1 ; count <= 1 ; ++count)
         
        printf("\033[1;32m\n*                                *\033[0m");
printf("\033[1;32m\n**********************************\033[0m");


	
	printf("\033[1;36m\n**********************************\033[0m");
	
  printf("\033[1;36m\n*\033[0m");
   printf("\033[1;37m\tCoded by Piroz\033[0m");
  printf("\033[1;36m           *\033[0m");
     
      printf("\033[1;36m\n*\033[0m");
      printf("\033[1;36m*********************************\033[0m");
    choice:
    printf("\033[1;34m\n[?]:\033[0m");
    
    scanf("%d",&ch);
    
      scanf("%*[^\n]");
    
    switch(ch)
    {
    	case 1:
    	
      printf("\033[1;36mEnter username: \033[0m");
      scanf("%s",user);
      printf("\033[1;36mEnter password: \033[0m");
    scanf("%s",pass);
    
      scanf("%*[^\n]");
    
    exp:
      printf("\033[1;36m\nEnter expiry in days: \033[0m");
     num= scanf("%d",&days);
     if(!num){
		
		  printf("\033[1;31m\nThat's not a number\033[0m");
		scanf("%*[^\n]");
		goto exp;
	}
	
     
    
      
    char add[999];
    snprintf(add,999,"useradd -M %s -s /bin/false",user);
    system(add);
    
 
    snprintf(pas,999," printf \"%s\\n%s\" | sudo passwd %s  > /dev/null 2>&1",pass,pass,user);
    system(pas);
    
    snprintf(exp,999,"chage -M %d %s",days,user);
   system(exp);
   printf("\033[1;36mUser %s was added successfully\033[0m",user);
   
    fflush(stdin);
    goto choice;
    	
    break;
    	
    	case 2:
    	   printf("\033[1;36mEnter user to delete: \033[0m");
      scanf("%s",user);
    	snprintf(del,999,"deluser %s",user);
    	system("del");
    	goto choice;
    
    	break;
    	
    	case 3:
    	
   
   system("printf \"\\033[1;32mActive $(ps -ef | grep -c dropbear | awk '{print $1-2}')\\033[0m\\n\"");
    	
    		goto choice;
    break;
    case 4:
    	printf("\033[1;32mEnter domain name pointing to your vps: \033[0m");
	scanf("%s",domain);
	char ssl[999];
snprintf(ssl,999,"sudo certbot certonly --standalone -d %s --non-interactive --agree-tos -m jamalisaac2000y@gmail.com",domain);		   		
	system(ssl);
char st[999];
	snprintf(st,999,"mkdir -p /etc/stunnel && cd /etc/stunnel && sudo cp /etc/letsencrypt/live/%s/*.pem /etc/stunnel && openssl rsa -in privkey.pem -out private.key && cat cert.pem fullchain.pem > certificate.crt && cat chain.pem > ca_bundle.crt && cat private.key certificate.crt ca_bundle.crt >stunnel.pem && wget -q https://www.dropbox.com/s/sbk9hkgeb4741qd/stunnel.config?dl=0 && mv stunnel.config?dl=0 stunnel.config  && cd $HOME",domain);
	system(st);	
	 printf("\033[1;32mDomain %s was successfully updated\033[0m\n",domain);   
    goto restart;
     
      	goto choice;
      break;
      
      case 5:
    system("nano /etc/banner.html");
    system("service dropbear restart");
    	goto choice;
     break;
    
    case 6:
    
    system("timedatectl list-timezones >tmz");
      printf("\033[1;36mSelect correct time zone of your country from the list below and copy:\033[0m\n");
      system("cat tmz");
      
       printf("\033[1;36mEnter your time zone,eg (Africa/Nairobi):\033[0m");
   scanf("%s",zone);
   char zn[250];
   
    snprintf(zn,250,"sudo timedatectl set-timezone %s",zone);
    system(zn);
    printf("\033[1;32mTime zone updated successfully!\033[0m\n");
    goto choice;
    break;
    case 7:
      printf("\033[1;34mEnter auto reboot time in 24 hours clock system\033[0m\n");
      
      hours:
    printf("\033[1;34m\nHours: \033[0m");
    num=scanf("%d",&H);
    if(!num){
		
			
		  printf("\033[1;31m\nThat's not a number\033[0m");
		scanf("%*[^\n]");
		goto hours;
	}
	min:
   printf("\033[1;34m\nMinutes: \033[0m");
      num=scanf("%d",&M);
      if(!num){
      		
		  printf("\033[1;31m\nThat's not a number\033[0m");
	
		scanf("%*[^\n]");
		goto min;
	}
      
      char bot[50];
      snprintf(bot,50,"sed -i -e '$a%d %d * * * root reboot'  /etc/crontab",M,H);
      system(bot);
      
       printf("\033[1;32mAuto reboot set successfully \033[0m\n");
    system("sudo service cron reload > /dev/null 2>&1");
      
      goto choice;
    
    break;
    
    case 8:
    restart:
    system("systemctl start badvpn && systemctl start stunnel4  && systemctl start nodews1 && systemctl enable badvpn && systemctl enable nodews1 && systemctl enable stunnel4 && service dropbear restart");
    printf("\033[1;36mAll services restarted successfully\033[0m\n");
    	goto choice;
    break;
    
    case 9:
    system("speedtest progress=no");
    	goto choice;
    break;
    
    case 10:
    system("systemctl stop stunnel4 nodews1 badvpn");
    system("cd  /usr/bin && rm -rf menu");
    system("cd $HOME");
    printf("\033[1;36mScript removed successfully\033[0m\n");
   
    	return 0;
    break;
    
    case 11:
       printf("\033[1;32mFirst of all let me give praise and thanks to Allah.\n\nAlhamdulillah, praise be to Allah the Almighty of God the most Gracious and the most Merciful.Despite being passionate about coding,my basic knowledge on coding and programming couldn't move a step further without the help of Allah!May Allah make everything easier for me.\n\nAlso I give thanks to my friend Victor.He is also a very good programmer though we don't use same programming language.We have been sharing ideas from wide range of topics.He has been very supportive and encouraging.He inspired me to write this ssh ws script and I'm very grateful.\n\nIf you find any bug you can contact me on telegram https://t.me/piroza1\nAny ideas to improve this script are welcomed!\nAlso you can buy me a coffee to support my work.\033[0m\n");
    
    	goto choice;
    break;
    
    case 12:
    return 0;
     break;
    
    default:
    printf("\033[1;34mInvalid selection\033[0m\n");
    goto choice;
    
    
    
    }
      return 0;
}
