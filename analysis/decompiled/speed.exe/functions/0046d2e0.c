/* speed.exe 0046d2e0 FUN_0046d2e0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0046d2e0(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = *(short *)(param_1 + 0x14) + -1;
  if (3 < iVar2) {
    pfVar1 = (float *)(iVar2 * 0x84 + -0x4c + param_1);
    do {
      if (pfVar1[0x21] < param_2 != (pfVar1[0x21] == param_2)) {
        return iVar2;
      }
      if (*pfVar1 < param_2 != (*pfVar1 == param_2)) {
        return iVar2 + -1;
      }
      if (pfVar1[-0x21] < param_2 != (pfVar1[-0x21] == param_2)) {
        return iVar2 + -2;
      }
      if (pfVar1[-0x42] < param_2 != (pfVar1[-0x42] == param_2)) {
        return iVar2 + -3;
      }
      iVar2 = iVar2 + -4;
      pfVar1 = pfVar1 + -0x84;
    } while (3 < iVar2);
  }
  if (0 < iVar2) {
    pfVar1 = (float *)(iVar2 * 0x84 + 0x38 + param_1);
    while (*pfVar1 < param_2 == (*pfVar1 == param_2)) {
      iVar2 = iVar2 + -1;
      pfVar1 = pfVar1 + -0x21;
      if (iVar2 < 1) {
        return iVar2;
      }
    }
  }
  return iVar2;
}

