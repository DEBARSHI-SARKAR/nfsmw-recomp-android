/* speed.exe 005d94d0 FUN_005d94d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005d94d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (1 < *(uint *)(iVar1 + 0x1c)) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) - 1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_00459f80(iVar1,*(int *)(DAT_0090dcbc + 4) + 0x38);
  }
  return;
}

