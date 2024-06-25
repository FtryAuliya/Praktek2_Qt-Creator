#ifndef BIAYA_H
#define BIAYA_H

class biaya
{
public:
    biaya();

    void getbiayaPacking(int biaya_packing);
    void getbiayaAsuransi(int biaya_asuransi);
    int TotalBiaya();

private:
    int biaya_packing;
    int biaya_asuransi;
};

#endif // BIAYA_H
