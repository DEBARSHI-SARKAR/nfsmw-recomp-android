/* speed.exe 00520af0 FUN_00520af0; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 * __thiscall
FUN_00520af0(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00589600(0x10,param_2,param_3,param_4);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089c62c;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00890978;
  }
  FUN_00460ca0(param_1 + 0x13,param_2,0x9b);
  ExceptionList = local_c;
  return param_1;
}

