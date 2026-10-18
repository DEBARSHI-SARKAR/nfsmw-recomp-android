/* speed.exe 00634d00 FUN_00634d00; analysis pseudocode, not buildable source.
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_00634d00(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00878b4f;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0xb;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a7b9c;
  *puVar1 = &PTR_LAB_008a7bd4;
  DAT_009203c0 = DAT_009203c0 + -1;
  local_4 = 1;
  if (DAT_009203c0 == 0) {
    (**(code **)(*DAT_009203b4 + 4))();
  }
  if ((undefined4 *)param_1[0x613] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x613])(1);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_008a7b50;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

