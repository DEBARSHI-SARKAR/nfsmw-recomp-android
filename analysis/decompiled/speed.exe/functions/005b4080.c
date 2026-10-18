/* speed.exe 005b4080 FUN_005b4080; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005b4080(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x6c) = param_2;
  if (param_2 <= uVar2) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2 - 1;
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    iVar1 = uVar2 - (*(uint *)(param_1 + 0x60) >> 1);
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x74) = iVar1 % (int)param_2;
      return iVar1 / (int)param_2;
    }
    if (1 < (int)param_2) {
      *(uint *)(param_1 + 0x74) = param_2 - -iVar1 % (int)param_2;
      return -iVar1 / (int)param_2;
    }
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x74) = uVar2;
  return uVar2;
}

