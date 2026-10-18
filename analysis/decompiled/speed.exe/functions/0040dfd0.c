/* speed.exe 0040dfd0 FUN_0040dfd0; analysis pseudocode, not buildable source.
 * calls 004040f0 FUN_004040f0
 */

int __thiscall FUN_0040dfd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004040f0(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

