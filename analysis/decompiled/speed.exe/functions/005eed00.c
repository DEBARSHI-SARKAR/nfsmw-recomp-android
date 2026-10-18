/* speed.exe 005eed00 FUN_005eed00; analysis pseudocode, not buildable source.
 * calls 00465280 FUN_00465280
 * calls 004655f0 FUN_004655f0
 * calls 005ee0f0 FUN_005ee0f0
 */

void __fastcall FUN_005eed00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = 0;
    do {
      if ((~*(byte *)(*(int *)(param_1 + 0x24) + 8 + iVar2) & 1) != 0) {
        FUN_005ee0f0();
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  FUN_00465280(*(undefined4 *)(param_1 + 0x4c));
  FUN_004655f0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

