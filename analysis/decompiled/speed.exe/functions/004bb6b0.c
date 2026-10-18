/* speed.exe 004bb6b0 FUN_004bb6b0; analysis pseudocode, not buildable source.
 * calls 004ab8f0 FUN_004ab8f0
 * calls 00452430 FUN_00452430
 * calls 004b8640 FUN_004b8640
 * calls 004aa9b0 FUN_004aa9b0
 * calls 0045be30 FUN_0045be30
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_004bb6b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_e8 [40];
  undefined1 local_c0 [40];
  undefined1 local_98 [20];
  undefined1 local_84 [40];
  undefined1 local_5c [20];
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b995;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_004ab8f0(local_20,0);
  local_4 = 0;
  FUN_004aa9b0(uVar1);
  local_4._0_1_ = 2;
  FUN_0045a430();
  uVar1 = FUN_004ab8f0(local_5c,1);
  local_4._0_1_ = 3;
  FUN_004aa9b0(uVar1);
  local_4._0_1_ = 5;
  FUN_0045a430();
  uVar1 = FUN_004ab8f0(local_34,2);
  local_4._0_1_ = 6;
  FUN_004aa9b0(uVar1);
  local_4._0_1_ = 8;
  FUN_0045a430();
  uVar1 = FUN_004ab8f0(local_48,3);
  local_4._0_1_ = 9;
  FUN_004aa9b0(uVar1);
  local_4._0_1_ = 0xb;
  FUN_0045a430();
  iVar2 = FUN_00452430();
  iVar3 = FUN_00452430();
  puVar4 = local_c0;
  if (iVar3 != iVar2) {
    puVar4 = (undefined1 *)(param_1 + 0x8c);
  }
  FUN_004aa9b0(puVar4);
  local_4._0_1_ = 0xc;
  iVar2 = FUN_00452430();
  iVar3 = FUN_00452430();
  puVar4 = local_e8;
  if (iVar3 != iVar2) {
    puVar4 = (undefined1 *)(param_1 + 0x78);
  }
  FUN_004aa9b0(puVar4);
  local_4._0_1_ = 0xd;
  FUN_0045be30(param_1 + 0x8c);
  FUN_0045be30(param_1 + 0x78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if ((*(char *)(iVar2 + 0x140) == '\x02') || (*(char *)(iVar2 + 0x184) == '\x02')) {
    uVar1 = FUN_004b8640(0x8ee645b3,0,0);
    local_4._0_1_ = 0xe;
    FUN_0045be30(uVar1);
    local_4._0_1_ = 0xd;
    FUN_0045a430();
  }
  else {
    FUN_0045be30(local_84);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if ((*(char *)(iVar2 + 0xfc) == '\x02') || (*(char *)(iVar2 + 0x1c8) == '\x02')) {
    uVar1 = FUN_004b8640(0x8ee645b3,0,0);
    local_4._0_1_ = 0xf;
    FUN_0045be30(uVar1);
    local_4._0_1_ = 0xd;
    FUN_0045a430();
  }
  else {
    FUN_0045be30(local_98);
  }
  local_4._0_1_ = 0xc;
  FUN_0045a430();
  local_4._0_1_ = 0xb;
  FUN_0045a430();
  local_4._0_1_ = 8;
  FUN_0045a430();
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

