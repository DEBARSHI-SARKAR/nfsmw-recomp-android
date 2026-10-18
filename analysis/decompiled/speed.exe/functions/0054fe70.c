/* speed.exe 0054fe70 FUN_0054fe70; analysis pseudocode, not buildable source.
 * calls 0059bc40 FUN_0059bc40
 * calls 00546360 FUN_00546360
 */

undefined4 * __thiscall FUN_0054fe70(undefined4 *param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870818;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_0089e5a0;
  *(bool *)(param_1 + 0x52) = *(int *)(param_2 + 8) != 0;
  param_1[0x48] = 0xffffae40;
  param_1[0x49] = 0xffae40;
  *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24) = 0;
  local_4 = 0;
  FUN_00546360();
  ExceptionList = pvStack_c;
  return param_1;
}

