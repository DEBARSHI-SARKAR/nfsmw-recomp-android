/* speed.exe 0068c690 FUN_0068c690; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 * __thiscall
FUN_0068c690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087be38;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_008ab148;
  uVar1 = FUN_00460bf0(param_2);
  param_1[2] = param_3;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 3) = param_4;
  ExceptionList = local_c;
  return param_1;
}

