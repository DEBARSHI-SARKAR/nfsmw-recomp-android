/* speed.exe 00707bf0 FUN_00707bf0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00707760 FUN_00707760
 * calls 005d51f0 FUN_005d51f0
 * calls 004100a0 FUN_004100a0
 * calls 00766130 FUN_00766130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00707bf0(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *unaff_EBX;
  int *piVar10;
  int *unaff_EBP;
  int *unaff_ESI;
  float10 fVar11;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_00707760();
  iVar4 = (**(code **)(*param_1 + 0x28))();
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    param_1[0x10] = 0x3f800000;
    param_1[0x11] = DAT_00925ae8;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[7] = DAT_008a2fb4;
    param_1[8] = DAT_008a2fb8;
    iVar4 = DAT_008a2fbc;
    param_1[10] = 0;
    *(undefined1 *)((int)param_1 + 0x36) = 0;
    param_1[9] = iVar4;
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x28))();
  piVar10 = (int *)0x0;
  if ((iVar4 == 0) ||
     (iVar4 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,iVar4), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 4);
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    param_1[0x13] = DAT_00925ae8;
  }
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 100))(0);
    piVar2 = (int *)0x0;
  }
  else {
    uStack_1c = FUN_005d59f0(&LAB_004040e0);
    piStack_24 = (int *)FUN_005d59f0(&LAB_00405000);
    piVar5 = (int *)FUN_005d59f0(&LAB_004038e0);
    piVar10 = (int *)FUN_005d59f0(&LAB_00404040);
    uStack_20 = FUN_005d59f0(&LAB_00403700);
    piVar2 = piStack_24;
    if ((piVar5 != (int *)0x0) && (piVar2 = piStack_24, *(char *)((int)param_1 + 0x35) != '\0')) {
      iVar4 = *param_1;
      uVar6 = (**(code **)(*piVar5 + 0x34))();
      (**(code **)(iVar4 + 0x1a8))(uVar6);
      iVar4 = *param_1;
      uVar6 = (**(code **)(*piVar5 + 0x3c))();
      (**(code **)(iVar4 + 0x1b0))(uVar6);
      iVar4 = *param_1;
      uVar6 = (**(code **)(*piVar5 + 0x44))();
      (**(code **)(iVar4 + 0x1b8))(uVar6);
      goto LAB_00707d76;
    }
  }
  unaff_EBP = piVar2;
  (**(code **)(*param_1 + 0x1a8))(0);
  (**(code **)(*param_1 + 0x1b0))(0);
  (**(code **)(*param_1 + 0x1b8))(&DAT_008a2fb4);
LAB_00707d76:
  if ((piVar10 == (int *)0x0) || (*(char *)((int)param_1 + 0x35) == '\0')) {
    param_1[0x11] = DAT_00925ae8;
    param_1[0x10] = 0x3f800000;
  }
  else {
    iVar4 = (**(code **)(*piVar10 + 8))();
    fVar1 = _DAT_0089096c;
    if (iVar4 != 0) {
      uVar7 = (**(code **)(*piVar10 + 0x4c))();
      uVar8 = (**(code **)(*piVar10 + 8))();
      fVar1 = (float)(int)(uVar7 / uVar8);
      if ((int)(uVar7 / uVar8) < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
    }
    param_1[0x10] = (int)fVar1;
    if (_DAT_008910f0 < fVar1) {
      param_1[0x11] = DAT_00925ae8;
    }
  }
  if (unaff_EBP != (int *)0x0) {
    uVar3 = (**(code **)(*unaff_EBP + 0x18))();
    *(undefined1 *)(param_1 + 0xd) = uVar3;
    fVar11 = (float10)(**(code **)(*unaff_EBP + 0x14))();
    param_1[0xc] = (int)(float)fVar11;
  }
  if ((unaff_EBX == (int *)0x0) || (*(char *)((int)param_1 + 0x35) == '\0')) {
    param_1[0x19] = 0x6b;
  }
  else {
    (**(code **)(*unaff_EBX + 0x48))();
    iVar4 = FUN_00766130();
    if (iVar4 != 0x6b) {
      param_1[0x19] = iVar4;
    }
  }
  iVar4 = DAT_00993cc8;
  if ((((*(char *)((int)param_1 + 0x35) != '\0') && (*(char *)((int)param_1 + 0x36) != '\0')) &&
      (unaff_ESI != (int *)0x0)) && (DAT_00993cc8 != 0)) {
    puVar9 = (undefined4 *)(**(code **)(*unaff_ESI + 0xc))();
    uStack_18 = *puVar9;
    uStack_14 = puVar9[1];
    uStack_10 = puVar9[2];
    piStack_24 = *(int **)(iVar4 + 0x10c);
    uStack_20 = *(undefined4 *)(iVar4 + 0x110);
    uStack_1c = *(undefined4 *)(iVar4 + 0x114);
    fVar11 = (float10)FUN_004100a0(&uStack_18,&piStack_24);
    if (fVar11 < (float10)(float)param_1[0xb] != (fVar11 == (float10)(float)param_1[0xb])) {
      param_1[0x17] = DAT_00925ae8;
    }
  }
  return;
}

