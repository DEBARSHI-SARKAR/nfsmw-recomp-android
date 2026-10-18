/* speed.exe 006235d0 FUN_006235d0; analysis pseudocode, not buildable source.
 * calls 0050d170 FUN_0050d170
 * calls 0050af20 FUN_0050af20
 */

undefined4 * __fastcall FUN_006235d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7094;
  FUN_0050af20();
  FUN_0050d170();
  ExceptionList = pvStack_c;
  return param_1;
}

