/* speed.exe 004de670 FUN_004de670; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 * calls 004abaa0 FUN_004abaa0
 * calls 004de370 FUN_004de370
 * calls 004de4f0 FUN_004de4f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004de670(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  byte bVar12;
  float10 fVar13;
  undefined4 local_1c;
  float local_18;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if (iVar11 == 0) {
    return;
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if (*(int *)(iVar11 + 0xcc) == 0) {
LAB_004de6b5:
    if (*(int *)(iVar11 + 0x110) == 0) goto LAB_004de6ca;
    if (*(int *)(iVar11 + 0x154) != 0) {
      bVar6 = true;
      goto LAB_004de6ca;
    }
LAB_004de6df:
    if ((*(int *)(iVar11 + 0x198) != 0) && (*(int *)(iVar11 + 0xcc) != 0)) {
      bVar7 = true;
    }
  }
  else {
    if (*(int *)(iVar11 + 0x110) != 0) {
      bVar4 = true;
      goto LAB_004de6b5;
    }
LAB_004de6ca:
    if (*(int *)(iVar11 + 0x154) == 0) goto LAB_004de6df;
    if (*(int *)(iVar11 + 0x198) != 0) {
      bVar5 = true;
      goto LAB_004de6df;
    }
  }
  if ((*(int *)(iVar11 + 0x228) == 0) &&
     (iVar11 = *(int *)(param_1 + 0x18), *(char *)(iVar11 + 0x128) != '\0')) {
    *(undefined1 *)(iVar11 + 0x128) = 0;
    FUN_004de4f0(*(undefined4 *)(iVar11 + 300));
  }
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (iVar11 = *(int *)(*(int *)(param_1 + 0x14) + 0x34),
      (*(float *)(iVar11 + 0x34) + *(float *)(iVar11 + 0x30)) * _DAT_00890968 +
      *(float *)(iVar11 + 0x38) < _DAT_008efc5c)) &&
     (iVar11 = FUN_004abaa0(), (float)iVar11 < _DAT_0089096c)) {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  bVar8 = false;
  local_1c = 0;
  if (((*(int *)(iVar11 + 0xcc) == 0) || (*(int *)(iVar11 + 0x110) == 0)) ||
     ((*(float *)(param_1 + 0x4c) <= _DAT_00897e1c || (*(char *)(param_1 + 0x48) != '\0')))) {
    bVar10 = false;
    bVar9 = false;
  }
  else {
    bVar9 = true;
    bVar10 = true;
  }
  if (((*(int *)(iVar11 + 0x154) == 0) || (*(int *)(iVar11 + 0x198) == 0)) ||
     ((*(float *)(param_1 + 0x54) <= _DAT_00897e1c || (*(char *)(param_1 + 0x50) != '\0')))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar9) {
LAB_004de7d5:
    bVar8 = true;
    if (((bVar9) && (_DAT_00897e20 < *(float *)(param_1 + 0x4c))) ||
       ((bVar3 && (_DAT_00897e20 < *(float *)(param_1 + 0x54))))) {
      local_1c = 1;
    }
    else {
      local_1c = 0;
    }
LAB_004de80d:
    if (*(char *)(param_1 + 0x68) != '\0') goto LAB_004de812;
LAB_004de845:
    if (!bVar8) goto LAB_004de8de;
  }
  else {
    if (!bVar3) goto LAB_004de80d;
    if (*(char *)(param_1 + 0x68) == '\0') goto LAB_004de7d5;
LAB_004de812:
    if (((!bVar4) || (*(char *)(param_1 + 0x48) != '\0')) &&
       ((((!bVar5 || (*(char *)(param_1 + 0x50) != '\0')) &&
         ((!bVar6 || (*(char *)(param_1 + 0x58) != '\0')))) &&
        ((!bVar7 || (*(char *)(param_1 + 0x60) != '\0')))))) goto LAB_004de845;
    local_1c = 1;
  }
  local_18 = 0.0;
  if (*(int *)(iVar11 + 0x228) == 0) {
    iVar11 = 4;
    do {
      if (bVar9) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
        fVar2 = *(float *)(iVar1 + 0x108) + *(float *)(iVar1 + 0xc4);
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
        fVar2 = *(float *)(iVar1 + 400) + *(float *)(iVar1 + 0x14c);
      }
      fVar13 = (float10)FUN_004ba590(fVar2);
      iVar11 = iVar11 + -1;
      local_18 = (float)(fVar13 + (float10)local_18);
      bVar9 = bVar10;
    } while (iVar11 != 0);
    local_18 = local_18 * _DAT_00898858;
  }
  else {
    local_18 = 127.0;
  }
  FUN_004de370(local_18,local_1c);
LAB_004de8de:
  iVar11 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(iVar11 + 0x34);
  bVar12 = *(int *)(iVar1 + 0xcc) != 0;
  if (*(int *)(iVar1 + 0x110) != 0) {
    bVar12 = bVar12 + 1;
  }
  if (*(int *)(iVar1 + 0x154) != 0) {
    bVar12 = bVar12 + 1;
  }
  if (*(int *)(iVar1 + 0x198) != 0) {
    bVar12 = bVar12 + 1;
  }
  if ((_DAT_0089096c == (float)bVar12) && (*(char *)(param_1 + 0x68) != '\0')) {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(*(int *)(iVar11 + 0x34) + 0xcc) == 0) ||
     (*(int *)(*(int *)(iVar11 + 0x34) + 0x110) == 0)) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(float *)(param_1 + 0x4c) = param_2 + *(float *)(param_1 + 0x4c);
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if ((*(int *)(*(int *)(iVar11 + 0x34) + 0x154) == 0) ||
     (*(int *)(*(int *)(iVar11 + 0x34) + 0x198) == 0)) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if ((*(int *)(*(int *)(iVar11 + 0x34) + 0x110) == 0) ||
     (*(int *)(*(int *)(iVar11 + 0x34) + 0x154) == 0)) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(float *)(param_1 + 0x5c) = param_2 + *(float *)(param_1 + 0x5c);
  }
  else {
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(int *)(*(int *)(iVar11 + 0x34) + 0xcc) != 0) &&
     (*(int *)(*(int *)(iVar11 + 0x34) + 0x198) != 0)) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined4 *)(param_1 + 100) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  return;
}

