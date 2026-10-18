/* speed.exe 0066ec10 FUN_0066ec10; analysis pseudocode, not buildable source.
 * calls 00668650 FUN_00668650
 */

int __thiscall FUN_0066ec10(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00668650(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

