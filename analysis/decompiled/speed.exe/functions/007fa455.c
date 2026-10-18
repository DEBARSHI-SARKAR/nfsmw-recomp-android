/* speed.exe 007fa455 FUN_007fa455; analysis pseudocode, not buildable source.
 * calls 007f9b15 FUN_007f9b15
 */

void __thiscall FUN_007fa455(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007f9b15();
  *param_2 = uVar1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

