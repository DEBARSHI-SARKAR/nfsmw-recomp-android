/* speed.exe 0062df40 FUN_0062df40; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_0062df40(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a7b08;
  param_1[2] = param_2;
  local_4 = 0;
  if (DAT_009885c8 != (int *)0x0) {
    if (param_2 != 0) {
      (**(code **)(*DAT_009885c8 + 0x30))();
      ExceptionList = local_c;
      return param_1;
    }
    (**(code **)(*DAT_009885c8 + 0x34))();
  }
  ExceptionList = local_c;
  return param_1;
}

