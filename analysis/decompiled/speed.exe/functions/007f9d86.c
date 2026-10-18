/* speed.exe 007f9d86 FUN_007f9d86; analysis pseudocode, not buildable source.
 * calls 007f9b15 FUN_007f9b15
 */

void __thiscall FUN_007f9d86(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007f9b15();
  *param_2 = uVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

