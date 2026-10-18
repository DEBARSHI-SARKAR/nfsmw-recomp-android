/* speed.exe 0071f1b0 FUN_0071f1b0; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 * calls 00715610 FUN_00715610
 * calls 00717ae0 FUN_00717ae0
 * calls 0071db50 FUN_0071db50
 * calls 00704e00 FUN_00704e00
 * calls 0045da70 FUN_0045da70
 * calls 0071db00 FUN_0071db00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071f1b0(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  
  iVar4 = DAT_00993cc8;
  if (DAT_00993cc8 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((uVar1 & 0x40000) == 0) {
    return;
  }
  fVar2 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x14)) * _DAT_00890984;
  fVar3 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x18)) * _DAT_00890984;
  if (((((uVar1 & 8) != 0) && ((char)uVar1 < '\0')) &&
      (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x6c) <= fVar3)) &&
     (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x6c) <= fVar2)) {
    *(uint *)(param_1 + 0x24) = uVar1 & 0xfffbffff;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((((uVar1 & 8) != 0) && (-1 < (char)uVar1)) &&
     (*(float *)(*(int *)(iVar4 + 0x184) + 0x6c) <= fVar3)) {
    *(uint *)(param_1 + 0x24) = uVar1 & 0xfffbffff;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((((char)uVar1 < '\0') && ((uVar1 & 8) == 0)) &&
     ((*(float *)(*(int *)(iVar4 + 0x184) + 0x6c) <= fVar2 &&
      (((uVar1 & 2) != 0 && (piVar7 = (int *)FUN_007153b0(0,1), piVar7 != (int *)0x0)))))) {
    (**(code **)(*piVar7 + 0xe0))();
  }
  if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) {
    return;
  }
  piVar7 = (int *)FUN_00704e00();
  if (piVar7 == (int *)0x0) goto LAB_0071f3e6;
  piVar8 = (int *)FUN_00715610(2);
  piVar9 = (int *)FUN_00715610(0);
  sVar6 = (**(code **)(*piVar7 + 0x28))();
  if (((sVar6 < 1) && (sVar6 = (**(code **)(*piVar7 + 0x2c))(), sVar6 < 1)) &&
     (-1 < *(char *)(param_1 + 0x24))) {
    sVar6 = (**(code **)(*piVar7 + 0x48))();
    if (sVar6 < 1) {
      fVar10 = (float10)FUN_0045da70(0x3f800000);
      if (fVar10 <= (float10)_DAT_008b0e70) {
        if ((piVar8 == (int *)0x0) ||
           (fVar10 = (float10)FUN_0045da70(0x3f800000), fVar10 <= (float10)_DAT_008b0e70))
        goto LAB_0071f36e;
        (**(code **)(*piVar8 + 0x170))();
        goto LAB_0071f373;
      }
      FUN_00717ae0();
    }
    else {
LAB_0071f36e:
      FUN_0071db50();
LAB_0071f373:
      if ((piVar9 != (int *)0x0) && (cVar5 = (**(code **)(*piVar9 + 0x19c))(), cVar5 != '\0')) {
        (**(code **)(*piVar9 + 0x174))();
        goto LAB_0071f3de;
      }
    }
    FUN_00717ae0();
  }
  else if ((piVar8 == (int *)0x0) ||
          (fVar10 = (float10)FUN_0045da70(0x3f800000), fVar10 <= (float10)_DAT_008b0e70)) {
    FUN_0071db00(*(uint *)(param_1 + 0x24) >> 4 & 0xffffff01);
  }
  else {
    (**(code **)(*piVar8 + 0x168))(*(uint *)(param_1 + 0x24) >> 4 & 0xffffff01);
  }
LAB_0071f3de:
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
LAB_0071f3e6:
  uVar1 = *(uint *)(param_1 + 0x24);
  if (((uVar1 & 0x88) != 0) && ((uVar1 & 0x10000000) == 0)) {
    *(uint *)(param_1 + 0x24) = uVar1 | 0x20000;
    *(int *)(param_1 + 0x1c) = DAT_00925ae8;
  }
  return;
}

