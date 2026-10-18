/* speed.exe 005e3b00 FUN_005e3b00; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 0045a430 FUN_0045a430
 * calls 00659260 FUN_00659260
 */

void __fastcall FUN_005e3b00(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00875088;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a39c4;
  local_4 = 0;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  iVar1 = param_1[2];
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_008a39b8;
  if (iVar1 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    param_1[2] = 0;
  }
  param_1[1] = 0;
  ExceptionList = pvStack_c;
  return;
}

