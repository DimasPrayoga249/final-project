#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


    int dalam_data, periode, umur;
    long int total_1, total_2,total_3,total_4,total_5,total_6,total_7,total_8,total_9;
    long int total1_obat,total2_obat,total3_obat,total4_obat,total5_obat, biaya1,biaya2,biaya3,biaya4,biaya5, tot_biaya, bill_kamar, bill_obat, bill_dokter;
    long int tot_biaya1, tot_biaya2, tot_biaya3, tot_biaya4, tot_biaya5;
    char opsi, pilih, kamar, booking,booking1, booking2, booking3, pasien[50], nama[50], alamat[250], telp[15], mail[50], npk[50], tekan;
    char rawat, booking4, booking5, booking6, booking7, booking8,gender, cek, dopil, perawat, dokter, bidok, lanjut;
	char data[500];
menu:
menu1:
    system("cls");
 printf("\n");
 FILE *in1;
    in1=fopen("Tampilan Awal.txt","r");
		while(fgets(data,500,in1)!=NULL){
			printf(data);
		}
		fclose(in1);
	
    printf("Tekan Y untuk melanjukan : ");
    scanf("%s",&lanjut);
    if (lanjut=='y'||lanjut=='Y')
    {
     goto menu2;
    }
    else
    {
     printf("\n\n\n\n\n");
  printf("                             TERIMA KASIH");
 }
