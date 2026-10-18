/* speed.exe 004cea30 FUN_004cea30; analysis pseudocode, not buildable source.
 * calls 004cd000 FUN_004cd000
 * calls 00464080 FUN_00464080
 * calls 004c6c60 FUN_004c6c60
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

void __thiscall FUN_004cea30(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c6e8;
  local_c = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_10 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_4 = 0;
  local_34 = 0;
  ExceptionList = &local_c;
  if (0 < param_3) {
    do {
      local_14 = (undefined1)local_34;
      local_30 = param_2;
      iVar1 = FUN_00464080(DAT_008ee558);
      if (iVar1 < param_5) {
        FUN_00464a50(DAT_008ee558,0,0x7fffffff);
        local_28 = FUN_00465a70(param_5,0x1000);
      }
      else {
        local_28 = FUN_00465a70(param_5,(DAT_008ee558 & 0xf) + 0x1000);
      }
      local_2c = *(int *)(param_1 + 0xb0) - param_4;
      *(int *)(param_1 + 0xb0) = local_2c;
      local_1c = param_4;
      local_20 = param_5;
      iVar1 = *(int *)(param_1 + 0xa8);
      local_10 = 0;
      local_24 = local_28;
      iVar2 = FUN_004c6c60(iVar1,*(undefined4 *)(iVar1 + 4),&local_30);
      FUN_004cd000(1);
      *(int *)(iVar1 + 4) = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      local_34 = local_34 + 1;
    } while (local_34 < param_3);
  }
  ExceptionList = local_c;
  return;
}

