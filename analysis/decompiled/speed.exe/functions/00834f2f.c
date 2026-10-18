/* speed.exe 00834f2f FUN_00834f2f; analysis pseudocode, not buildable source.
 * calls 00834e12 FUN_00834e12
 */

undefined4 * __thiscall FUN_00834f2f(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 == (undefined4 *)0x0) && (param_3 != '\0')) {
    local_1c = 0;
    local_17 = 0;
    param_2 = &local_1c;
    local_18 = 1;
  }
  FUN_00834e12(param_2);
  return param_1;
}

