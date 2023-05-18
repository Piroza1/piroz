#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

	float v,ip,ipx;

	char domain[50];
	float sp=20.040001;
int ex();
int main(int argc, char *argv[])
{
	system("clear");

	system("lsb_release -r >vs");
	system("awk '{ $1=\"\"; print substr($0,2) }' vs >v");
	FILE *pF=fopen("v","r");
	 			
		   		if(pF!=NULL){
		 	fscanf(pF,"%f",&v);
		 	
		printf("\033[1;33m\n[Cheking if your vps meets  minimum requirements]\033[0m\n");
		sleep(1);
		 	
		 if(v==sp)
		 {
		 	
	 			printf("\033[1;33mDistribution:\033[0m ");
	 			
	 			printf("\033[1;34mubuntu 20.04\033[0m ");
	 			printf("\033[1;32mSupported[✓]\033[0m\n");
		 }else{
		 	printf("\033[1;31mUnsuported distribution!\033[0m\n");
		 	printf("\033[1;32mThis script runs in ubuntu 20.04 only\033[0m\n");
			return 0;
		 	
		 	
		 }
		 
	
		   		}
	sleep(1);	   		
system("iptables -P INPUT ACCEPT && iptables -P OUTPUT ACCEPT && iptables -P FORWARD ACCEPT && iptables -F && sudo cp /etc/iptables/rules.v6 /etc/iptables/rules.v6.bak && sudo truncate -s 0 /etc/iptables/rules.v6");
system("apt install ufw -y");
    fflush(stdin);
system("ufw allow 22,443,80/tcp && ufw --force enable");
system("systemctl stop stunnel4 nodews1 badvpn apache2 nginx ");
    fflush(stdin);
system("sudo apt update -y && sudo apt upgrade -y");
system("apt-get install -y lsb-release cron iptables ufw nano stunnel certbot dropbear squid cmake make gcc build-essential nodejs unzip zip tmux");

    fflush(stdin);
    
system("clear");
domain:
	printf("\033[1;32mEnter domain name pointing to your vps: \033[0m");
	scanf("%s",domain);
	system("curl -4 icanhazip.com >ips");
	system(" sed -i \"s/[^0-9]//g\" ips");
		FILE *pf=fopen("ips","r");
		fscanf(pf,"%f",&ip);
		
		 char buf[250];        

	snprintf(buf,250,"dig +short %s >ipr",domain);
	system(buf);
	
	system(" sed -i \"s/[^0-9]//g\" ipr");
		FILE *dm=fopen("ipr","r");
		fscanf(dm,"%f",&ipx);
	
		printf("\033[1;33m\n[Cheking if your domain points to this vps]\033[0m\n");
		sleep(1);

  if(ip==ipx)
  
{
    			printf("\033[1;32msuccess[✓]\033[0m\n");
}
	else{
		   					printf("\033[1;31mYour domain doesn't resolve to this vps ip address\033[0m\n");
		   		goto domain;
		   		}	   
		   		
char ssl[999];
snprintf(ssl,999,"sudo certbot certonly --standalone -d %s --non-interactive --agree-tos -m jamalisaac2000y@gmail.com",domain);		   		
	system(ssl);

	char st[999];
	snprintf(st,999,"mkdir -p /etc/stunnel && cd /etc/stunnel && sudo cp /etc/letsencrypt/live/%s/*.pem /etc/stunnel && openssl rsa -in privkey.pem -out private.key && cat cert.pem fullchain.pem > certificate.crt && cat chain.pem > ca_bundle.crt && cat private.key certificate.crt ca_bundle.crt >stunnel.pem && wget -q https://www.dropbox.com/s/sbk9hkgeb4741qd/stunnel.config?dl=0 && mv stunnel.config?dl=0 stunnel.config  && cd $HOME",domain);
	system(st);	   
	
system("wget https://raw.githubusercontent.com/Piroza1/sshws/main/installz.sh && chmod +x installz.sh && ./installz.sh");

system("sudo apt-get remove speedtest-cli && sudo apt-get install curl");
system("curl -s https://packagecloud.io/install/repositories/ookla/speedtest-cli/script.deb.sh | sudo bash");
system("sudo apt-get install speedtest");
system("systemctl start badvpn &&systemctl start stunnel4 &&systemctl start nodews1 && systemctl enable badvpn && systemctl enable nodews1 && systemctl enable stunnel4");
system("clear");
	printf("\033[1;33m\nThe script was installed successfully!\033[0m\n");
	
	
	printf("\033[1;32m[Type menu and press enter for setting and options]\033[0m\n");
		printf("\033[1;33m\(Script by https://t.me/piroza1)\033[0m\n");
	
system("rm -rf installz.sh");

	


				   					   						   					   		
		   		
		   		
return 0;		   		
}



