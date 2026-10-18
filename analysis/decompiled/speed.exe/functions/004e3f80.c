/* speed.exe 004e3f80 FUN_004e3f80; analysis pseudocode, not buildable source.
 * calls 004e1fc0 FUN_004e1fc0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_004e3f80(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_004e1fc0();
    if (*(undefined4 **)(param_1 + 0x28) == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))(0);
    }
    thunk_FUN_007c7250(uVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_004ac0e0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}

