/*
* @Author: p_h_a_000
* @Date:   2016-03-21 12:13:22
* @Last Modified by:   Asus
* @Last Modified time: 2016-04-28 22:51:55
*/

#include "Pro_head.h"


void distance(char array_map[] , int path[])
{
    char *array_com_to_math[MAX_DISTANCE], *array_gem_to_bio[MAX_DISTANCE], *array_bio_to_chem[MAX_DISTANCE]
    , *array_phy_to_ic[MAX_DISTANCE], *array_com_to_gem[MAX_DISTANCE], *array_chem_to_phy[MAX_DISTANCE]
    , *array_stat_to_phy[MAX_DISTANCE], *array_math_to_stat[MAX_DISTANCE], *array_stat_to_ic[MAX_DISTANCE];

    int n_com_to_math = 0, n_gem_to_bio = 0, n_bio_to_chem = 0, n_phy_to_ic = 0, n_com_to_gem = 0, n_chem_to_phy = 0
                                          , n_stat_to_phy = 0, n_math_to_stat = 0, n_stat_to_ic = 0;


    for (i = 326; i <= 373 ; i++) {
        array_com_to_math[n_com_to_math] = &array_map[i];
        n_com_to_math++;
    }
    //-----------------------------------------------------------------------
    for (i = 4075; i <= 4103 ; i++) {
        array_gem_to_bio[n_gem_to_bio] = &array_map[i];
        n_gem_to_bio++;
    }
    //-----------------------------------------------------------------------
    for (i = 4104; i <= 4133 ; i++) {
        array_bio_to_chem[n_bio_to_chem] = &array_map[i];
        n_bio_to_chem++;
    }

    //-----------------------------------------------------------------------
    for (i = 2649; i <= 2690 ; i++) {
        array_phy_to_ic[n_phy_to_ic] = &array_map[i];
        n_phy_to_ic++;
    }
    for (i = 2648; i <= 500 * 7; i += 150) {
        array_phy_to_ic[n_phy_to_ic] = &array_map[i];
        n_phy_to_ic++;
    }
    //-----------------------------------------------------------------------
    for (i = 312; i <= 325 ; i++) {
        array_com_to_gem[n_com_to_gem] = &array_map[i];
        n_com_to_gem++;
    }
    for (i = 462; i <= 462 * 9; i += 150) {
        array_com_to_gem[n_com_to_gem] = &array_map[i];
        n_com_to_gem++;
    }
    for (i = 4063; i <= 4075 ; i++) {
        array_com_to_gem[n_com_to_gem] = &array_map[i];
        n_com_to_gem++;
    }

    //-----------------------------------------------------------------------
    for (i = 4133; i <= 4148 ; i++) {
        array_chem_to_phy[n_chem_to_phy] = &array_map[i];
        n_chem_to_phy++;
    }
    for (i = 3998; i >= 3450; i -= 150) {
        array_chem_to_phy[n_chem_to_phy] = &array_map[i];
        n_chem_to_phy++;
    }
    //-----------------------------------------------------------------------
    for (i = 3398; i >= 2000; i -= 150) {
        array_stat_to_phy[n_stat_to_phy] = &array_map[i];
        n_stat_to_phy++;
    }
    //-----------------------------------------------------------------------
    for (i = 374; i <= 398 ; i++) {
        array_math_to_stat[n_math_to_stat] = &array_map[i];
        n_math_to_stat++;
    }
    for (i = 548; i <= 548 * 4; i += 150) {
        array_math_to_stat[n_math_to_stat] = &array_map[i];
        n_math_to_stat++;
    }
    //-----------------------------------------------------------------------
    for (i = 2048; i <= 548 * 5; i += 150) {
        array_stat_to_ic[n_stat_to_ic] = &array_map[i];
        n_stat_to_ic++;
    }
    for (i = 2649; i <= 2690 ; i++) {
        array_stat_to_ic[n_stat_to_ic] = &array_map[i];
        n_stat_to_ic++;
    }

    /*int count = strlen(path);
    int i;

    /*for (i = 0; < count - 2; i++){//ทำตามจำนวนจุดทั้งหมด -2
        if (path[i] ==)
    }*/
}
