/* speed.exe 0045e0d0 FUN_0045e0d0; analysis pseudocode, not buildable source.
 * calls 0045e030 FUN_0045e030
 * calls 007c66a0 __allshr
 */

uint FUN_0045e0d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = param_1 < 0;
  if ((bool)bVar3) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    bVar3 = bVar3 ^ 3;
    param_2 = -param_2;
  }
  if (param_2 >> 0xe < param_1) {
    if (param_1 == 0) {
      iVar1 = 0;
      if (param_2 != 0) {
        iVar1 = (param_2 < 1) + 0x7fffffff;
      }
    }
    else {
      iVar1 = __allshr();
      iVar1 = iVar1 << 1;
    }
    uVar2 = FUN_0045e030(iVar1);
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0x4000;
  }
  if (bVar3 == 0) {
    return uVar2;
  }
  if (bVar3 == 1) {
    return 0x8000 - uVar2;
  }
  if (bVar3 != 2) {
    return -uVar2;
  }
  return uVar2 - 0x8000;
}

