/* speed.exe 0045b000 FUN_0045b000; analysis pseudocode, not buildable source.
 * calls 00454e70 FUN_00454e70
 */

undefined4 * __thiscall FUN_0045b000(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    FUN_00454e70(param_2);
  }
  return param_1;
}

