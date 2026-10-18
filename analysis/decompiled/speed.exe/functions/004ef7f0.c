/* speed.exe 004ef7f0 FUN_004ef7f0; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 004ea620 FUN_004ea620
 * calls 0083179c FUN_0083179c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ef7f0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_10 = 0x1000;
  local_18 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (*(char *)(param_1 + 0x54) == '\0') goto LAB_004ef857;
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_004ef84f:
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) goto LAB_004ef84f;
    uVar2 = *(int *)(*(int *)(param_1 + 0x10) + ((int)*(uint *)(param_1 + 0x48) >> 1) * 4) >>
            (sbyte)((*(uint *)(param_1 + 0x48) & 1) << 4) & 0xffff;
  }
  *(uint *)(param_1 + 0x58) = uVar2;
  *(undefined1 *)(param_1 + 0x54) = 0;
LAB_004ef857:
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (iVar3 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *(int *)(iVar3 + ((int)uVar2 >> 1) * 4) >> (sbyte)((uVar2 & 1) << 4) & 0x7fff;
    }
  }
  else {
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(iVar3 + ((int)uVar2 >> 1) * 4) >> (sbyte)((uVar2 & 1) << 4) & 0x7fff;
    }
    local_14 = (int)(*(int *)(*(int *)(param_1 + 0x2c) + 0xd0) * uVar2) >> 0xf;
  }
  if (iVar3 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_004ea620(*(int *)(iVar3 + ((int)*(uint *)(param_1 + 0x4c) >> 1) * 4) >>
                            (sbyte)((*(uint *)(param_1 + 0x4c) & 1) << 4) & 0xffff);
  }
  if (iVar3 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(iVar3 + ((int)*(uint *)(param_1 + 0x50) >> 1) * 4) >>
              (sbyte)((*(uint *)(param_1 + 0x50) & 1) << 4) & 0x7fff;
  }
  local_c = *(undefined4 *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_004cd570(&local_18);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfc) == '\0') {
      fVar1 = *(float *)(param_1 + 0x34) - (float)(*(int **)(param_1 + 0x14))[0x10] * _DAT_00890e98;
      *(float *)(param_1 + 0x34) = fVar1;
      if (fVar1 < _DAT_00890968) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
        return;
      }
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x18) & 0x7fff;
    }
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x7fff < uVar2) {
      uVar2 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x38) + 4) = uVar2;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ea620(*(uint *)(*(int *)(param_1 + 0x10) + 0x24) & 0xffff);
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (9000 < iVar3) {
      iVar3 = 9000;
    }
    *(int *)(*(int *)(param_1 + 0x38) + 8) = iVar3;
    if ((*(int **)(param_1 + 0x10) == (int *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(int **)(param_1 + 0x10) >> 0x10 & 0xffff;
    }
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    *(uint *)(*(int *)(param_1 + 0x38) + 0xc) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x20) = 0x7fff;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c) >> 0x10 & 0x7fff;
    }
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x7fff < uVar2) {
      uVar2 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x38) + 0x24) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x18) = 25000;
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0xd4);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    *(int *)(*(int *)(param_1 + 0x38) + 0x14) = iVar3;
    if (**(int **)(param_1 + 0x38) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x38) + 1);
    }
  }
  return;
}

