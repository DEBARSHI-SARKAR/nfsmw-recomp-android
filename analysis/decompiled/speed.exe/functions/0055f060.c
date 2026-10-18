/* speed.exe 0055f060 FUN_0055f060; analysis pseudocode, not buildable source.
 * calls 007c1410 FUN_007c1410
 * calls 00557210 FUN_00557210
 */

undefined4 * __thiscall FUN_0055f060(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007c1410(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089eff8;
  FUN_00557210();
  ExceptionList = pvStack_c;
  return param_1;
}

