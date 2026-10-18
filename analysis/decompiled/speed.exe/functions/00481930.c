/* speed.exe 00481930 FUN_00481930; analysis pseudocode, not buildable source.
 * calls 005d59e0 FUN_005d59e0
 * calls 006466b0 FUN_006466b0
 * calls 0047bdd0 FUN_0047bdd0
 */

void __fastcall FUN_00481930(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a82a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089520c;
  param_1[7] = &PTR_FUN_00895204;
  local_4 = 2;
  if ((int *)param_1[0xab] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xab] + 4))(1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006466b0();
  param_1[7] = &PTR___purecall_00895120;
  FUN_0047bdd0();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00894bac;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

