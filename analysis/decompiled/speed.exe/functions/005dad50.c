/* speed.exe 005dad50 FUN_005dad50; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

undefined4 * __thiscall FUN_005dad50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00452430();
    *param_1 = uVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

