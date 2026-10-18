/* speed.exe 006a43e0 FUN_006a43e0; analysis pseudocode, not buildable source.
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_006a43e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087c98f;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008aba2c;
  param_1[2] = &PTR_LAB_008aba24;
  *puVar1 = &PTR_LAB_008aba10;
  local_4 = 1;
  FUN_006e9c90(param_1[0x3d]);
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 0x10))(0,0);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

