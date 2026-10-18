/* speed.exe 0081fe64 FUN_0081fe64; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081fe64(uint param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_009c205f != 0) {
    pfVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)*(byte *)(*(int *)(((int)&DAT_009c226c - (int)param_2) + (int)pfVar1) +
                                (param_1 >> 8 & 0xff)) * _DAT_00899dd0;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 < (int)(uint)DAT_009c205f);
  }
  if (DAT_009c1fdc == 3) {
    param_2[5] = 0.0;
  }
  return;
}

