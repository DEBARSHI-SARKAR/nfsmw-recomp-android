/* speed.exe 00409d20 FUN_00409d20; analysis pseudocode, not buildable source.
 * calls 004099e0 FUN_004099e0
 * calls 00403e50 FUN_00403e50
 */

undefined4 * __thiscall
FUN_00409d20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004099e0(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890dec;
  FUN_00403e50(param_4,param_5,0x41f00000);
  ExceptionList = local_c;
  return param_1;
}

