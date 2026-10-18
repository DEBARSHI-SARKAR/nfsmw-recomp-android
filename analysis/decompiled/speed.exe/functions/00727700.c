/* speed.exe 00727700 FUN_00727700; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 * calls 00460cd0 FUN_00460cd0
 * calls 00460c50 FUN_00460c50
 * calls 004624a0 FUN_004624a0
 */

int __thiscall
FUN_00727700(int param_1,int param_2,int param_3,char param_4,char param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [12];
  
  uVar4 = param_2 + 0x7fU & 0xffffff80;
  piVar6 = (int *)0x0;
  if (param_6 == 0) {
    if (param_4 == '\0') {
      piVar5 = (int *)(param_1 + 0x28);
      if (param_5 == '\0') {
        piVar6 = *(int **)(param_1 + 0x2c);
        if (piVar6 == piVar5) {
          return 0;
        }
        while (((char)piVar6[4] != '\0' || (piVar6[3] < (int)uVar4))) {
          piVar6 = (int *)piVar6[1];
          if (piVar6 == piVar5) {
            return 0;
          }
        }
      }
      else {
        piVar6 = (int *)*piVar5;
        if (piVar6 == piVar5) {
          return 0;
        }
        while (((char)piVar6[4] != '\0' || (piVar6[3] < (int)uVar4))) {
          piVar6 = (int *)*piVar6;
          if (piVar6 == piVar5) {
            return 0;
          }
        }
      }
    }
    else {
      piVar5 = *(int **)(param_1 + 0x28);
      if (piVar5 == (int *)(param_1 + 0x28)) {
        return 0;
      }
      do {
        if ((((char)piVar5[4] == '\0') && ((int)uVar4 <= piVar5[3])) &&
           ((piVar6 == (int *)0x0 || ((int)(piVar5[3] - uVar4) < (int)(piVar6[3] - uVar4))))) {
          piVar6 = piVar5;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)(param_1 + 0x28));
    }
  }
  else {
    piVar6 = *(int **)(param_1 + 0x28);
    if (piVar6 == (int *)(param_1 + 0x28)) {
      return 0;
    }
    while (((((char)piVar6[4] != '\0' || (piVar6[3] < (int)uVar4)) || (param_6 < piVar6[2])) ||
           (piVar6[2] + piVar6[3] <= param_6))) {
      piVar6 = (int *)*piVar6;
      if (piVar6 == (int *)(param_1 + 0x28)) {
        return 0;
      }
    }
  }
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (param_6 == 0) {
    if (param_5 == '\0') {
      param_6 = (piVar6[3] + piVar6[2]) - uVar4;
    }
    else {
      param_6 = piVar6[2];
    }
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - uVar4;
  if (piVar6[3] == *(int *)(param_1 + 0x18)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  piVar5 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar5;
  piVar1 = (int *)piVar5[1];
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  piVar5[2] = param_6;
  piVar5[3] = uVar4;
  *(undefined1 *)(piVar5 + 4) = 1;
  FUN_00460cd0((int)piVar5 + 0x11,param_3,0x20);
  iVar2 = *piVar6;
  *piVar6 = (int)piVar5;
  *(int **)(iVar2 + 4) = piVar5;
  *piVar5 = iVar2;
  piVar5[1] = (int)piVar6;
  iVar2 = ((piVar6[2] - uVar4) - param_6) + piVar6[3];
  iVar3 = param_6 - piVar6[2];
  piVar6[3] = iVar3;
  if (iVar3 == 0) {
    iVar3 = *piVar6;
    piVar1 = (int *)piVar6[1];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    puVar7 = *(undefined4 **)(param_1 + 0x24);
    *puVar7 = piVar6;
    *(int **)(param_1 + 0x24) = piVar6;
    piVar6[1] = (int)puVar7;
    *piVar6 = param_1 + 0x20;
  }
  if (iVar2 != 0) {
    piVar6 = *(int **)(param_1 + 0x20);
    piVar1 = (int *)piVar6[1];
    iVar3 = *piVar6;
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    piVar6[3] = iVar2;
    piVar6[2] = param_6 + uVar4;
    *(undefined1 *)(piVar6 + 4) = 0;
    FUN_00460cd0((int)piVar6 + 0x11,0,0x20);
    iVar2 = *piVar5;
    *piVar5 = (int)piVar6;
    *(int **)(iVar2 + 4) = piVar6;
    piVar6[1] = (int)piVar5;
    *piVar6 = iVar2;
  }
  if ((*(char *)(param_1 + 0xc) != '\0') && (DAT_0090e674 != 0)) {
    local_34 = *(undefined4 *)(param_1 + 0x10);
    local_40 = param_6;
    local_38 = 0;
    puVar7 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar7 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_44 = param_1;
    local_3c = uVar4;
    if (param_3 != 0) {
      FUN_00460ca0(local_30,param_3,0x2f);
    }
    iVar2 = FUN_00460c50(local_30);
    FUN_004624a0("CODEINE",0x1c,&local_44,0x44 - (0x2f - iVar2));
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_6;
}

