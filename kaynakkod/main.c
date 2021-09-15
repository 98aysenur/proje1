#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <dirent.h>
#include <ctype.h>
#define max_data 100
struct noktalar{
float x;
float y;
float z;
int r;
int g;
int b;
};
struct noktalar_{
float x;
float y;
float z;};
int kelimebul(char *chpt){
int i=0;
int kelime=0;
while(chpt[i]!='\0'){
if(chpt[i]==' ')
kelime++;
i++;
}return kelime+1;}
int main()
{
DIR *dosyailk;
    struct dirent *dosyaveri;
    int files = 0;
    int files2=0;
    int t=0;
char *nktdizi[10];
dosyailk = opendir(".");
    if(dosyailk == NULL)
    {perror("rehber okunamıyor");
        return(1);
    }
    dosyaveri=readdir(dosyailk);
    while( (dosyaveri=readdir(dosyailk)) )
        {
int uzunluk=strlen(dosyaveri->d_name);
files++;
nktdizi[t]=malloc(uzunluk+1);
if(uzunluk > 4 && strcmp(dosyaveri->d_name + uzunluk - 4, ".nkt") == 0){

strcpy(nktdizi[t],dosyaveri->d_name);


t++;
}}
closedir(dosyailk);
int bi,binaryv=0;
int u=0;
int v=0;
struct noktalar_ n1[1000];
FILE *binarykont;
char *bn,*bn2,*bn3,*bn4,*bn5;
char bnr[100],bnr2[100],bnr3[100],bnr4[100],bnr5[100];
atlanacak3:
    printf("");

binarykont=fopen(nktdizi[u],"r");
bn2=fgets(bnr,100,binarykont);

bn3=fgets(bnr2,100,binarykont);

bn4=fgets(bnr3,100,binarykont);

bn5=fgets(bnr4,100,binarykont);

bn=fgets(bnr5,100,binarykont);

int binarysayac=0;
if(strstr(bn,"binary")!=NULL){
    binarysayac++;}
if(binarysayac>0){

    printf("");
}
else{

        v++;
    goto atlanacak;
}
int secimbinary;
 printf("\n%s dosyasi icin:\n",nktdizi[u]);
while(1){
        secimyeribinary:
    printf("\nsecimi giriniz:\n");
    scanf("%d",&secimbinary);
if(secimbinary>5 || secimbinary<1){
            printf("\nGecersiz secim.\n");
            goto secimyeribinary;
        }
    switch(secimbinary){




case 1:

    printf("");
FILE *ioutput;
int hatasayaci=0;
    char binarydosyaismi[64];
    sprintf(binarydosyaismi,"%soutput.nkt",nktdizi[u]);
    ioutput=fopen(binarydosyaismi,"w");
      fprintf(ioutput,"\nSECIM1:\n");

    for(bi=0;bi<8;bi++){
            fread(&n1[bi].x,max_data,1,binarykont);
            fread(&n1[bi].y,max_data,1,binarykont);
            fread(&n1[bi].z,max_data,1,binarykont);
            }


fclose(binarykont);

    if(strchr(bn2,'#')==NULL){

              fprintf(ioutput,"1.satirda hata vardir");
                hatasayaci++;}
            if(strstr(bn3,"VERSION")==NULL){
              fprintf(ioutput,"2.satirda hata vardir");
              hatasayaci++;}
            if(strstr(bn5,"NOKTALAR")==NULL){
              fprintf(ioutput,"4.satirda hata vardir");
              hatasayaci++;
           }
            if(strstr(bn,"DATA")==NULL){
              fprintf(ioutput,"5.satirda hata vardir");
              hatasayaci++;
            }
            int rgbsayac4=kelimebul(bn4);

            if(rgbsayac4!=7 && rgbsayac4!=4){
                fprintf(ioutput,"rgb de hata");
                hatasayaci++;
            }
            if(strchr(bn4,'x')==NULL){

            fprintf(ioutput,"x y z yoktur");
            hatasayaci++;
            }


            if(hatasayaci==0){
                fprintf(ioutput,"\nDosya uyumludur.\n");

            }

           else if(hatasayaci>0){
                printf("\nDosya hatalidir.\n");
                 u++;
               binaryv++;
               goto atlanacak3;

            }
fclose(ioutput);

            break;

case 2:
    printf("");
    ioutput=fopen(binarydosyaismi,"a");
    fprintf(ioutput,"\nSECIM2:\n");
    float idizi[3];
    int ni,ji,yer1i,yer2i,yer3i,yer4i,ei=0;
float enki=5,enbi=0.00001;


float iuzaklikdizi;
for(ni=0;ni<8;ni++){
    for(ji=1;ji<8-ni;ji++){

    iuzaklikdizi=sqrt(pow(((n1[ni].x)-(n1[ji+ni].x)),2)+pow(((n1[ni].y)-(n1[ji+ni].y)),2)+pow(((n1[ni].z)-(n1[ji+ni].z)),2));

   if(iuzaklikdizi<enki){
    enki=iuzaklikdizi;
    yer1i=ni;
    yer2i=ji+ni;

   }else if(iuzaklikdizi>enbi){
   enbi=iuzaklikdizi;
   yer3i=ni;
   yer4i=ji+ni;
   }
   iuzaklikdizi=0;
   }
}

fprintf(ioutput,"en buyuk uzaklik=%f en buyugun yerleri %d %d \nen kucuk uzaklık=%f  en kucugun yerleri %d %d",enbi,yer3i,yer4i,enki,yer1i,yer2i);
idizi[0]=enbi;
idizi[1]=yer3i;
idizi[2]=yer4i;
fclose(ioutput);
break;
case 3:
    printf("");

    ioutput=fopen(binarydosyaismi,"a");
    fprintf(ioutput,"\nSECIM3:\n");
     float kenar=(pow((idizi[0]),1/3))/3;
    float kose1,kose2,kose3,kose4,kose5,kose6;
int a=0,b=0,c=0;
 if(n1[(int)idizi[1]].x > n1[(int)idizi[2]].x){
    kose1=n1[(int)idizi[1]].x-kenar;
    kose4=n1[(int)idizi[2]].x+kenar;
    a=1;
 }
 else  if(n1[(int)idizi[1]].x < n1[(int)idizi[2]].x){
    kose1=n1[(int)idizi[2]].x-kenar;
    kose4=n1[(int)idizi[1]].x+kenar;
 }
 if(n1[(int)idizi[1]].y > n1[(int)idizi[2]].y){
    kose2=n1[(int)idizi[1]].y-kenar;
    kose5=n1[(int)idizi[2]].y+kenar;
    b=1;
}
else  if(n1[(int)idizi[1]].y < n1[(int)idizi[2]].y){
    kose2=n1[(int)idizi[2]].y-kenar;
    kose5=n1[(int)idizi[1]].y+kenar;
}if(n1[(int)idizi[1]].z > n1[(int)idizi[2]].z){
    kose3=n1[(int)idizi[1]].z-kenar;
    kose6=n1[(int)idizi[2]].z+kenar;
    c=1;}
 else  if(n1[(int)idizi[1]].z < n1[(int)idizi[2]].z){
    kose3=n1[(int)idizi[2]].z-kenar;
    kose6=n1[(int)idizi[1]].z+kenar;
}if((a+b+c)==3){
    fprintf(ioutput,"kose1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose3=%f %f %f\n",kose1,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose4=%f %f %f\n",kose4,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose5=%f %f %f\n",kose2,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose6=%f %f %f\n",kose5,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose7=%f %f %f\n",kose3,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose8%f %f %f\n",kose6,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
 }if((a+b+c)==0){
      fprintf(ioutput,"kose1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
     fprintf(ioutput,"kose3=%f %f %f\n",kose1,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose4=%f %f %f\n",kose4,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose5=%f %f %f\n",kose2,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose6=%f %f %f\n",kose5,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose7=%f %f %f\n",kose3,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose8=%f %f %f\n",kose6,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);}
 if((a+b+c)==2){

    if(a==0){
    fprintf(ioutput,"kose1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose3=%f %f %f\n",kose1,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose4=%f %f %f\n",kose4,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose5=%f %f %f\n",kose2,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose6=%f %f %f\n",kose5,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose7=%f %f %f\n",kose3,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose8=%f %f %f\n",kose6,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    }if(b==0){
    fprintf(ioutput,"kose1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose3=%f %f %f\n",kose1,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose4=%f %f %f\n",kose4,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose5=%f %f %f\n",kose2,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose6=%f %f %f\n",kose5,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose7=%f %f %f\n",kose3,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose8=%f %f %f\n",kose6,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
}if(c==0){


    fprintf(ioutput,"kose1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose3=%f %f %f\n",kose1,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose4=%f %f %f\n",kose4,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose5=%f %f %f\n",kose2,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose6=%f %f %f\n",kose5,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose7=%f %f %f\n",kose3,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose8=%f %f %f\n",kose6,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
}}

 if((a+b+c)==1){

    if(a==1){
    fprintf(ioutput,"kose 1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 3=%f %f %f\n",kose1,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 4=%f %f %f\n",kose4,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 5=%f %f %f\n",kose2,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 6=%f %f %f\n",kose5,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 7=%f %f %f\n",kose3,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 8=%f %f %f\n",kose6,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    }
    if(b==1){

    fprintf(ioutput,"kose 1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 3=%f %f %f\n",kose1,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 4=%f %f %f\n",kose4,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 5=%f %f %f\n",kose2,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 6=%f %f %f\n",kose5,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 7=%f %f %f\n",kose3,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 8=%f %f %f\n",kose6,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
}
    if(c==1){

    fprintf(ioutput,"kose 1=%f %f %f\n",n1[(int)idizi[1]].x,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 2=%f %f %f\n",n1[(int)idizi[2]].x,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 3=%f %f %f\n",kose1,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 4=%f %f %f\n",kose4,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 5=%f %f %f \n",kose2,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
    fprintf(ioutput,"kose 6=%f %f %f\n",kose5,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 7=%f %f %f\n",kose3,n1[(int)idizi[1]].y,n1[(int)idizi[1]].z);
    fprintf(ioutput,"kose 8=%f %f %f\n",kose6,n1[(int)idizi[2]].y,n1[(int)idizi[2]].z);
} }
fclose(ioutput);
    break;
case 4:
    printf("");
    float kurex,kurey,kurez,kurer;

    ioutput=fopen(binarydosyaismi,"a");

fprintf(ioutput,"\nSECIM4:\n");
printf("Lutfen kurenin merkez koordinatlarini giriniz;\n");
scanf("%f%f%f",&kurex,&kurey,&kurez);
printf("Lutfen kurenin yaricapini giriniz\n");
scanf("%f",&kurer);
float kuredizi2[4];
kuredizi2[0]=kurex;
kuredizi2[1]=kurey;
kuredizi2[2]=kurez;
kuredizi2[3]=kurer;

float merkezeuzak;
int i,j=0;
int kuredizi[2000];
for(i=0;i<8;i++){
merkezeuzak=sqrt(pow((kuredizi2[0]-(n1[i].x)),2)+pow((kuredizi2[1]-(n1[i].y)),2)+pow((kuredizi2[2]-(n1[i].z)),2));
if(merkezeuzak<kuredizi2[3]){
kuredizi[j]=i;
j++;

}
else{
printf("");}
}
int y;
for(y=0;y<j;y++){
fprintf(ioutput,"\n%f %f %f",n1[kuredizi[y]].x,n1[kuredizi[y]].y,n1[kuredizi[y]].z);
printf("");
}

fclose(ioutput);
    break;

case 5:
    printf("");
     ioutput=fopen(binarydosyaismi,"a");
     fprintf(ioutput,"\nSECIM5:\n");
    int ki,kj,ka=0;
float toplam=0;
float ort=0;
float ouzaklikdizi;
for(ki=0;ki<8;ki++){
for(kj=1;kj<8-ki;kj++){

    ouzaklikdizi=sqrt(pow(((n1[ki].x)-(n1[kj+ki].x)),2)+pow(((n1[ki].y)-(n1[kj+ki].y)),2)+pow(((n1[ki].z)-(n1[kj+ki].z)),2));
ka++;

}
toplam=toplam+ouzaklikdizi;}


ort=toplam/8;
fprintf(ioutput,"\nortalama=%f",ort);
fclose(ioutput);
    u++;
    binaryv++;
    goto atlanacak3;
    break;
    }

}


u++;
goto atlanacak3;

while(u<t){
        printf("");

atlanacak:
    printf("\n%s dosyasi icin:\n",nktdizi[u]);
printf("");
    char dosyaismi[64];
    sprintf(dosyaismi,"%soutput.nkt",nktdizi[u]);

FILE *dosya3=fopen(nktdizi[u],"r");

char m[10005];
char m1[10005];
char m2[100];
char m3[100];
int k=0;
char *st,*st1,*sayiadedi,*rgbkontrol;
double c=0;
int sayac=0;
do{
c=fgetc(dosya3);
if(c=='\n'){
sayac++;}}
while(c!=EOF);

struct noktalar n[sayac];

fclose(dosya3);
FILE *dosya=fopen(nktdizi[u],"r");
st=fgets(m,100,dosya);
st=fgets(m,100,dosya);
st=fgets(m,100,dosya);
sayiadedi=fgets(m2,100,dosya);
st=fgets(m,100,dosya);





char *adetptr=sayiadedi;
long val;
while(*adetptr){
if(isdigit(*adetptr)){
val=strtol(adetptr,&adetptr,10);

}else{
adetptr++;}
}


        fclose(dosya);





               float uzaklikdizi=sqrt(pow((n[0].x)-(n[1].x),2)+pow((n[0].y)-(n[1].y),2)+pow((n[0].z)-(n[1].z),2));

               int ysonuc=(sayac)*(sayac+1);

               float dizi[3];
               yakinuzak(sayac,n,dizi);


               int aa=dizi[1];
               int ab=dizi[2];

float kurex,kurey,kurez,kurer;

int secim;


while(1){
        int i;
   secimyeri:
    printf("\nsecimi giriniz:\n");
    scanf("%d",&secim);
if(secim>5 || secim<1){
            printf("\nGecersiz secim.\n");
            goto secimyeri;
        }



switch(secim){
    FILE *output;
case 1:
    printf("");







             FILE *dosya1;
            dosya1=fopen(nktdizi[u],"r");
            output=fopen(dosyaismi,"w");
            fprintf(output,"SECIM1:\n");


            char *st2,*st3;
             int i=0;
             int hatasayac=0;

            st2=fgets(m,100,dosya);
           if(strchr(st2,'#')==NULL){
              fprintf(output,"1.satirda hata vardir");
              hatasayac++;

            }
            st2=fgets(m,100,dosya);
            if(strstr(st2,"VERSION")==NULL){
              fprintf(output,"2.satirda hata vardir");
              hatasayac++;  }
            rgbkontrol=fgets(m3,100,dosya);
            st2=fgets(m,100,dosya);
        if(strstr(st2,"NOKTALAR")==NULL){
              fprintf(output,"4.satirda hata vardir");
              hatasayac++; }
            st2=fgets(m,100,dosya);
              if(strstr(st2,"DATA")==NULL){
              fprintf(output,"5.satirda hata vardir");
              hatasayac++;  }
            st2=fgets(m,100,dosya);

            int rgbsayac2=0;
            int rgbsayac=kelimebul(rgbkontrol);

            if(rgbsayac==7){
                rgbsayac2++;
            }
            else if(rgbsayac==4){
                printf("");
            }

            else {
                fprintf(output,"4.satirda hata vardir\n");
                hatasayac++;
            }
            if(strchr(rgbkontrol,'x')==NULL){

            fprintf(output,"x y z yoktur");
            hatasayac++;}

        if(hatasayac==0){
                while(st2!=NULL){
                    if (rgbsayac2==1){
              int kelimesayi=kelimebul(st2);
                if(kelimesayi<6){
                    fprintf(output,"\n%d. satırda rgb bilgileri eksiktir",i+1);
                    hatasayac++;
                 fprintf(output,"\nDosya hatalidir.\n");
                    fclose(output);
                u++;
                v++;

                goto atlanacak;

                    }}
                st3=strtok(st2," ");
                sscanf(st3,"%f", &n[i].x);

                st3=strtok(NULL," ");
                sscanf(st3,"%f", &n[i].y);
                st3=strtok(NULL," ");
                sscanf(st3,"%f", &n[i].z);
                st3=strtok(NULL, "\n");
                st2=fgets(m,sayac,dosya);
                 i++;
                }}


              if(hatasayac > 0){

                    printf("\nDosya hatalidir.\n");
                    fclose(output);
                u++;
                v++;

                goto atlanacak;
              }


              fprintf(output,"Dosya uyumludur");
              fclose(output);

            fclose(dosya1);
break;

case 2:
    printf("");
    output=fopen(dosyaismi,"a");
    fprintf(output,"\nSECIM2:\n");
float dizi[3];
printf("");
yakinuzak(sayac,n,dizi,output);
fclose(output);


break;
case 3:
    printf("");
output=fopen(dosyaismi,"a");
fprintf(output,"\nSECIM3:\n");
tumnoktakup(sayac,n,output,dizi);
fclose(output);
break;
case 4:
output=fopen(dosyaismi,"a");
fprintf(output,"\nSECIM4:\n");
printf("Lutfen kurenin merkez koordinatlarini giriniz;\n");
scanf("%f%f%f",&kurex,&kurey,&kurez);
printf("Lutfen kurenin yaricapini giriniz\n");
scanf("%f",&kurer);
float kuredizi2[4];
kuredizi2[0]=kurex;
kuredizi2[1]=kurey;
kuredizi2[2]=kurez;
kuredizi2[3]=kurer;


kurekure(sayac,kuredizi2,n,output);
fclose(output);
break;
case 5:
    output=fopen(dosyaismi,"a");
    fprintf(output,"\nSECIM5:\n");
    uzaklikortalama(sayac,n,output);
    fclose(output);
    u++;
    v++;
    goto atlanacak;
}
}
}
return 0;
}


void yakinuzak(int sayac,struct noktalar n[],float dizi[],FILE *output){
int i,j,yer1,yer2,yer3,yer4,e=0;
float enk=100,enb=0;

int *num;
num=(int*)malloc(((sayac*sayac+1)/2) * sizeof(float));
float uzaklikdizi;
for(i=0;i<sayac-5;i++){
    for(j=1;j<sayac-i-5;j++){

    uzaklikdizi=sqrt(pow(((n[i].x)-(n[j+i].x)),2)+pow(((n[i].y)-(n[j+i].y)),2)+pow(((n[i].z)-(n[j+i].z)),2));

   if(uzaklikdizi<enk){
    enk=uzaklikdizi;
    yer1=i;
    yer2=j+i;

   }else if(uzaklikdizi>enb){
   enb=uzaklikdizi;
   yer3=i;
   yer4=j+i;
   }
   uzaklikdizi=0;
   }

}

fprintf(output,"en buyuk uzaklık=%f en buyugun yerleri %d %d \nen kucuk uzaklik=%f  en kucugun yerleri %d %d",enb,yer3,yer4,enk,yer1,yer2);
dizi[0]=enb;
dizi[1]=yer3;
dizi[2]=yer4;
dizi[3]=enk;
dizi[4]=yer1;
dizi[5]=yer2;

}
void tumnoktakup(int sayac,struct noktalar n[],FILE *output,float dizi[]){
    float kenar=(pow((dizi[0]),1/3))/3;
    float kose1,kose2,kose3,kose4,kose5,kose6;

int a=0,b=0,c=0;
 if(n[(int)dizi[1]].x > n[(int)dizi[2]].x){
    kose1=n[(int)dizi[1]].x-kenar;
    kose4=n[(int)dizi[2]].x+kenar;
    a=1;
 }
 else  if(n[(int)dizi[1]].x < n[(int)dizi[2]].x){
    kose1=n[(int)dizi[2]].x-kenar;
    kose4=n[(int)dizi[1]].x+kenar;


 }
 if(n[(int)dizi[1]].y > n[(int)dizi[2]].y){
    kose2=n[(int)dizi[1]].y-kenar;
    kose5=n[(int)dizi[2]].y+kenar;
    b=1;


 }
 else  if(n[(int)dizi[1]].y < n[(int)dizi[2]].y){
    kose2=n[(int)dizi[2]].y-kenar;
    kose5=n[(int)dizi[1]].y+kenar;


 }




 if(n[(int)dizi[1]].z > n[(int)dizi[2]].z){
    kose3=n[(int)dizi[1]].z-kenar;
    kose6=n[(int)dizi[2]].z+kenar;
    c=1;


 }
 else  if(n[(int)dizi[1]].z < n[(int)dizi[2]].z){
    kose3=n[(int)dizi[2]].z-kenar;
    kose6=n[(int)dizi[1]].z+kenar;


 }


 if((a+b+c)==3){
    fprintf(output,"kose1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose3=%f %f %f\n",kose1,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose4=%f %f %f\n",kose4,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose5=%f %f %f\n",kose2,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose6=%f %f %f\n",kose5,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose7=%f %f %f\n",kose3,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose8%f %f %f\n",kose6,n[(int)dizi[2]].y,n[(int)dizi[2]].z);


 }

 if((a+b+c)==0){
      fprintf(output,"kose1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
     fprintf(output,"kose3=%f %f %f\n",kose1,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose4=%f %f %f\n",kose4,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose5=%f %f %f\n",kose2,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose6=%f %f %f\n",kose5,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose7=%f %f %f\n",kose3,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose8=%f %f %f\n",kose6,n[(int)dizi[1]].y,n[(int)dizi[1]].z);



 }
 if((a+b+c)==2){

    if(a==0){
    fprintf(output,"kose1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose3=%f %f %f\n",kose1,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose4=%f %f %f\n",kose4,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose5=%f %f %f\n",kose2,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose6=%f %f %f\n",kose5,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose7=%f %f %f\n",kose3,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose8=%f %f %f\n",kose6,n[(int)dizi[2]].y,n[(int)dizi[2]].z);


    }
    if(b==0){
    fprintf(output,"kose1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose3=%f %f %f\n",kose1,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose4=%f %f %f\n",kose4,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose5=%f %f %f\n",kose2,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose6=%f %f %f\n",kose5,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose7=%f %f %f\n",kose3,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose8=%f %f %f\n",kose6,n[(int)dizi[1]].y,n[(int)dizi[1]].z);






    }if(c==0){


    fprintf(output,"kose1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose3=%f %f %f\n",kose1,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose4=%f %f %f\n",kose4,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose5=%f %f %f\n",kose2,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose6=%f %f %f\n",kose5,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose7=%f %f %f\n",kose3,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose8=%f %f %f\n",kose6,n[(int)dizi[1]].y,n[(int)dizi[1]].z);



    }


 }

 if((a+b+c)==1){

    if(a==1){
    fprintf(output,"kose 1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 3=%f %f %f\n",kose1,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 4=%f %f %f\n",kose4,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 5=%f %f %f\n",kose2,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 6=%f %f %f\n",kose5,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 7=%f %f %f\n",kose3,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 8=%f %f %f\n",kose6,n[(int)dizi[1]].y,n[(int)dizi[1]].z);






    }
    if(b==1){

    fprintf(output,"kose 1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 3=%f %f %f\n",kose1,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 4=%f %f %f\n",kose4,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 5=%f %f %f\n",kose2,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 6=%f %f %f\n",kose5,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 7=%f %f %f\n",kose3,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 8=%f %f %f\n",kose6,n[(int)dizi[1]].y,n[(int)dizi[1]].z);



    }
    if(c==1){

    fprintf(output,"kose 1=%f %f %f\n",n[(int)dizi[1]].x,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 2=%f %f %f\n",n[(int)dizi[2]].x,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 3=%f %f %f\n",kose1,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 4=%f %f %f\n",kose4,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 5=%f %f %f \n",kose2,n[(int)dizi[2]].y,n[(int)dizi[2]].z);
    fprintf(output,"kose 6=%f %f %f\n",kose5,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 7=%f %f %f\n",kose3,n[(int)dizi[1]].y,n[(int)dizi[1]].z);
    fprintf(output,"kose 8=%f %f %f\n",kose6,n[(int)dizi[2]].y,n[(int)dizi[2]].z);



    }

 }



}

void kurekure(int sayacc,float kuredizi2[],struct noktalar n[],FILE *output){


float merkezeuzak;
int i,j=0;
int kuredizi[2000];
for(i=0;i<sayacc-5;i++){
merkezeuzak=sqrt(pow((kuredizi2[0]-(n[i].x)),2)+pow((kuredizi2[1]-(n[i].y)),2)+pow((kuredizi2[2]-(n[i].z)),2));
if(merkezeuzak<kuredizi2[3]){
kuredizi[j]=i;
j++;

}
else{
printf("");}
}
int y;
for(y=0;y<j;y++){
fprintf(output,"\n%f %f %f",n[kuredizi[y]].x,n[kuredizi[y]].y,n[kuredizi[y]].z);
printf("");
}
}








void uzaklikortalama(int sayac,struct noktalar n[],FILE *output){

int i,j,a=0;
float toplam=0;
float ort=0;
float uzaklikdizi;
for(i=0;i<sayac-5;i++){
for(j=1;j<sayac-i-5;j++){

    uzaklikdizi=sqrt(pow(((n[i].x)-(n[j+i].x)),2)+pow(((n[i].y)-(n[j+i].y)),2)+pow(((n[i].z)-(n[j+i].z)),2));
a++;

}
toplam=toplam+uzaklikdizi;}


ort=toplam/sayac-5;
fprintf(output,"\nortalama=%f",ort);

}

