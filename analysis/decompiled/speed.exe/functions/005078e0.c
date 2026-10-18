/* speed.exe 005078e0 FUN_005078e0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00463c70 FUN_00463c70
 * calls 00461970 FUN_00461970
 * calls 00506090 FUN_00506090
 */

int * FUN_005078e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  uint local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar4 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086de8b;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 4);
  piVar11 = (int *)0x0;
  uVar10 = 0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_1c = 0;
  local_18 = 0;
  ExceptionList = &local_c;
  for (piVar1 = (int *)(param_1 + 8); piVar1 != (int *)(iVar2 + 8 + param_1);
      piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
    iVar3 = *piVar1;
    if (iVar3 == 0x33310001) {
      piVar11 = piVar1 + 2;
    }
    else if (iVar3 == 0x33310002) {
      piVar11[0x1d] = (int)(piVar1 + 2);
      local_18 = (uint)piVar1[1] >> 3;
    }
    else if (iVar3 == 0x33310003) {
      piVar11[0x1e] = (int)(piVar1 + 2);
    }
    else if (iVar3 == 0x33310004) {
      local_14 = piVar1 + 2;
      local_1c = (uint)piVar1[1] / 0x7c;
    }
    else if (iVar3 == 0x33310005) {
      local_10 = piVar1 + 2;
      uVar10 = (uint)piVar1[1] >> 5;
    }
  }
  piVar11[0x1b] = 1;
  if (local_1c == uVar10) {
    puVar6 = (undefined4 *)FUN_00463c70(DAT_00916044);
    local_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pcVar7 = (char *)(piVar11 + 1);
      pcVar9 = (char *)(piVar11 + 8);
      if ((int *)pcVar7 == (int *)0x0) {
        pcVar7 = "<null>";
      }
      if ((int *)pcVar9 == (int *)0x0) {
        pcVar9 = "<null>";
      }
      uVar8 = FUN_00461970(pcVar7);
      puVar6[2] = uVar8;
      uVar8 = FUN_00461970(pcVar9);
      puVar6[3] = uVar8;
      puVar6[5] = piVar11;
      uVar8 = FUN_00460bf0(puVar6[2]);
      puVar6[4] = uVar8;
      puVar6[6] = local_18;
      puVar6[7] = 0;
      *DAT_009173fc = puVar6;
      puVar5 = puVar6;
      puVar6[1] = DAT_009173fc;
      DAT_009173fc = puVar5;
      *puVar6 = &DAT_009173f8;
    }
    local_4 = 0xffffffff;
    piVar11[0x1c] = (int)puVar6;
    if (local_14 != (int *)0x0) {
      FUN_00506090(local_14,local_10,local_1c);
    }
    ExceptionList = local_c;
    return piVar11;
  }
  ExceptionList = pvVar4;
  return (int *)0x0;
}

