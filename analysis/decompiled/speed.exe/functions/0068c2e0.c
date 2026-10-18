/* speed.exe 0068c2e0 FUN_0068c2e0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 * __thiscall
FUN_0068c2e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087bdd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_008ab110;
  uVar1 = FUN_00460bf0(param_2);
  param_1[2] = param_3;
  param_1[1] = uVar1;
  param_1[3] = param_4;
  param_1[5] = param_6;
  param_1[4] = param_5;
  *(undefined1 *)(param_1 + 6) = param_7;
  ExceptionList = local_c;
  return param_1;
}

