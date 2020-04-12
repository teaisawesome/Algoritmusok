/*
Adott a következö A vektor, melyet a KUPAC_RENDEZ algoritmussal fogunk rendezni:
A={54, 82, 89, 31, 88, 57, 79, 84, 74, 69,  2, 64, 92, 83, 17, 90, 48, 44}

7/a feladat:	Hányszor fut le a SÜLLYESZT eljárás 5. sorában található utasítás? (1 pont)

7/b feladat:	Mi az értéke az A vektor 12. elemémek, amikor a KUPAC_RENDEZ eljárás 6. sora kerül végrehajtásra? (1 pont)

7/c feladat:	Az A vektor melyik indexű eleme tartalmazza a(z) 84  értéket, amikor a KUPAC_RENDEZ eljárás 6. sora kerül végrehajtásra? (1 pont)
*/
// Example program
#include <iostream>
#include <string>

int sum = 0;

void SULLYESZT(int K[], int honnan, int vege)
{
    int x = K[honnan];
    int gyermek = honnan + honnan + 1;
    
    while(gyermek <= vege)
    {
        if(gyermek < vege && K[gyermek + 1] > K[gyermek])
        {
            gyermek = gyermek + 1;
        }
        if(K[gyermek] > x)
        {
            K[honnan] = K[gyermek];
            honnan = gyermek;
            sum++;
            gyermek = honnan + honnan + 1;
        }
        else
        {
            gyermek = vege + 1;    
        }
    }
    K[honnan] = x;
}
void KUPAC_RENDEZES(int K[])
{
    int i = 19/2; // 19 értéke változik a vektor méretétől függően
    
    while(i >= 0)
    {
        SULLYESZT(K, i, 18); // v = vektor mérete - 1
        i--;
    }
    
    for(int j = 0; j < 19; j++)
    {
        std::cout << K[j] << " ";
    }
    
    i = 18;
    
    while(i >= 1)
    {
        int temp = K[0];
        K[0] = K[i];
        K[i] = temp;
        i--;
        SULLYESZT(K, 0, i);
    }
}


int main()
{
  int TESZT[]={25, 11, 8, 63, 67, 45, 12, 47, 16, 11, 76, 8, 43, 51, 31, 17, 5};
  int C[]={55, 26, 13, 74, 36, 97, 86, 41, 15, 70,  8, 58, 71, 87, 64, 14, 44, 31, 5};

  KUPAC_RENDEZES(C);
}
