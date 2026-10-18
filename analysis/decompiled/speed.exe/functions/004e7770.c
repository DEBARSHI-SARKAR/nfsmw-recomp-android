/* speed.exe 004e7770 FUN_004e7770; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 004df6d0 FUN_004df6d0
 * calls 004df490 FUN_004df490
 * calls 00701070 FUN_00701070
 * calls 004e7500 FUN_004e7500
 * calls 004e7570 FUN_004e7570
 * calls 004aebb0 FUN_004aebb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e7770(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  
  if (*(char *)((int)param_1 + 0x11a) != '\0') {
    return;
  }
  if (((byte)DAT_00911ff0 & 1) != 0) {
    return;
  }
  uVar1 = param_1[0x45];
  if ((uVar1 & 0x800) == 0) {
    if ((uVar1 & 4) == 0) {
      return;
    }
    if ((uVar1 & 0x400) != 0) {
      return;
    }
    if (param_1[param_1[0x4f] * 0x1d + 0x18] == 3) {
      return;
    }
    if ((char)param_1[0x46] != '\0') {
      return;
    }
  }
  if ((&DAT_009121d8)[param_1[0x4f]] == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)((&DAT_009121d8)[param_1[0x4f]] + 0x38);
  }
  iVar2 = param_1[0x52];
  if (iVar2 == 0) {
    cVar3 = FUN_004e7500();
    if (cVar3 != '\0') {
      return;
    }
    cVar3 = FUN_004e7570();
    if (cVar3 != '\0') {
      return;
    }
    cVar3 = FUN_004df490(0);
    if (cVar3 != '\0') {
      if ((param_1[0x45] & 0x800U) != 0) {
        return;
      }
      if (iVar4 != 1) {
        return;
      }
      (**(code **)(*param_1 + 0x40))(0);
      return;
    }
    if ((param_1[0x45] & 0x800U) != 0) {
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      if ((*(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x74) == 0) ||
         (fVar5 = (float10)FUN_004aebb0(), (float10)_DAT_00890968 == fVar5)) {
        FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]);
        cVar3 = FUN_004df490(1);
        if (cVar3 != '\0') {
          return;
        }
      }
      cVar3 = FUN_004e7570();
      if (cVar3 != '\0') {
        return;
      }
      if (iVar4 != 1) {
        return;
      }
      param_1[0x4a] = 0;
      if (DAT_00993cc8 == 0) {
        return;
      }
      cVar3 = FUN_00701070();
      if (cVar3 != '\0') {
        return;
      }
      (**(code **)(*param_1 + 0x3c))(0x16e7282);
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    cVar3 = FUN_004e7500();
    if (cVar3 != '\0') {
      return;
    }
    cVar3 = FUN_004df490(1);
    if (cVar3 != '\0') {
      return;
    }
    if ((param_1[0x45] & 0x800U) != 0) {
      return;
    }
    if (iVar4 != 1) {
      FUN_004df6d0(param_2);
      if (*(int *)(&DAT_008efd20 + param_1[0x47] * 4) == param_1[0x4a]) {
        return;
      }
      (**(code **)(*param_1 + 0x38))(*(int *)(&DAT_008efd20 + param_1[0x47] * 4));
      return;
    }
    if (param_1[0x4a] == param_1[0x4b]) {
      param_1[0x4a] = 0;
    }
  }
  FUN_004df6d0(param_2);
  (**(code **)(*param_1 + 0x38))(*(undefined4 *)(&DAT_008efd20 + param_1[0x47] * 4));
  return;
}

