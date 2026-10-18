/* speed.exe 00581cb0 FUN_00581cb0; analysis pseudocode, not buildable source.
 * calls 00580660 FUN_00580660
 * calls 00454640 FUN_00454640
 * calls 0045a430 FUN_0045a430
 */

int __fastcall FUN_00581cb0(ushort *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_a8;
  int *local_a4;
  int local_94;
  int *local_90;
  int local_80;
  int *local_7c;
  int local_6c;
  int *local_68;
  int local_58;
  int *local_54;
  int local_44;
  int *local_40;
  int local_30;
  int *local_2c;
  int local_1c;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872101;
  local_c = ExceptionList;
  if ((ushort)(param_1[5] + param_1[4] + param_1[3] + param_1[2] + param_1[1] + param_1[6] +
               *param_1 + param_1[7]) == 0) {
    return 0;
  }
  iVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00454640("assault",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4 = 0;
  if (local_1c != 0) {
    iVar2 = (uint)param_1[3] * *local_18;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("damage",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 1;
  if (local_44 != 0) {
    iVar2 = iVar2 + (uint)param_1[5] * *local_40;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("hit_and_run",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 2;
  if (local_6c != 0) {
    iVar2 = iVar2 + (uint)param_1[4] * *local_68;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("off_road",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 3;
  if (local_94 != 0) {
    iVar2 = iVar2 + (uint)param_1[7] * *local_90;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("racing",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 4;
  if (local_a8 != 0) {
    iVar2 = iVar2 + (uint)param_1[1] * *local_a4;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("reckless_driving",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 5;
  if (local_30 != 0) {
    iVar2 = iVar2 + (uint)param_1[2] * *local_2c;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("resisting_arrest",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  local_4._0_1_ = 6;
  if (local_80 != 0) {
    iVar2 = iVar2 + (uint)param_1[6] * *local_7c;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00454640("speeding",0,0);
  FUN_00580660(uVar1,uVar3,uVar4);
  if (local_58 != 0) {
    iVar2 = iVar2 + (uint)*param_1 * *local_54;
  }
  FUN_0045a430();
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_0045a430();
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar2;
}

