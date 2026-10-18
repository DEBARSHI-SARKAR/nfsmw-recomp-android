/* speed.exe 006f8430 FUN_006f8430; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006ee930 FUN_006ee930
 * calls 006f7d10 FUN_006f7d10
 * calls 006f64d0 FUN_006f64d0
 * calls 006fc520 FUN_006fc520
 */

void __fastcall FUN_006f8430(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087eedd;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0xe;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b08a0;
  param_1[2] = &PTR_LAB_008b0898;
  param_1[0xb] = &PTR_LAB_008b0870;
  *puVar1 = &PTR_LAB_008b0854;
  local_4 = 3;
  if (param_1[0x11] != 0) {
    (**(code **)(param_1[0xb] + 0x20))(param_1[0x11]);
    param_1[0x11] = 0;
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006f7d10();
  if (param_1 == (undefined4 *)0xffffffc0) {
    param_1 = (undefined4 *)0x0;
  }
  FUN_006f64d0(param_1);
  local_4 = 0xffffffff;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

