/* speed.exe 00431ae0 FUN_00431ae0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 0076e220 FUN_0076e220
 * calls 00431990 FUN_00431990
 * calls 005d5a50 FUN_005d5a50
 * calls 006ee930 FUN_006ee930
 * calls 0045a430 FUN_0045a430
 * calls 00452880 FUN_00452880
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00431ae0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00868582;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00891a80;
  param_1[2] = &PTR_LAB_00891a78;
  *puVar1 = &PTR_LAB_008919a0;
  param_1[0x15] = &PTR_LAB_00891998;
  local_4 = 4;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
  }
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2e])(1);
  }
  if (param_1[0x2b] != 0) {
    FUN_006e9c90(param_1[0x2b]);
  }
  iVar2 = param_1[0x3a];
  if (iVar2 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar2,0x14,0);
  }
  local_4._0_1_ = 3;
  FUN_0076e220();
  local_4._0_1_ = 2;
  FUN_0076e220();
  local_4._0_1_ = 1;
  FUN_00431990();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

