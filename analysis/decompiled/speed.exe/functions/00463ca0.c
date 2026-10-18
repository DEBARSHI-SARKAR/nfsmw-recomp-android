/* speed.exe 00463ca0 FUN_00463ca0; analysis pseudocode, not buildable source.
 */

void FUN_00463ca0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = iVar1 + -1;
  *(undefined4 **)(param_1 + 0x10) = param_2;
  return;
}

