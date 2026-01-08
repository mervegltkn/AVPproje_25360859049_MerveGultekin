#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void gezegenAdiYazdir(int i);
 void serbestDusmeDeneyi(double *g, int n);
 void yukariAtisDeneyi(double *g, int n);
 void agirlikDeneyi(double *g,int n);
 void potansiyelEnerjiDeneyi(double *g,int n);
 void hidrostatikBasincDeneyi(double *g,int n);
 void arsimetDeneyi(double *g,int n);
 void sarkacPeriyoduDeneyi(double *g,int n);
 void ipGerilmeDeneyi(double *g,int n);
 void asansorDeneyi(double *g,int n);

 void gezegenAdiYazdir(int i) {
    switch (i) {
        case 0: printf("Merkur gezegeninde "); break;
        case 1: printf("Venus gezegeninde "); break;
        case 2: printf("Dunya gezegeninde "); break;
        case 3: printf("Mars gezegeninde "); break;
        case 4: printf("Jupiter gezegeninde "); break;
        case 5: printf("Saturn gezegeninde "); break;
        case 6: printf("Uranus gezegeninde "); break;
        case 7: printf("Neptun gezegeninde "); break;
    }
}

 void serbestDusmeDeneyi(double *g, int n) {

    double t, h;
    int i;

    printf("\n--- SERBEST DUSME DENEYI ---\n");
    printf("Dusme suresini giriniz (saniye): ");
    scanf("%lf", &t);
    // Negatif giris kontrolu TERNARY OPERATORU
    t = (t < 0) ? -t : t;

    printf("\nSonuclar:\n");

    for (i = 0; i < n; i++) {

         h = 0.5 * (*(g + i)) * t * t;

    gezegenAdiYazdir(i);
         printf("alinan yol: %.2f metre\n", h);
    }
}

void yukariAtisDeneyi(double *g, int n) {

    double v0, hMax;
    int i;

    printf("\n--- YUKARI ATIS DENEYI ---\n");
    printf("Ilk hizi giriniz (m/s): ");
    scanf(" %lf", &v0);
    // Negatif giris kontrolu
    v0 = (v0 < 0) ? -v0 : v0;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
        hMax = (v0 * v0) / (2 * (*(g + i)));
   gezegenAdiYazdir(i);
        printf("cisim maksimum %.2f metre yukseklige cikabilir\n", hMax);
  }
}
void agirlikDeneyi(double *g, int n) {

    double m, agirlik;
    int i;

    printf("\n--- AGIRLIK DENEYI ---\n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf(" %lf", &m);

    m = (m < 0) ? -m : m;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
        agirlik = m * (*(g + i));
    gezegenAdiYazdir(i);
        printf("cismin agirligi: %.2f Newton\n", agirlik);
    }
}
void potansiyelEnerjiDeneyi(double *g, int n) {

    double m, h, Ep;
    int i;

    printf("\n--- POTANSIYEL ENERJI DENEYI ---\n");

    printf("Cismin kutlesini giriniz (kg): ");
    scanf(" %lf", &m);

    printf("Yuksekligi giriniz (metre): ");
    scanf(" %lf", &h);

    // Negatif giris kontrolu
    m = (m < 0) ? -m : m;
    h = (h < 0) ? -h : h;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
        Ep = m * (*(g + i)) * h;
    gezegenAdiYazdir(i);
        printf("potansiyel enerji: %.2f Joule\n", Ep);
    }
}

void hidrostatikBasincDeneyi(double *g, int n) {

    double rho, h, P;
    int i;

    printf("\n--- HIDROSTATIK BASINC DENEYI ---\n");

    printf("Sivinin yogunlugunu giriniz (kg/m^3): ");
    scanf(" %lf", &rho);

    printf("Derinligi giriniz (m): ");
    scanf(" %lf", &h);

    rho = (rho < 0) ? -rho : rho;
    h   = (h   < 0) ? -h   : h;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
         P = rho * (*(g + i)) * h;
    gezegenAdiYazdir(i);
        printf("hidrostatik basinc: %.2f Pascal\n", P);
    }
}

