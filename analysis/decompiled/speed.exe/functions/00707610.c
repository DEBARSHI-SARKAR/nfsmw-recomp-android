/* speed.exe 00707610 FUN_00707610; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 00452380 FUN_00452380
 * calls 0045a430 FUN_0045a430
 * calls 00464a30 FUN_00464a30
 */

void __fastcall FUN_00707610(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fa68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00464a30(DAT_00901bc8,0,0x7fffffff);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    do {
      if (*(int *)(iVar5 + 8) != iVar5) break;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  do {
    if ((*(uint *)(param_1 + 0x20) <= uVar2) ||
       (iVar5 = uVar2 * 0x10,
       *(int *)(*(int *)(param_1 + 0x1c) + 8 + iVar5) == *(int *)(param_1 + 0x1c) + iVar5)) {
      ExceptionList = local_c;
      return;
    }
    uVar3 = *(int *)(param_1 + 0x1c) + iVar5;
    uVar1 = *(uint *)(uVar3 + 8);
    uVar4 = FUN_004cb270(*(undefined4 *)(((uVar1 == uVar3) - 1 & uVar1) + 0x10));
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = FUN_00455fd0(0xc593dd47,uVar4,0,0);
    FUN_00452380(uVar4,uVar6,uVar7);
    local_4 = 0;
    if (local_18 == 0) {
      local_18 = FUN_006269b0(0x1c);
    }
    uVar2 = uVar2 + 1;
    local_4 = 0xffffffff;
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      iVar5 = uVar2 * 0x10 + *(int *)(param_1 + 0x1c);
      do {
        if (*(int *)(iVar5 + 8) != iVar5) break;
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    FUN_0045a430();
  } while( true );
}

