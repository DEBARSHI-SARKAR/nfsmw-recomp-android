/* speed.exe 004c74f0 FUN_004c74f0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 006cba50 FUN_006cba50
 * calls 004c37e0 FUN_004c37e0
 * calls 00652ad0 _malloc
 * calls 00647dd0 FUN_00647dd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c74f0(int param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086bde4;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    FUN_006cba50(0);
    pvVar1 = _malloc(0x30);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_004c37e0();
    }
    *(int **)(param_1 + 0x5c) = piVar2;
    iVar4 = -1;
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 4))();
    _DAT_00911fe0 = FUN_0045da30(0xffffffff);
    if (DAT_00911ff8 == '\0') {
      iVar4 = 1;
    }
    DAT_00911ff8 = '\0';
    iVar5 = 0;
    do {
      if ((iVar5 != iVar4) && ((int *)(&DAT_00911f60)[iVar5] != (int *)0x0)) {
        (**(code **)(*(int *)(&DAT_00911f60)[iVar5] + 8))(*(undefined4 *)(param_1 + 0x70));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xd);
    uVar3 = FUN_00647dd0(0xf2d10992,param_1 + 0xa4,6,1,0,0);
    *(undefined4 *)(param_1 + 0xa0) = uVar3;
  }
  ExceptionList = local_c;
  return;
}

