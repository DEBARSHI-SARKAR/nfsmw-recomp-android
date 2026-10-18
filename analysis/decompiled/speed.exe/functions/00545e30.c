/* speed.exe 00545e30 FUN_00545e30; analysis pseudocode, not buildable source.
 * calls 0059bc40 FUN_0059bc40
 * calls 0052a590 FUN_0052a590
 */

undefined4 * __thiscall FUN_00545e30(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ff78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e58c;
  FUN_0052a590();
  ExceptionList = pvStack_c;
  return param_1;
}

