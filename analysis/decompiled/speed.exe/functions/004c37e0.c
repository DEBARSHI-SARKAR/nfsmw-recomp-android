/* speed.exe 004c37e0 FUN_004c37e0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004c0be0 FUN_004c0be0
 */

undefined4 * __fastcall FUN_004c37e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_00896a14;
  uVar1 = FUN_005cc240(&DAT_00894b1c,param_1,0);
  uVar1 = FUN_004c0be0(param_1,&LAB_004b9810,uVar1);
  param_1[0xb] = uVar1;
  param_1[10] = 0;
  param_1[9] = 0;
  return param_1;
}

