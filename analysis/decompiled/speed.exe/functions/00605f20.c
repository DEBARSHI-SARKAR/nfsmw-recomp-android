/* speed.exe 00605f20 FUN_00605f20; analysis pseudocode, not buildable source.
 */

void FUN_00605f20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 2;
  puVar1[1] = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