void arsimetDeneyi(double *g, int n) {

    double rho, V, F;
    int i;

    printf("\n--- ARSIMET KALDIRMA KUVVETI DENEYI ---\n");

    printf("Sivinin yogunlugunu giriniz (kg/m^3): ");
    scanf(" %lf", &rho);

    printf("Batan hacmi giriniz (m^3): ");
    scanf(" %lf", &V);

    rho = (rho < 0) ? -rho : rho;
    V   = (V   < 0) ? -V   : V;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
         F = rho * (*(g + i)) * V;
    gezegenAdiYazdir(i);
        printf("kaldirma kuvveti: %.2f Newton\n", F);
    }
}
void sarkacDeneyi(double *g, int n) {

    double L, T;
    int i;

    printf("\n--- BASIT SARKAC PERIYODU DENEYI ---\n");
    printf("Sarkac uzunlugunu giriniz (m): ");
    scanf(" %lf", &L);

    L = (L < 0) ? -L : L;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
         T = 2 * 3.14159 * sqrt(L / (*(g + i)));
    gezegenAdiYazdir(i);
        printf("sarkac periyodu: %.2f saniye\n", T);
    }
}
void ipGerilmeDeneyi(double *g, int n) {

    double m, T;
    int i;

    printf("\n--- SABIT IP GERILMESI DENEYI ---\n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf(" %lf", &m);

    m = (m < 0) ? -m : m;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
         T = m * (*(g + i));
    gezegenAdiYazdir(i);
        printf("ip gerilmesi: %.2f Newton\n", T);
    }
}

void asansorDeneyi(double *g, int n) {

    double m, a, N;
    int i;

    printf("\n--- ASANSOR DENEYI ---\n");

    printf("Cismin kutlesini giriniz (kg): ");
    scanf(" %lf", &m);

    printf("Asansor ivmesini giriniz (m/s^2): ");
    scanf(" %lf", &a);

    m = (m < 0) ? -m : m;

    printf("\nSonuclar:\n");
    for (i = 0; i < n; i++) {
        N = m * ((*(g + i)) + a);
    gezegenAdiYazdir(i);
        printf("hissedilen agirlik: %.2f Newton\n", N);
    }
}


int main()
{
  char bilimInsani[50];
  int secim;

  const char* gezegenIsimleri[] = {"Merkur", "Venus", "Dunya", "Mars", "Jupiter", "Saturn", "Uranus", "Neptun"};
  double g_ivmeleri[] = {3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15}; // yerçekimi ivmeleri (m/s^2)
  int gezegenSayisi = 8;

  printf("Bilim insaninin adini giriniz: ");
  scanf("%s", bilimInsani);

  printf("\nMERHABA %s!\n", bilimInsani);


  while(1){
        printf("\n==============================\n");
        printf("   UZAY FIZIK SIMULASYONU\n");
        printf("==============================\n");
        printf("1) Serbest Dusme Deneyi\n");
        printf("2) Yukari Atis Deneyi\n");
        printf("3) Agirlik Deneyi\n");
        printf("4) Kutlecekimsel Potansiyel Enerji Deneyi\n");
        printf("5) Hidrostatik Basinc Deneyi\n");
        printf("6) Arsimet Kaldirma Kuvveti Deneyi\n");
        printf("7) Basit Sarkac Periyodu Deneyi\n");
        printf("8) Sabit Ýp Gerilmesi Deneyi\n");
        printf("9) Asansor Deneyi\n");
        printf("-1)  Cikis\n");
        printf("Seciminizi giriniz: ");

        scanf("%d",&secim);

        if (secim == -1) {
            printf("\nProgram sonlandiriliyor. Iyi gunler %s\n", bilimInsani);
            break;
        }

        switch (secim) {
            case 1:
                printf("\nSerbest Dusme Deneyi secildi.\n");
                serbestDusmeDeneyi(g_ivmeleri, gezegenSayisi);
                break;

            case 2:
                printf("\nYukari Atis Deneyi secildi.\n");
                yukariAtisDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 3:
                printf("\nAgirlik Deneyi secildi.\n");
                agirlikDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 4:
                printf("\nKutlecekimsel Potansiyel Enerji Deneyi secildi.\n");
                potansiyelEnerjiDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 5:
                printf("\nHidrostatik Basinc Deneyi secildi.\n");
                hidrostatikBasincDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 6:
                printf("\nArsimet Kaldirma Kuvveti Deneyi secildi.\n");
                arsimetDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 7:
                printf("\nBasit Sarkac Periyodu Deneyi secildi.\n");
                sarkacDeneyi(g_ivmeleri,gezegenSayisi);
                break;

           case 8:
                printf("\nSabit Ip GerilmesiDeneyi secildi.\n");
                ipGerilmeDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            case 9:
                printf("\nAsansor Deneyi secildi.\n");
                asansorDeneyi(g_ivmeleri,gezegenSayisi);
                break;

            default:
                printf("\nGecersiz secim! Lutfen tekrar deneyiniz.\n");
        }
  }

    return 0;
}

