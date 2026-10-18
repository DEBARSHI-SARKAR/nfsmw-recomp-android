/* speed.exe 00520430 FUN_00520430; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 0056bc10 FUN_0056bc10
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 * __thiscall
FUN_00520430(undefined4 *param_1,undefined1 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00589600(0xc,param_4,param_5,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089c4c4;
  *(undefined1 *)(param_1 + 99) = param_2;
  param_1[7] = 0xc2fa0000;
  if (param_4 == 0) {
    param_4 = FUN_0056bc10(0x9700a5ad);
  }
  FUN_00460ca0(param_1 + 0x13,param_4,0x9b);
  ExceptionList = local_c;
  return param_1;
}

