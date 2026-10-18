/* speed.exe 004d9010 FUN_004d9010; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d9010(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(undefined **)(iVar1 + 0xc) = &DAT_00914380;
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(undefined **)(iVar1 + 0x10) = &DAT_009143c0;
      _DAT_009143fc = 1;
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(undefined **)(iVar1 + 0xc) = &DAT_00914380;
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(undefined **)(iVar1 + 0x10) = &DAT_009143c0;
      _DAT_009143fc = 1;
    }
  }
  return;
}

