/* speed.exe 0066ec70 FUN_0066ec70; analysis pseudocode, not buildable source.
 * calls 006687d0 FUN_006687d0
 */

int __thiscall FUN_0066ec70(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006687d0(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

