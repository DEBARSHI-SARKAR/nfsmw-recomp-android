/* speed.exe 00589fc0 FUN_00589fc0; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00589fc0(int param_1)

{
  int iVar1;
  
  FUN_00516c90(0x950ad1c2,*(undefined4 *)(param_1 + 0x10),0);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x24))(*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) != 0) {
      thunk_FUN_007c7250(*(int *)(iVar1 + 0x3c));
    }
    thunk_FUN_007c7250(iVar1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  return;
}

