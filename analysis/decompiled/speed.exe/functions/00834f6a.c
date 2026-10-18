/* speed.exe 00834f6a FUN_00834f6a; analysis pseudocode, not buildable source.
 * calls 00834e12 FUN_00834e12
 */

undefined4 * __thiscall FUN_00834f6a(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_17 = 0;
  local_1c = param_2;
  local_18 = 1;
  FUN_00834e12(&local_1c);
  return param_1;
}

