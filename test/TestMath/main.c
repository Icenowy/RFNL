#include <RUtil2.h>
#include <math.h>
#include "Vec/Vec.h"
#include "FMath/FMath.h"
#include "Include/RFNL.h"

int main()
{
    int i;
    Float sum1 = 0;
    Float sum2 = 0;
    Float ret1, ret2;
    
    for(i = 0; i < 1000; i ++)
    {
        ret1 = RFNL_PTan_Float(0.2f * i);
        ret2 = tan(0.2f * i);
        printf("%.9f\n", ret1 - ret2);
        sum1 += ret1;
        sum2 += ret2;
    }
    /*
    #define _sin RFNL_PSin_LPrec_Float
    for(i = 0; i < 10000000; i ++)
    {
        sum1 += _sin(0.2f * i);
        sum1 += _sin(0.2f * i + 1.0f);
        sum1 += _sin(0.2f * i + 2.0f);
        sum1 += _sin(0.2f * i + 3.0f);
    }*/
    printf("%f\n", sum1);
    RFNL_Use();
    /*
    float* a, *b, *c, *d;
    a = RAlloc_Float(1024);
    b = RAlloc_Float(1024);
    c = RAlloc_Float(1024);
    d = RAlloc_Float(1024);
    
    int i;
    for(i = 0; i < 1024; i ++)
        a[i] = 0.1f * i;
    
    //This is non-sense...
    for(i = 0; i < 100000; i ++)
    {
        RFNL_VCopy_Gnrc_Float(b, a, 1024);
        RFNL_VCopy_Gnrc_Float(d, a, 1024);
        
        RFNL_VAdd_Gnrc_Float(b, b, a, 1024);
        RFNL_VCplxAbs_Gnrc_Float(c, a, d, 1024);
        RFNL_VCplxMul_Gnrc_Float(d, c, d, c, b, a, 1024);
    }
    
    for(i = 0; i < 1024; i ++)
        printf("%.4d %.9f\n", i, d[i]);
    
    RFree(a, b, c, d);
    */
    return 0;
}

