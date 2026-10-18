/* speed.exe 0066ec50 FUN_0066ec50; analysis pseudocode, not buildable source.
 * calls 00668750 FUN_00668750
 */

int __thiscall FUN_0066ec50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00668750(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

