/* speed.exe 005b40d0 FUN_005b40d0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005b40d0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x70) = param_2;
  if (param_2 <= uVar2) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2 - 1;
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    iVar1 = uVar2 - (*(uint *)(param_1 + 100) >> 1);
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x78) = iVar1 % (int)param_2;
      return iVar1 / (int)param_2;
    }
    if (1 < (int)param_2) {
      *(uint *)(param_1 + 0x78) = param_2 - -iVar1 % (int)param_2;
      return -iVar1 / (int)param_2;
    }
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x78) = uVar2;
  return uVar2;
}

