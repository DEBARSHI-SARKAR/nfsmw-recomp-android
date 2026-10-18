/* speed.exe 004b8de0 FUN_004b8de0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00659260 FUN_00659260
 * calls 0070ffa0 FUN_0070ffa0
 * calls 00452880 FUN_00452880
 */

void __fastcall FUN_004b8de0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b6e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008969b8;
  local_4 = 0;
  FUN_0070ffa0();
  iVar1 = param_1[0x25];
  if (iVar1 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    param_1[0x25] = 0;
  }
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    param_1[0x26] = 0;
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
    param_1[0x17] = 0;
  }
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
    param_1[0x16] = 0;
  }
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
    param_1[0x1f] = 0;
  }
  if (DAT_00912100 != (undefined4 *)0x0) {
    (**(code **)*DAT_00912100)(1);
  }
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

