/* speed.exe 00411700 FUN_00411700; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 006ee930 FUN_006ee930
 * calls 00664cc0 FUN_00664cc0
 * calls 00452880 FUN_00452880
 * calls 0045a430 FUN_0045a430
 * calls 006f8180 FUN_006f8180
 */

void __fastcall FUN_00411700(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867b48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089100c;
  param_1[2] = &PTR_LAB_00891004;
  param_1[0x12] = &PTR_FUN_00891000;
  local_4 = 0;
  FUN_006f8180(param_1 + 0x12);
  if (param_1[0x19] != 0) {
    FUN_00664cc0(param_1[0x19]);
    param_1[0x19] = 0;
  }
  iVar1 = param_1[0x1a];
  if (iVar1 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f9c;
  param_1[2] = &PTR_LAB_00890f94;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

