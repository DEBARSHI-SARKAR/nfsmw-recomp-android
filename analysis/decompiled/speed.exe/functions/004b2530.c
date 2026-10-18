/* speed.exe 004b2530 FUN_004b2530; analysis pseudocode, not buildable source.
 * calls 0081c886 FUN_0081c886
 * calls 0064cef0 thunk_FUN_007ec59c
 * calls 0045ce40 FUN_0045ce40
 * calls 0081c4d8 FUN_0081c4d8
 */

void __fastcall FUN_004b2530(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < *(int *)(param_1 + 0x14)) {
    FUN_0081c4d8(*(int *)(param_1 + 0x14));
    iVar1 = FUN_0045ce40();
    uVar2 = FUN_0045ce40();
    while (uVar2 < iVar1 + 0x14U) {
      thunk_FUN_007ec59c();
      uVar2 = FUN_0045ce40();
    }
    FUN_0081c886(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

