/* speed.exe 006f82f0 FUN_006f82f0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006f6bc0 FUN_006f6bc0
 * calls 006ee930 FUN_006ee930
 * calls 006f6390 FUN_006f6390
 */

void __fastcall FUN_006f82f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ee2d;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0xe;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b084c;
  param_1[2] = &PTR_LAB_008b0844;
  param_1[0xb] = &PTR_LAB_008b0830;
  *puVar1 = &PTR_LAB_008b0814;
  local_4 = 3;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
    param_1[0x11] = 0;
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006f6bc0();
  if (param_1 == (undefined4 *)0xffffffc0) {
    param_1 = (undefined4 *)0x0;
  }
  FUN_006f6390(param_1);
  local_4 = 0xffffffff;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

