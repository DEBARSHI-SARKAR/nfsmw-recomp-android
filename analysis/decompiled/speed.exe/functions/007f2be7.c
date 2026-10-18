/* speed.exe 007f2be7 FUN_007f2be7; analysis pseudocode, not buildable source.
 * calls 007f34a4 FUN_007f34a4
 */

void __thiscall FUN_007f2be7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007f34a4(param_2,param_3);
  param_1[0x1e] = 0;
  (**(code **)(*param_1 + 0x18))(param_3);
  return;
}

