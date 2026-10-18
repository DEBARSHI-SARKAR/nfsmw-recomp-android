/* speed.exe 007f9ca9 FUN_007f9ca9; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f9ca9(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_2;
  *(int **)(param_1 + 4) = param_2;
  param_2[1] = (int)puVar1;
  *param_2 = param_1;
  return;
}

