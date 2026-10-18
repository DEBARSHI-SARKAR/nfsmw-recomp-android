/* speed.exe 005f1830 FUN_005f1830; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005ee0f0 FUN_005ee0f0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005f1830(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x24) + iVar2) != 0) {
          FUN_005ee0f0();
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x40;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_004655f0(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

