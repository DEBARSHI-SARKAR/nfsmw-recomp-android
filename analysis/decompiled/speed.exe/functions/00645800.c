/* speed.exe 00645800 FUN_00645800; analysis pseudocode, not buildable source.
 * calls 006442e0 FUN_006442e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00645800(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = 0;
    do {
      uVar1 = DAT_00920424;
      if (*(float *)(*(int *)(param_1 + 0x24) + 0x1c + iVar3) < _DAT_00890968) {
        *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 + 0x1c) = param_2;
        FUN_006442e0(uVar1,param_3);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  return;
}

