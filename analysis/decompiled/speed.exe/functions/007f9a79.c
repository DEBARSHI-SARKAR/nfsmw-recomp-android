/* speed.exe 007f9a79 FUN_007f9a79; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f9a79(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  (**(code **)(*param_2 + 4))(param_1,param_3);
  return;
}

