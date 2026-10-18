/* speed.exe 006ee490 FUN_006ee490; analysis pseudocode, not buildable source.
 * calls 00695850 FUN_00695850
 * calls 0040e4e0 FUN_0040e4e0
 * calls 0040e440 FUN_0040e440
 * calls 0045a430 FUN_0045a430
 * calls 0040e040 FUN_0040e040
 * calls 0040e4a0 FUN_0040e4a0
 * calls 00609c20 FUN_00609c20
 * calls 005d59f0 FUN_005d59f0
 * calls 006ee400 FUN_006ee400
 * calls 00401d70 FUN_00401d70
 * calls 006edb10 FUN_006edb10
 * calls 00467ce0 FUN_00467ce0
 * calls 00401d10 FUN_00401d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ee490(int param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 extraout_var;
  int *unaff_EBP;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  int *piStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  int *apiStack_48 [2];
  undefined1 auStack_40 [4];
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087e971;
  local_c = ExceptionList;
  piVar9 = (int *)0x0;
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
  ExceptionList = &local_c;
  cVar3 = FUN_006ee400();
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    ExceptionList = local_c;
    return;
  }
  if ((*(int **)(param_1 + 0x5c) != (int *)0x0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))(), cVar3 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 4))(param_1 + 0x4c);
    ExceptionList = pvStack_10;
    return;
  }
  fStack_54 = (float)(**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
  if (fStack_54 == 0.0) {
    ExceptionList = local_c;
    return;
  }
  piStack_3c = (int *)FUN_005d59f0(&LAB_00403f90);
  if (piStack_3c == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  cVar3 = FUN_0040e040(&fStack_4c);
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar3 = FUN_0040e4e0(&piStack_58);
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar3 = FUN_0040e4a0(&piStack_38);
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar3 = FUN_0040e440(&uStack_50);
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  (**(code **)(**(int **)(param_1 + 0x58) + 0x10))();
  piVar2 = piStack_58;
  iVar4 = (**(code **)(*piStack_58 + 8))();
  if (iVar4 != 0) {
    do {
      cVar3 = FUN_00695850(apiStack_48);
      if ((cVar3 == '\0') || (iVar4 = (**(code **)(*apiStack_48[0] + 4))(piVar9), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      piVar6 = piVar9;
      cVar3 = (**(code **)(*piVar2 + 0x24))();
      if (cVar3 == '\0') {
        puVar5 = &DAT_00988e80;
      }
      else if (bVar1) {
        apiStack_48[0] = (int *)0xd929e923;
        puVar5 = (undefined *)FUN_006edb10(apiStack_48);
        unaff_EBP = (int *)((uint)unaff_EBP | 1);
        puStack_8 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined *)(**(code **)(*piVar2 + 0x44))(piVar9);
      }
      FUN_00467ce0(puVar5);
      puStack_8 = (undefined1 *)0x2;
      if (((uint)unaff_EBP & 1) != 0) {
        unaff_EBP = (int *)((uint)unaff_EBP & 0xfffffffe);
        FUN_0045a430();
      }
      fVar10 = (float10)(**(code **)(*piVar2 + 0x30))(piVar9);
      fVar10 = (float10)FUN_00401d10((float)fVar10);
      fStack_4c = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x38))(piVar9);
      fVar10 = (float10)FUN_00401d10((float)fVar10);
      fStack_4c = (float)fVar10;
      uVar7 = uStack_50;
      (**(code **)(**(int **)(param_1 + 0x58) + 0x20))(piVar9 < (int *)0x2,auStack_40,uStack_50);
      (**(code **)(**(int **)(param_1 + 0x58) + 0x1c))(piVar9 < (int *)0x2,&fStack_4c,piStack_58);
      iVar4 = **(int **)(param_1 + 0x58);
      fVar10 = (float10)(**(code **)(*piVar6 + 0x98))();
      (**(code **)(iVar4 + 0x18))(uVar7,&piStack_58,(float)fVar10);
      uStack_34 = 0xffffffff;
      FUN_0045a430();
      piVar9 = (int *)((int)piVar9 + 1);
      piVar6 = (int *)(**(code **)(*piVar2 + 8))();
    } while (piVar9 < piVar6);
  }
  iVar4 = (**(code **)(*piStack_3c + 8))();
  piVar9 = piStack_38;
  piStack_3c = *(int **)(iVar4 + 0x14);
  fVar10 = (float10)(**(code **)(*piStack_38 + 0x10))();
  fStack_54 = (float)fVar10;
  fVar10 = (float10)(**(code **)(*piStack_38 + 4))();
  iVar4 = *piStack_38;
  piStack_38 = (int *)(float)fVar10;
  fVar10 = (float10)(**(code **)(iVar4 + 8))();
  piStack_58 = (int *)0x0;
  if ((float10)_DAT_00890968 < fVar10 - (float10)fStack_54) {
    fVar10 = (float10)FUN_00401d70((float)(((float10)(float)piStack_38 - (float10)fStack_54) /
                                          (fVar10 - (float10)fStack_54)),0,0x3f800000);
    piStack_58 = (int *)(float)fVar10;
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 0x24))(piStack_58,0,piStack_3c);
  iVar4 = **(int **)(param_1 + 0x58);
  uVar7 = (**(code **)(_DAT_00000000 + 0x2c))();
  (**(code **)(iVar4 + 0x28))(uVar7);
  cVar3 = (**(code **)(*piVar9 + 0x2c))();
  if (cVar3 != '\0') {
    iVar4 = **(int **)(param_1 + 0x58);
    fVar10 = (float10)(**(code **)(*piVar9 + 0x1c))();
    uVar7 = (**(code **)(*piVar9 + 0x20))((float)fVar10);
    (**(code **)(iVar4 + 0x2c))(uVar7);
  }
  FUN_00609c20(apiStack_48);
  piVar9 = apiStack_48[0];
  if (apiStack_48[0] != (int *)0x0) {
    cVar3 = (**(code **)(*apiStack_48[0] + 4))();
    if ((cVar3 == '\0') && (uVar7 = (**(code **)(*piVar9 + 0x10))(), (char)uVar7 == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x58) + 0x30))(uVar7);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x58) + 0x30))(1);
    }
    goto LAB_006ee836;
  }
  uVar8 = (**(code **)(*unaff_EBP + 0x10))();
  if ((char)uVar8 == '\0') {
LAB_006ee82b:
    uVar8 = uVar8 & 0xffffff00;
  }
  else {
    fVar11 = (float10)(**(code **)(_DAT_00000000 + 0x90))();
    fVar10 = (float10)_DAT_00890cd4;
    uVar8 = CONCAT22(extraout_var,
                     (ushort)(fVar11 < fVar10) << 8 | (ushort)(NAN(fVar11) || NAN(fVar10)) << 10 |
                     (ushort)(fVar11 == fVar10) << 0xe);
    if (fVar11 < fVar10 || (fVar11 == fVar10) != 0) goto LAB_006ee82b;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 0x34))(uVar8);
LAB_006ee836:
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))();
  ExceptionList = local_c;
  return;
}

