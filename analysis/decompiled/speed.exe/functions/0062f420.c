/* speed.exe 0062f420 FUN_0062f420; analysis pseudocode, not buildable source.
 * calls 00629a90 FUN_00629a90
 */

undefined4 * __thiscall FUN_0062f420(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a7b20;
  uVar1 = FUN_00629a90(param_1,param_2);
  param_1[2] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

