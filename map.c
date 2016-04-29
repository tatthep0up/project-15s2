/* 
* @Author: p_h_a_000
* @Date:   2016-03-21 12:13:22
* @Last Modified by:   Asus
* @Last Modified time: 2016-04-28 22:53:27
*/

#include "Pro_head.h"

void create_map(char array_map[]) {
    
    int i;
    for (i = 0; i <=  4500; i++)
    {
        array_map[i] = ' ';
        
        if(i % 150 == 0)
        {
            array_map[i] = '\n';
        }

       
        //___________________________________________ เว้นข้างบนและล่าง

        if (i >= 0 && i < 150)
        {
            array_map[i] = '-';
            if (i==0)
            {
                array_map[i] = '\n';
            }
        }
        if (i > 4350 && i < 4500)
        {
            array_map[i] = '-';
        }

        //__________________________________________ ตึกวิทยาการคอม


        if (i >= 618 && i < 637)
        {
            array_map[i] = '_';
        }
        if (i == 767 || i == 787)
        {
            array_map[i] = '|';
        }
        if (i == 917 || i == 937)
        {
            array_map[i] = '|';
        }
        if (i == 1067 || i == 1087)
        {
            array_map[i] = '|';
        }
        if (i==1075)
        {
            array_map[i] = 'C';
        }
        if (i==1076)
        {
            array_map[i] = 'O';
        }
        if (i==1077)
        {
            array_map[i] = 'M';
        }
        if (i==1078)
        {
            array_map[i] = 'P';
        }
        if (i==1228)
        {
            array_map[i] = '1';
        }
        if (i == 1217 || i == 1237)
        {
            array_map[i] = '|';
        }
        if (i == 1367 || i == 1387)
        {
            array_map[i] = '|';
        }
        if (i >= 1518 && i < 1537)
        {
            array_map[i] = '_';
        }

        //------------------------------ ตึกคณิต

        if (i >= 664 && i < 683)
        {
            array_map[i] = '_';
        }
        if (i == 813 || i == 833)
        {
            array_map[i] = '|';
        }

        if (i == 963 || i == 983)
        {
            array_map[i] = '|';
        }

        if (i == 1113 || i == 1133)
        {
            array_map[i] = '|';
        }

        if (i == 1121)
        {
            array_map[i] = 'M';
        }
        if (i == 1122)
        {
            array_map[i] = 'A';
        }
        if (i == 1123)
        {
            array_map[i] = 'T';
        }
        if (i == 1124)
        {
            array_map[i] = 'H';
        }
        if (i==1274)
        {
            array_map[i] = '2';
        }
        if (i == 1263 || i == 1283)
        {
            array_map[i] = '|';
        }

        if (i >= 1414 && i < 1433)
        {
            array_map[i] = '_';
        }

        //--------------------------- สถิติ

        if (i >= 1729 && i < 1743)
        {
            array_map[i] = '_';
        }
        if (i == 1878 || i == 1893)
        {
            array_map[i] = '|';
        }

        if (i == 2028 || i == 2043)
        {
            array_map[i] = '|';
        }

        if (i==2034)
        {
            array_map[i] = 'S';
        }
        if (i==2035)
        {
            array_map[i] = 'T';
        }
        if (i==2036)
        {
            array_map[i] = 'A';
        }
        if (i==2037)
        {
            array_map[i] = 'T';
        }
        if (i==2187)
        {
            array_map[i] = '3';
        }
        if (i == 2178 || i == 2193)
        {
            array_map[i] = '|';
        }        
        if (i >= 2329 && i < 2343)
        {
            array_map[i] = '_';
        }

    //----------------------------- ตึกธรณีและอัญ
        if (i >= 2718 && i < 2738)
        {
            array_map[i] = '_';
        }
        if (i == 2867 || i == 2888)
        {
            array_map[i] = '|';
        }
        
        if (i == 3017 || i == 3038)
        {
            array_map[i] = '|';
        }
        
        if (i == 3167 || i == 3188)
        {
            array_map[i] = '|';
        }
        
        if (i==3174)
        {
            array_map[i] = 'G';
        }
        if (i==3175)
        {
            array_map[i] = 'E';
        }
        if (i==3176)
        {
            array_map[i] = 'O';
        }
        if (i==3177)
        {
            array_map[i] = '&';
        }
        if (i==3178)
        {
            array_map[i] = 'G';
        }
        if (i==3179)
        {
            array_map[i] = 'E';
        }
        if (i==3180)
        {
            array_map[i] = 'M';
        }
        if (i==3330)
        {
            array_map[i] = '4';
        }
        if (i == 3317 || i == 3338)
        {
            array_map[i] = '|';
        }
        
        if (i == 3467 || i == 3488)
        {
            array_map[i] = '|';
        }
        
        if (i >= 3618 && i < 3638)
        {
            array_map[i] = '_';
        }

        //------------------------------------------- ตึกชีวะ
        if (i >= 2596 && i < 2615)
        {
            array_map[i] = '_';
        }
        if (i == 2745 || i == 2765)
        {
            array_map[i] = '|';
        }
        if (i == 2895 || i == 2915)
        {
            array_map[i] = '|';
        }
        if (i == 3045 || i == 3065)
        {
            array_map[i] = '|';
        }
        if (i == 3054)
        {
            array_map[i] = 'B';
        }
        if (i == 3055)
        {
            array_map[i] = 'I';
        }
        if (i == 3056)
        {
            array_map[i] = 'O';
        }
        if (i==3206)
        {
            array_map[i] = '5';
        }
        if (i == 3195 || i == 3215)
        {
            array_map[i] = '|';
        }
        
        if (i >= 3346 && i < 3365)
        {
            array_map[i] = '_';
        }

        //---------------------------------------------- ตึกเคมี
        if (i >= 2774 && i < 2793)
        {
            array_map[i] = '_';
        }
        if (i == 2923 || i == 2943)
        {
            array_map[i] = '|';
        }
        if (i == 3073 || i == 3093)
        {
            array_map[i] = '|';
        }
        if (i == 3223 || i == 3243)
        {
            array_map[i] = '|';
        }

        if (i==3231)
        {
            array_map[i] = 'C';
        }
        if (i==3232)
        {
            array_map[i] = 'H';
        }
        if (i==3233)
        {
            array_map[i] = 'E';
        }
        if (i==3234)
        {
            array_map[i] = 'M';
        }
        if (i==3384)
        {
            array_map[i] = '6';
        }
        if (i == 3373 || i == 3393)
        {
            array_map[i] = '|';
        }
        if (i == 3523 || i == 3543)
        {
            array_map[i] = '|';
        }
        if (i >= 3674 && i < 3693)
        {
            array_map[i] = '_';
        }

        //------------------------------------------------- ตึกฟิสิก
        if (i >= 2953 && i < 2977)
        {
            array_map[i] = '_';
        }
        if (i == 3102 || i == 3127)
        {
            array_map[i] = '|';
        }
        if (i == 3252 || i == 3277)
        {
            array_map[i] = '|';
        }
        if (i == 3402 || i == 3427)
        {
            array_map[i] = '|';
        }

        if (i==3413)
        {
            array_map[i] = 'P';
        }
        if (i==3414)
        {
            array_map[i] = 'H';
        }
        if (i==3415)
        {
            array_map[i] = 'Y';
        }
        if (i==3416)
        {
            array_map[i] = 'S';
        }
        if (i==3566)
        {
            array_map[i] = '7';
        }
        if (i == 3552 || i == 3577)
        {
            array_map[i] = '|';
        }
        if (i == 3702 || i == 3727)
        {
            array_map[i] = '|';
        }
        if (i >= 3853 && i < 3877)
        {
            array_map[i] = '_';
        }        

        //------------------------------------- เคมีอุต

        if (i >= 1480 && i < 1499)
        {
            array_map[i] = '_';
        }
        if (i == 1629 || i == 1649)
        {
            array_map[i] = '|';
        }
        if (i == 1779 || i == 1799)
        {
            array_map[i] = '|';
        }
        if (i == 1929 || i == 1949)
        {
            array_map[i] = '|';
        }
        if (i == 1935)
        {
            array_map[i] = 'I';
        }
        if (i == 1936)
        {
            array_map[i] = 'n';
        }
        if (i == 1937)
        {
            array_map[i] = 's';
        }
        if (i == 1938)
        {
            array_map[i] = '.';
        }
        if (i == 1939)
        {
            array_map[i] = ' ';
        }
        if (i == 1940)
        {
            array_map[i] = 'C';
        }
        if (i == 1941)
        {
            array_map[i] = 'H';
        }
        if (i == 1942)
        {
            array_map[i] = 'E';
        }
        if (i == 1943)
        {
            array_map[i] = 'M';
        }
        if (i==2093)
        {
            array_map[i] = '8';
        }
        if (i == 2079 || i == 2099)
        {
            array_map[i] = '|';
        }
        
        if (i >= 2230 && i < 2249)
        {
            array_map[i] = '_';
        }


        //------------------------------------------------------------------------------------------------------------------------------
        //______________________________________________ ถนนในแกน Y
        
        if (i % 150 == 10||i % 150 == 15)
        {
            array_map[i] = '0';
        }
        if (i % 150 == 11||i % 150 == 12||i % 150 == 13||i % 150 == 14)
        {
            array_map[i] = ' ';
        }
        if (i % 150 == 95||i % 150 == 100)
        {
            array_map[i] = '0';
        }
        if (i % 150 == 96||i % 150 == 97||i % 150 == 98||i % 150 == 99)
        {
            array_map[i] = ' ';
        }

        //______________________________________________ ถนนในแกน X

        if (i >= 466 && i <=544)
        {
            array_map[i] = '0';
        }
        if (i >= 161 && i <=249)
        {
            array_map[i] = '0';
        }
        if (i >= 316 && i <=394)
        {
            array_map[i] = ' ';
        }
        //------------------------------
        if (i >= 3916 && i <= 3995)
        {
            array_map[i] = '0';
        }
        if (i >= 4066 && i <=4146)
        {
            array_map[i] = ' ';
        }
        if (i >= 4211 && i <4301)
        {
            array_map[i] = '0';
        }
        //-----------------------------
        if (i >= 2500 && i <2550)
        {
            array_map[i] = '0';
        }
        if (i >= 2650 && i <2700)
        {
            array_map[i] = ' ';
        }
        if (i >= 2800 && i <2850)
        {
            array_map[i] = '0';
        }

        //------------------------------ สิ่งที่ต้องทับ ถนน
        if (i % 150 == 10||i % 150 == 15)
        {
            array_map[i] = '0';
            if (i == 315)
            {
                array_map[i] = ' ';
            }
        }
        if (i % 150 == 11||i % 150 == 12||i % 150 == 13||i % 150 == 14)
        {
            array_map[i] = ' ';
        }
        if (i % 150 == 95||i % 150 == 100)
        {
            array_map[i] = '0';
            if (i == 395)
            {
                array_map[i] = ' ';
            }
        }
        if (i % 150 == 96||i % 150 == 97||i % 150 == 98||i % 150 == 99)
        {
            array_map[i] = ' ';
        }
        if (i==2650)
        {
            array_map[i] = ' ';   
        }
        if (i==4065)
        {
            array_map[i] = ' ';   
        }
        if (i==4145)
        {
            array_map[i] = ' ';   
        }

        //--------------------------------------------------------------------------------------------------------------------------- ลองเดี๋ยวลบ

    }

    array_map[i] = '\0';

    //printf("%s\n",array_map);

    return 0;
}