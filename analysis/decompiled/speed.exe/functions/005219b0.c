/* speed.exe 005219b0 FUN_005219b0; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 * __thiscall FUN_005219b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00589600(0x14,param_2,1,1);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089c9a4;
  FUN_00460ca0(param_1 + 99,param_2,0x15);
  ExceptionList = local_c;
  return param_1;
}

