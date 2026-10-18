/* speed.exe 004f5200 FUN_004f5200; analysis pseudocode, not buildable source.
 * calls 004eaff0 FUN_004eaff0
 */

undefined4 * __thiscall FUN_004f5200(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004eaff0();
  *param_1 = &PTR_LAB_008992e4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[8] = param_3;
  return param_1;
}

