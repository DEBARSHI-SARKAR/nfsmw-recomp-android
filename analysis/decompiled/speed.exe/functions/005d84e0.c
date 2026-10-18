/* speed.exe 005d84e0 FUN_005d84e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d6190 FUN_005d6190
 * calls 005cd2d0 FUN_005cd2d0
 * calls 005d6430 FUN_005d6430
 * calls 005d78b0 FUN_005d78b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005d84e0(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar8 = FUN_005cd2d0(param_2);
  iVar13 = iVar8 * 0x10;
  if (*(int *)(iVar13 + 0xc + *param_1) == 0) {
    pcVar9 = (char *)param_2[3];
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    pcVar1 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    iVar4 = *(int *)(param_1[4] + 8);
    iVar5 = *(int *)(param_1[4] + 4);
    FUN_005d6190(iVar5,iVar4,iVar4 - iVar5 >> 2);
    iVar4 = param_1[4];
    piVar11 = *(int **)(iVar4 + 4);
    if (piVar11 != *(int **)(iVar4 + 8)) {
      do {
        if (pcVar9 + (1 - (int)pcVar1) <= (char *)(0xff8 - *(int *)(*piVar11 + 4))) break;
        piVar11 = piVar11 + 1;
      } while (piVar11 != *(int **)(param_1[4] + 8));
    }
    if (piVar11 == *(int **)(iVar4 + 8)) {
      uVar10 = FUN_005d6430();
      local_4 = 0;
      FUN_005d78b0(uVar10);
      *local_14 = *local_14 + -1;
      if (*local_14 == 0) {
        thunk_FUN_007c7250(local_14);
      }
      piVar11 = (int *)(*(int *)(param_1[4] + 8) + -4);
    }
    pcVar14 = (char *)param_2[3];
    if (pcVar14 == (char *)0x0) {
      pcVar14 = "";
    }
    iVar4 = *piVar11;
    pcVar2 = (char *)(*(int *)(iVar4 + 4) + 8 + iVar4);
    *(char **)(iVar4 + 4) = pcVar9 + (1 - (int)pcVar1) + *(int *)(iVar4 + 4);
    pcVar9 = pcVar2;
    do {
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *pcVar9 = cVar3;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    uVar10 = *param_2;
    uVar6 = param_2[2];
    puVar12 = (undefined4 *)(*param_1 + iVar13);
    puVar12[1] = param_2[1];
    puVar12[2] = uVar6;
    *puVar12 = uVar10;
    puVar12[3] = pcVar2;
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1U;
    uVar7 = param_1[1];
    param_1[3] = param_1[3] + (iVar8 - (uVar7 & param_2[2]) & uVar7);
    if ((uVar7 * 2) / 3 < iVar4 + 1U) {
      _DAT_0091dfc4 = _DAT_0091dfc4 + 1;
    }
  }
  ExceptionList = local_c;
  return *param_1 + iVar13;
}