menu2:
 system("cls");
  printf("\n");
  FILE *in2;
    in2=fopen("Heading Apps.txt","r");
		while(fgets(data,500,in2)!=NULL){
			printf(data);
		}
		fclose(in2);
  printf("\n  Lakukan Pengisian Form Mulai dari [1-2]= ");
  scanf("%i",&dalam_data);
  switch(dalam_data)
  {

jenis_kamar:
   case 1:
    system("cls");
    	FILE *in3;
    		in3=fopen("Pilihan Kamar.txt","r");
				while(fgets(data,500,in3)!=NULL){
					printf(data);
					}
					fclose(in3);
             printf("\n Pilihan Anda[1/2/3/4]= ");
             scanf("%s",&kamar);

            if (kamar == '1')
            {
             system("cls");
             FILE *in4;
    			in4=fopen("Fasilitas VIP.txt","r");
					while(fgets(data,500,in4)!=NULL){
						printf(data);
						}
						fclose(in4);
                printf("\n  Pesan sekarang (y/n): ");
                scanf("%s",&booking);

                if (booking == 'y'||booking=='Y')
                {
                 system("cls");
                    printf("  Silahkan Masukkan Data Pemesanan\n");
                    printf("  Nama Pemesan Kamar   :");
                    scanf("%s",&npk);
                    printf("  Periode (malam)      :");
                    scanf("%i",&periode);
                    printf("  No. telepon          :");
                    scanf("%s",&telp);
                    printf("  Email                :");
                    scanf("%s",&mail);
                    printf("  Alamat               :");
                    scanf("%s",&alamat);
                    printf("\n");
                    system("cls");

                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  Data Pemesan Kamar Perawatan\n");
                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  | Nama Pemesan Kamar    || %s      \n", npk);
                    printf("  | Periode (malam)       || %i malam \n", periode);
                    printf("  | No. Telepon           || %s\n", telp);
                    printf("  | Email                 || %s     \n", mail);
                    printf("  | Alamat                || %s\n", alamat);
     				total_1=periode*3500000;
                    printf("  | Biaya Kamar per malam || Rp 3500000,-\n");
                    printf("  | Total Biaya Kamar     || Rp %i ,- *sesuai periode\n",total_1);
                    printf("  -------------------------------------------------------------------------------------\n\n");
                    printf("  Pilih Jenis Perawatan (y/n): ");
                    scanf("%s",&pilih);
 
                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else if (kamar == '2')
            {
             system("cls");
             printf("\n");
                FILE *in5;
    			in5=fopen("Fasilitas Kamar I.txt","r");
					while(fgets(data,500,in5)!=NULL){
						printf(data);
						}
						fclose(in5);
                printf("\n  Pesan sekarang (y/n): ");
                scanf("%s",&booking1);

                if (booking1 == 'y'||booking1=='Y')
                {
                 system("cls");
                    printf("  Silahkan Masukkan Data Pemesanan\n");
                    printf("  Nama Pemesan Kamar   :");
                    scanf("%s",&npk);
                    printf("  Periode (malam)      :");
                    scanf("%i",&periode);
                    printf("  No. telepon          :");
                    scanf("%s",&telp);
                    printf("  Email                :");
                    scanf("%s",&mail);
                    printf("  Alamat               :");
                    scanf("%s",&alamat);
                    printf("\n");
                    system("cls");

                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  Data Pemesan Kamar Perawatan\n");
                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  | Nama Pemesan Kamar    || %s      \n", npk);
                    printf("  | Periode (malam)       || %i malam \n", periode);
                    printf("  | No. Telepon           || %s\n", telp);
                    printf("  | Email                 || %s     \n", mail);
                    printf("  | Alamat                || %s\n", alamat);
     total_2=(periode*2500000);
                    printf("  | Biaya Kamar per malam || Rp 2500000,-\n");
                    printf("  | Total Biaya Kamar     || Rp %i ,- *sesuai periode\n",total_2);
                    printf("  -------------------------------------------------------------------------------------\n\n");
                    printf("  Pilih Jenis Perawatan (y/n): ");
                    scanf("%s",&pilih);

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else if (kamar == '3')
            {
             system("cls");
             printf("\n");
             FILE *in6;
    			in6=fopen("Fasilitas Kamar II.txt","r");
					while(fgets(data,500,in6)!=NULL){
						printf(data);
						}
						fclose(in6);
                
                printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking2);
                
                if (booking2 == 'y'||booking2=='Y')
                {
                 system("cls");
                    printf("  Silahkan Masukkan Data Pemesanan\n");
                    printf("  Nama Pemesan Kamar   :");
                    scanf("%s",&npk);
                    printf("  Periode (malam)      :");
                    scanf("%i",&periode);
                    printf("  No. telepon          :");
                    scanf("%s",&telp);
                    printf("  Email                :");
                    scanf("%s",&mail);
                    printf("  Alamat               :");
                    scanf("%s",&alamat);
                    printf("\n");
                    system("cls");

                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  Data Pemesan Kamar Perawatan\n");
                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  | Nama Pemesan Kamar    || %s      \n", npk);
                    printf("  | Periode (malam)       || %i malam \n", periode);
                    printf("  | No. Telepon           || %s\n", telp);
                    printf("  | Email                 || %s     \n", mail);
                    printf("  | Alamat                || %s\n", alamat);
     total_3=(periode*1300000);
                    printf("  | Biaya Kamar per malam || Rp 1300000,-\n");
                    printf("  | Total Biaya Kamar     || Rp %i ,- *sesuai periode\n",total_3);
                    printf("  -------------------------------------------------------------------------------------\n\n");
                    printf("  Pilih Jenis Perawatan (y/n): ");
                    scanf("%s",&pilih);
                    
                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else
            {
             system("cls");
                FILE *in7;
    			in7=fopen("Fasilitas Kamar III.txt","r");
					while(fgets(data,500,in7)!=NULL){
						printf(data);
						}
						fclose(in7);
                printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking3);
               
                if (booking3 == 'y'||booking3=='Y')
                {
                 system("cls");
                    printf("  Silahkan Masukkan Data Pemesanan\n");
                    printf("  Nama Pemesan Kamar   :");
                    scanf("%s",&npk);
                    printf("  Periode (malam)      :");
                    scanf("%i",&periode);
                    printf("  No. telepon          :");
                    scanf("%s",&telp);
                    printf("  Email                :");
                    scanf("%s",&mail);
                    printf("  Alamat               :");
                    scanf("%s",&alamat);
                    printf("\n");
                    system("cls");

                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  Data Pemesan Kamar Perawatan\n");
                    printf("  -------------------------------------------------------------------------------------\n");
                    printf("  | Nama Pemesan Kamar    || %s      \n", npk);
                    printf("  | Periode (malam)       || %i malam \n", periode);
                    printf("  | No. Telepon           || %s\n", telp);
                    printf("  | Email                 || %s     \n", mail);
                    printf("  | Alamat                || %s|n", alamat);
     total_4=(periode*800000);
                    printf("  | Biaya Kamar per malam || Rp 800000,-\n");
                    printf("  | Total Biaya Kamar     || Rp %i ,- *sesuai periode\n",total_4);
                    printf("  -------------------------------------------------------------------------------------\n\n");
                    printf("  Pilih Jenis Perawatan (y/n): ");
                    scanf("%s",&pilih);

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
   break;
jenis_perawatan:
  case 2:
   system("cls");
   FILE *in8;
    	in8=fopen("Pelayanan Medis.txt","r");
			while(fgets(data,500,in8)!=NULL){
				printf(data);
					}
					fclose(in8);
            printf("\n\nPelayanan yang Anda Butuhkan [1/2/3/4/5]= ");
            scanf("%s",&rawat);
            
            if (rawat == '1')
            {
            system("cls");
            printf("\n");
            FILE *in9;
    			in9=fopen("Penyakit Dalam.txt","r");
					while(fgets(data,500,in9)!=NULL){
						printf(data);
						}
						fclose(in9);
    printf(" Pesan sekarang (y/n): ");
                scanf("%s",&booking4);
               
                if (booking4 == 'y'||booking4=='Y')
                {
                 system("cls");
    				printf(" Silahkan Masukkan Data Pemesanan\n");
                    printf(" Nama Pasien            : ");
                    scanf("%s",&pasien);
                    printf(" Umur                   : ");
                    scanf("%i",&umur);
                    printf(" Gender [L/P]           : ");
                    scanf("%s",&gender);
                    
                    system("cls");
                    printf("\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Data Pasien\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" | Nama Pasien                   || %s\n", pasien); 
                    printf(" | Umur                          || %i Tahun\n", umur);
                    printf(" | Gender [L/P]                  || ");
                    if (gender == 'l'||gender=='L')
                    {
                        printf("Laki-laki\n");
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        printf("Perempuan\n");
                    }
                    total1_obat=(periode*1300000);
     total_5=(periode*3500000);
     tot_biaya1=(total1_obat+total_5);
                    printf(" | Biaya Dokter                  || Rp 3500000,-                 *per 1x perawatan\n");
                    printf(" | Biaya Obat                    || Rp 1300000,-                 *per 1x perawatan\n");
                    printf(" | Total Biaya Perawatan Pasien  || Rp %i,-             *sesuai periode perawatan\n",tot_biaya1);
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Cek Pemesanan(y/n)   : ");
                    scanf("%s",&cek);
                    }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '2')
            {
             system("cls");
                printf("\n");
                FILE *in10;
    			in10=fopen("Penyakit Kulit dan Kelamin.txt","r");
					while(fgets(data,500,in10)!=NULL){
						printf(data);
						}
						fclose(in10);
                printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking5);
                
                if (booking5 == 'y'||booking5=='Y')
                {
                    system("cls");
    				printf(" Silahkan Masukkan Data Pemesanan\n");
                    printf(" Nama Pasien            : ");
                    scanf("%s",&pasien);
                    printf(" Umur                   : ");
                    scanf("%i",&umur);
                    printf(" Gender [L/P]           : ");
                    scanf("%s",&gender);
                    
                    system("cls");
                    printf("\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Data Pasien\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" | Nama Pasien                   || %s\n",pasien); 
                    printf(" | Umur                          || %i Tahun\n",umur);
                    printf(" | Gender [L/P]                  || ");
                    if (gender == 'l'||gender=='L')
                    {
                        printf("Laki-laki\n");
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        printf("Perempuan\n");
                    }
                    total2_obat=(periode*1000000);
        total_6=(periode*3300000);
        tot_biaya2=(total2_obat+total_6);
         printf(" | Biaya Dokter                  || Rp 3300000,-                 *per 1x perawatan\n");
                    printf(" | Biaya Obat                    || Rp 1000000,-                 *per 1x perawatan\n");
                    printf(" | Total Biaya Perawatan Pasien  || Rp %i,-             *sesuai periode perawatan\n",tot_biaya2);
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Cek Pemesanan(y/n)   : ");
                    scanf("%s",&cek);
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '3')
            {
             system("cls");
                printf("\n");
                FILE *in11;
                in11=fopen("Penyakit THT.txt","r");
					while(fgets(data,500,in11)!=NULL){
						printf(data);
						}
						fclose(in11);
                printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking6);
                
                if (booking6 == 'y'||booking6=='Y')
                {
                    system("cls");
    				printf(" Silahkan Masukkan Data Pemesanan\n");
                    printf(" Nama Pasien            : ");
                    scanf("%s",&pasien);
                    printf(" Umur                   : ");
                    scanf("%i",&umur);
                    printf(" Gender [L/P]           : ");
                    scanf("%s",&gender);
                    
                    system("cls");
                    printf("\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Data Pasien\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" | Nama Pasien                   || %s\n",pasien); 
                    printf(" | Umur                          || %i Tahun\n",umur);
                    printf(" | Gender [L/P]                  || ");
                    if (gender == 'l'||gender=='L')
                    {
                        printf("Laki-laki\n");
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        printf("Perempuan\n");
                    }
                    total3_obat=(periode*900000);
        total_7=(periode*2700000);
        tot_biaya3=(total3_obat+total_7);
        printf(" | Biaya Dokter                  || Rp 2700000,-                 *per 1x perawatan\n");
                    printf(" | Biaya Obat                    || Rp 900000,-                 *per 1x perawatan\n");
                    printf(" | Total Biaya Perawatan Pasien  || Rp %i,-             *sesuai periode perawatan\n",tot_biaya3);
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Cek Pemesanan(y/n)   : ");
                    scanf("%s",&cek);
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '4')
            {
            system("cls");
            printf("\n");
            FILE *in12;
                in12=fopen("Bedah Umum.txt","r");
					while(fgets(data,500,in12)!=NULL){
						printf(data);
						}
						fclose(in12);
                printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking7);
                
                if (booking7 == 'y'||booking7=='Y')
                {
                    system("cls");
    				printf(" Silahkan Masukkan Data Pemesanan\n");
                    printf(" Nama Pasien            : ");
                    scanf("%s",&pasien);
                    printf(" Umur                   : ");
                    scanf("%i",&umur);
                    printf(" Gender [L/P]           : ");
                    scanf("%s",&gender);
                    
                    system("cls");
                    printf("\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Data Pasien\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" | Nama Pasien                   || %s\n",pasien); 
                    printf(" | Umur                          || %i Tahun\n",umur);
                    printf(" | Gender [L/P]                  || ");
                    if (gender == 'l'||gender=='L')
                    {
                        printf("Laki-laki\n");
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        printf("Perempuan\n");
                    }
                    total4_obat=(periode*1200000);
     total_8=(periode*2800000);
     tot_biaya4=(total4_obat+total_8);
     printf(" | Biaya Dokter                  || Rp 2800000,-                 *per 1x perawatan\n");
                    printf(" | Biaya Obat                    || Rp 1200000,-                 *per 1x perawatan\n");
                    printf(" | Total Biaya Perawatan Pasien  || Rp %i,-             *sesuai periode perawatan\n",tot_biaya4);
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Cek Pemesanan(y/n)   : ");
                    scanf("%s",&cek);
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else
            {
             system("cls");
                printf("\n");
                FILE *in13;
                in13=fopen("Mata.txt","r");
					while(fgets(data,500,in13)!=NULL){
						printf(data);
						}
						fclose(in13);
              	printf("\n Pesan sekarang (y/n): ");
                scanf("%s",&booking8);
                
                if (booking8 == 'y'||booking8=='Y')
                {
                    system("cls");
    				printf(" Silahkan Masukkan Data Pemesanan\n");
                    printf(" Nama Pasien            : ");
                    scanf("%s",&pasien);
                    printf(" Umur                   : ");
                    scanf("%i",&umur);
                    printf(" Gender [L/P]           : ");
                    scanf("%s",&gender);
                    
                    system("cls");
                    printf("\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Data Pasien\n");
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" | Nama Pasien                   || %s\n",pasien); 
                    printf(" | Umur                          || %i Tahun\n",umur);
                    printf(" | Gender [L/P]                  || ");
                    if (gender == 'l'||gender=='L')
                    {
                        printf("Laki-laki\n");
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        printf("Perempuan\n");
                    }
                    total5_obat=(periode*500000);
     total_9=(periode*1500000);
     tot_biaya5=(total5_obat+total_9);
     printf(" | Biaya Dokter                  || Rp 1500000,-                 *per 1x perawatan\n");
                    printf(" | Biaya Obat                    || Rp 500000,-                 *per 1x perawatan\n");
                    printf(" | Total Biaya Perawatan Pasien  || Rp %i,-             *sesuai periode perawatan\n",tot_biaya5);
                    printf(" -------------------------------------------------------------------------------------\n");
                    printf(" Cek Pemesanan(y/n)   : ");
                    scanf("%s",&cek);
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

  default:
            printf("  Maaf, Permintaan Anda Tidak Tersedia\n\n");
  break;
 }

        if (cek == 'y'||cek=='Y')
        {
        system("cls");
        printf("\n");
        FILE *in14;
            in14=fopen("Surat Perawatan.txt","r");
				while(fgets(data,500,in14)!=NULL){
					printf(data);
					}
					fclose(in14);
        printf("\n  Rincian Pemesanan\n");
        printf("  -----------------\n");
        printf("  Nama Pemesan kamar       : ");scanf("%s",&npk);
        printf("\n  Jenis kamar yang Dipesan : ");
        if (kamar == '1')
            {
                printf("VIP\n");
            }
        else if (kamar =='2')
            {
                printf("Kelas I\n");
            }
        else if (kamar =='2')
            {
                printf("Kelas II\n");
            }
        else
         {
            printf("Kelas III\n");
         }
        printf("  No.Telepon               : %s\n",telp);
        printf("  Email                    : %s\n",mail);
        printf("  Alamat                   : ");scanf("%s",&alamat);
        printf("\n\n  Identitas Pasien\n");
        printf("  ----------------\n");
        printf("  Nama Pasien              : ");scanf("%s",&pasien);
        printf("\n  Umur                     : %i Tahun\n",umur);
        printf("  Gender                   : ");
        if (gender == 'l')
            {
                printf("Laki-laki\n");
            }
        else
            {
                printf("Perempuan\n");
            }
        printf("  Periode (malam)          : %i Malam\n",periode);
        printf("  Jenis Perawatan          : ");
        if (rawat == '1')
            {
            FILE *in15;
            in15=fopen("Pelayanan Spesialis Bedah.txt","r");
				while(fgets(data,500,in15)!=NULL){
					printf(data);
					}
					fclose(in15);       
   }
        else if (rawat =='2')
            {
        	FILE *in16;
            in16=fopen("Pelayanan Spesialis KK.txt","r");
				while(fgets(data,500,in16)!=NULL){
					printf(data);
					}
					fclose(in16);
            }
        else if(rawat =='3')
         {
         FILE *in17;
            in17=fopen("Pelayanan Spesialis THT.txt","r");
				while(fgets(data,500,in17)!=NULL){
					printf(data);
					}
					fclose(in17);
         }
        else if(rawat =='4')
         {
         FILE *in18;
            in18=fopen("Pelayanan Spesialis Bedah.txt","r");
				while(fgets(data,500,in18)!=NULL){
					printf(data);
					}
					fclose(in18);
         }
  else if(rawat =='5')
         {
         FILE *in19;
            in19=fopen("Pelayanan Spesialis Mata.txt","r");
				while(fgets(data,500,in19)!=NULL){
					printf(data);
					}
					fclose(in19);
         }
        printf("\n");
        printf("  Rincian Biaya \n");
        printf("  -------------\n");
        printf("  Biaya Kamar              : Rp ");
            if (kamar == '1')
                {
                    bill_kamar=total_1;
                    printf("%i\n",total_1);
                }
            else if (kamar =='2')
                {
                    bill_kamar=total_2;
                    printf("%i\n",total_2);
                }
            else if (kamar =='3')
                {
                    bill_kamar=total_3;
                    printf("%i\n",total_3);
                }
            else if(kamar=='4')
                {
                    bill_kamar=total_4;
                    printf("%i\n",total_4);
                }
        printf("  Biaya Dokter             : Rp ");
        if (rawat == '1')
                {
                    bill_dokter=total_5;
                    printf("%i\n",total_5);
                }
            else if (rawat =='2')
                {
                    bill_dokter=total_6;
                    printf("%i\n",total_6);
                }
            else if (rawat =='3')
                {
                    bill_dokter=total_7;
                    printf("%i\n",total_7);
                }
            else if(rawat=='4')
                {
                    bill_dokter=total_8;
                    printf("%i\n",total_8);
                }
            else if(rawat=='5')
                {
                    bill_dokter=total_9;
                    printf("%i\n",total_9);
                }
        printf("  Biaya Obat               : Rp ");
        if (rawat == '1')
                {
                    bill_obat=total1_obat;
                    printf("%i\n",total1_obat);
                }
            else if (rawat =='2')
                {
                    bill_obat=total2_obat;
                    printf("%i\n",total2_obat);
                }
            else if (rawat =='3')
                {
                    bill_obat=total3_obat;
                    printf("%i\n",total3_obat);
                }
            else if(rawat=='4')
                {
                    bill_obat=total4_obat;
                    printf("%i\n",total4_obat);
                }
            else if(rawat=='5')
                {
                    bill_obat=total5_obat;
                    printf("%i\n",total5_obat);
                }
        printf("\n\n\n");
        tot_biaya=(bill_kamar+bill_obat+bill_dokter);
        printf(" Total Biaya               : Rp %i ,-\n",tot_biaya);
        }
    else if (cek == 'n'||cek=='N')
        {
            printf(" Permintaan anda belum bisa di proses\n");
        }
    printf("====================================================================================\n\n");
    printf("Kembali ke menu utama [Y/N]= ");
    scanf("%s",&opsi);

    if (opsi == 'y'||opsi=='Y')
    {
        goto menu;
    }
    else if(opsi=='n'||opsi=='N')
    {
        printf("\n\n\n\n");
  		printf("                             TERIMA KASIH\n");
    }

    return 0;
}
