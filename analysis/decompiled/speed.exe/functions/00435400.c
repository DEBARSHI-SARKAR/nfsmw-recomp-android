/* speed.exe 00435400 FUN_00435400; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 */

undefined4 * __thiscall FUN_00435400(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_00892b20;
  uVar1 = FUN_0041b8e0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[5] = param_2;
  return param_1;
}

