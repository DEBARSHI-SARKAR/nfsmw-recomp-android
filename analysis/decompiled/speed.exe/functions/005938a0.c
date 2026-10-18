/* speed.exe 005938a0 FUN_005938a0; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 00593090 FUN_00593090
 */

undefined4 * __thiscall
FUN_005938a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  FUN_00593090(*param_2,param_3,param_4,param_5);
  param_1[0xb] = &PTR_LAB_0089d210;
  *param_1 = &PTR_FUN_0089d21c;
  ExceptionList = local_c;
  return param_1;
}

