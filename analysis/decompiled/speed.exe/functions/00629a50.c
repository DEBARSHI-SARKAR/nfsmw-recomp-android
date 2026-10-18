/* speed.exe 00629a50 FUN_00629a50; analysis pseudocode, not buildable source.
 * calls 00620ff0 FUN_00620ff0
 */

int __thiscall FUN_00629a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00620ff0(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

