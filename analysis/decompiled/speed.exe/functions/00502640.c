/* speed.exe 00502640 FUN_00502640; analysis pseudocode, not buildable source.
 * calls 005025c0 FUN_005025c0
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502640(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *local_64;
  undefined4 local_58 [22];
  
  if ((DAT_008f2860 != 0) && (DAT_0090dcbc != 0)) {
    DAT_008f2860 = 0;
    local_58[0] = 0x356f692a;
    local_58[1] = 0xa95ab5ad;
    local_58[2] = 0xb60dac69;
    local_58[3] = 0xd364e8ac;
    local_58[4] = 0x30ea58b4;
    local_58[5] = 0x35ce359c;
    local_58[6] = 0xf51bf17f;
    local_58[7] = 0xdde4b816;
    local_58[8] = 0x44c51b58;
    local_58[9] = 0x93007a08;
    local_58[10] = 0x299e454;
    local_58[0xb] = 0x47cb2ad7;
    local_58[0xc] = 0xe9faf022;
    local_58[0xd] = 0x4ff2b81c;
    local_58[0xe] = 0x96147a22;
    local_58[0xf] = 0x37b7c081;
    local_58[0x10] = 0x8412720e;
    local_58[0x11] = 0x1e7fdc6e;
    local_58[0x12] = 0x20fc956e;
    local_58[0x13] = 0xd06fc6bb;
    local_58[0x14] = 0xbf79f943;
    local_58[0x15] = 0x55eaa808;
    pfVar4 = (float *)&DAT_008f24a4;
    puVar5 = local_58;
    do {
      FUN_005025c0(*puVar5,0,0);
      fVar1 = local_64[1];
      fVar2 = local_64[2];
      fVar3 = local_64[3];
      pfVar4[-1] = *local_64 * _DAT_00899dd8;
      *pfVar4 = fVar1 * _DAT_00899dd8;
      pfVar4[1] = fVar2 * _DAT_00899dd8;
      pfVar4[2] = fVar3 * _DAT_00899dd8;
      pfVar4[6] = local_64[8];
      pfVar4[5] = local_64[5];
      pfVar4[-2] = local_64[9];
      pfVar4[-3] = local_64[4];
      pfVar4[3] = local_64[6];
      pfVar4[4] = local_64[10];
      pfVar4[7] = local_64[7];
      FUN_0045a430();
      pfVar4 = pfVar4 + 0xb;
      puVar5 = puVar5 + 1;
    } while ((int)pfVar4 < 0x8f2840);
  }
  return;
}

