#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, kont=0;
    scanf("%d%d", &n, &x); // gi vnesuvame n i x
    for(int i = n-1; i>= 0; i--) // pravime for ciklus se dodeka i ne stane broj pomal od n
    {
        for(int j = i; j >= 0; j /= 10) // j ke e pomosna promenliva koja go zema celiot prv vnesen broj i go namaluva za edna cifa sekogas koga taa ke se proveri podolu so if
            kont=0; // kont e flag koj e prvicno spusten
            for(int k = x; k > 0; k /= 10) // k ke e pomosna promenliva koja go zema celiot vtor vnesen broj i go namaluva za edna cifa sekogas koga taa ke se proveri podolu so if
            {
                if(j % 10 == k % 10) // ovde se proveruva cifrata od prvata pomosna j i vtorata pomosna k
                {
                    kont = 1; // dokolku se tisti cifri, se kreva flag, i oznacuva deka se nasla barem edna cifra koja e ista vo brojot koj se proveruva 
                    break; // se izleguva od for ciklusot kade se zema zema k da bide pomosna koja go cuva privremeno vtoriot broj
                }
            }
            if(kont == 1 || j == 0) // ovdeka se proveruva dali flagot e krenat ili pak promenlivata koja go cuva prviot broj stanala 0, ili veke nema cifri za proveruvanje
            {
                break; /* ako edno od dvata uslova pogore e ispolnet, znaci deka ili edna cifra od prvata promenliva e ista so vtoriot broj ili pak se istrosil
                        prviot broj koj trebalo da se proveruva i toa znaci deka se izleguva od for ciklusot koj go zema prviot broj vo pomosna promenliva j */
            }
        }
        if(kont == 0) // dokolku flagot e seuste spusten, i predhodniot for ciklus zavrsil so uslovot j da e 0, toa znaci deka ovaj broj e najmaliot broj pomal od n
        {
            printf("%d", i); // i se vleguva vo if ako flagot e 0 i se pecati najmaliot broj pomal od n koj e celosno razlicen od vtoriot vnesen broj
            break; // se izleguva od site for ciklusi i zavrsuva programata, bidejki e najden toj broj
        }
    }
    return 0;
}
