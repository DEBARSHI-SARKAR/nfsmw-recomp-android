/* speed.exe 004b3ed0 FUN_004b3ed0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 * calls 004e4120 FUN_004e4120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b3ed0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_007c4b80(1);
  uVar1 = FUN_004e42a0(6,uVar1);
  FUN_004e4120(uVar1);
  iVar2 = FUN_007c4b80();
  *(int *)(param_1 + 0x134) = iVar2;
  if (0 < iVar2) {
    if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *(int *)(param_1 + 0x134) = iVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  return;
}

