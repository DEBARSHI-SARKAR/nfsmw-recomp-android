/* speed.exe 004b08d0 FUN_004b08d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_004b08d0(float *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_008ef998) {
    pfVar1 = (float *)&DAT_00914568;
    do {
      if (SQRT((pfVar1[-2] - *param_1) * (pfVar1[-2] - *param_1) +
               (pfVar1[-1] - param_1[1]) * (pfVar1[-1] - param_1[1]) +
               (*pfVar1 - param_1[2]) * (*pfVar1 - param_1[2])) < param_2) {
        return (&DAT_009142d0)[iVar2];
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 4;
    } while (iVar2 < DAT_008ef998);
  }
  return 0;
}

