/* speed.exe 00421cf0 FUN_00421cf0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 * calls 00418d90 FUN_00418d90
 * calls 0041d220 FUN_0041d220
 */

undefined4 * __fastcall FUN_00421cf0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867f98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418d90();
  *param_1 = &PTR_FUN_008914cc;
  param_1[2] = &PTR_LAB_008914c4;
  local_4 = 0;
  uVar1 = FUN_005d59f0();
  param_1[0x12] = uVar1;
  uVar1 = FUN_005d59f0();
  param_1[0x14] = uVar1;
  uVar1 = FUN_005d59f0();
  param_1[0x13] = uVar1;
  uVar1 = FUN_005d59f0();
  param_1[0x15] = uVar1;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x12] + 4))();
  (**(code **)(*piVar2 + 0x70))();
  FUN_005cc240("AIAction");
  uVar1 = FUN_0041d220(param_1,&LAB_00407390,0);
  param_1[0x16] = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

