/* speed.exe 00545250 FUN_00545250; analysis pseudocode, not buildable source.
 * calls 0059bc40 FUN_0059bc40
 * calls 00528f30 FUN_00528f30
 */

undefined4 * __thiscall FUN_00545250(undefined4 *param_1,int param_2)

{
  bool bVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ff18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_0089e52c;
  bVar1 = *(int *)(param_2 + 8) != 0;
  local_4 = 0;
  *(bool *)(param_1 + 0x52) = bVar1;
  if (bVar1) {
    param_1[0x48] = 0xffffae40;
    param_1[0x49] = 0xffae40;
  }
  else {
    param_1[0x48] = 0xffffffff;
    param_1[0x49] = 0xffffff;
  }
  FUN_00528f30();
  ExceptionList = local_c;
  return param_1;
}

