/* speed.exe 005ceef0 FUN_005ceef0; analysis pseudocode, not buildable source.
 * calls 005c80d0 FUN_005c80d0
 * calls 005d1f90 FUN_005d1f90
 * calls 0045ed50 FUN_0045ed50
 */

void __thiscall FUN_005ceef0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    for (; uVar1 < param_3; uVar1 = uVar1 + 0x10) {
      FUN_005d1f90();
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar2 = iVar2 * 0x10 + param_1;
    }
    iVar2 = (((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 - param_3) + iVar2;
    if (iVar2 != 0) {
      FUN_0045ed50(param_2,param_3,iVar2);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((int)(param_3 - param_2) >> 4) * -0x20;
  }
  FUN_005c80d0();
  return;
}

