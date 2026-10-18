/* speed.exe 004fb6e0 FUN_004fb6e0; analysis pseudocode, not buildable source.
 * calls 004fb650 FUN_004fb650
 * calls 004fb600 FUN_004fb600
 */

void __thiscall FUN_004fb6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004fb650(*(int *)(param_1 + 0x10));
    param_1 = extraout_EDX;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  FUN_004fb600(param_2,param_3);
  return;
}

