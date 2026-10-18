/* speed.exe 00629b80 FUN_00629b80; analysis pseudocode, not buildable source.
 * calls 006244c0 FUN_006244c0
 */

int __thiscall FUN_00629b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006244c0(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

