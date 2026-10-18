/* speed.exe 0066ec90 FUN_0066ec90; analysis pseudocode, not buildable source.
 * calls 00668850 FUN_00668850
 */

int __thiscall FUN_0066ec90(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00668850(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

