/* speed.exe 0052f660 FUN_0052f660; analysis pseudocode, not buildable source.
 * calls 0052f500 FUN_0052f500
 * calls 00514e20 FUN_00514e20
 * calls 005152a0 FUN_005152a0
 * calls 00515310 FUN_00515310
 * calls 00525050 FUN_00525050
 */

undefined4 * __thiscall
FUN_0052f660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052f500(8,param_3,param_4,param_5,param_6,0);
  param_1[0xe] = 0xffffffff;
  local_4 = 0;
  *param_1 = &PTR_FUN_0089d784;
  param_1[0xf] = param_2;
  fVar1 = (float10)FUN_005152a0(param_1[3]);
  param_1[6] = (float)fVar1;
  fVar1 = (float10)FUN_00515310(param_1[3]);
  param_1[7] = (float)fVar1;
  FUN_00525050(param_1[0xf],*param_4,param_4[1]);
  FUN_00514e20(param_1[0xf],param_6);
  ExceptionList = local_c;
  return param_1;
}

