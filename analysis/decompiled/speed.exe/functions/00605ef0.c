/* speed.exe 00605ef0 FUN_00605ef0; analysis pseudocode, not buildable source.
 */

void FUN_00605ef0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 1;
  puVar1[1] = (uint)(param_2 != 0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

