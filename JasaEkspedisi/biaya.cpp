#include "biaya.h"

biaya::biaya() {}

void biaya::getbiayaPacking(int biaya_packing)
{
    this->biaya_packing=biaya_packing;
}

void biaya::getbiayaAsuransi(int biaya_asuransi)
{
    this->biaya_asuransi=biaya_asuransi;
}

int biaya::TotalBiaya()
{
    return this->biaya_packing+this->biaya_asuransi;
}
