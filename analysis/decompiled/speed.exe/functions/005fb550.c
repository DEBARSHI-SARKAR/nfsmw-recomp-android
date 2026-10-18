/* speed.exe 005fb550 FUN_005fb550; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005d0370 FUN_005d0370
 * calls 005f2350 FUN_005f2350
 * calls 005e7a30 FUN_005e7a30
 * calls 0045da30 FUN_0045da30
 * calls 005dfad0 FUN_005dfad0
 * calls 005f1450 FUN_005f1450
 * calls 005f1b10 FUN_005f1b10
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 __fastcall FUN_005fb550(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)(DAT_0091e000 + 0x1968) != 0) &&
     (ExceptionList = &local_c, iVar2 = FUN_005faa20(), iVar2 != 2)) {
    ExceptionList = local_c;
    return 0;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_005f2350(*(undefined4 *)(param_1 + 0x94));
  local_20 = **(int **)(param_1 + 0x90);
  iVar2 = local_14;
  iVar4 = local_18;
  iVar5 = local_10;
  if ((int *)local_20 != *(int **)(param_1 + 0x90)) {
    do {
      if ((*(int *)(local_20 + 0x10) == 0) || (iVar3 = FUN_005d59f0(&LAB_004040d0), iVar3 == 0)) {
        if ((iVar4 == 0) || ((uint)(iVar5 - iVar4 >> 2) <= (uint)(iVar2 - iVar4 >> 2))) {
          FUN_005f1450(iVar2,1,&local_20);
          iVar2 = local_14;
          iVar4 = local_18;
          iVar5 = local_10;
        }
        else {
          FUN_005e7a30(iVar2,1,&local_20,local_1c,local_20);
          local_14 = iVar2 + 4;
          iVar2 = local_14;
        }
      }
      FUN_005dfad0();
    } while (local_20 != *(int *)(param_1 + 0x90));
  }
  if ((iVar4 != 0) && (iVar2 = iVar2 - iVar4 >> 2, 0 < iVar2)) {
    iVar2 = FUN_0045da30(iVar2);
    iVar2 = *(int *)(iVar4 + iVar2 * 4);
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    FUN_005f1b10(&local_20,iVar2);
    local_4 = 0xffffffff;
    FUN_005d0370(iVar4,(iVar5 - iVar4 >> 2) << 2,0);
    ExceptionList = local_c;
    return uVar1;
  }
  local_4 = 0xffffffff;
  if (iVar4 != 0) {
    FUN_005d0370(iVar4,(iVar5 - iVar4 >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return 0;
}

