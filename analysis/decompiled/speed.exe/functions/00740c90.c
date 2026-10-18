/* speed.exe 00740c90 FUN_00740c90; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005c6bb0 FUN_005c6bb0
 * calls 005cb5d0 FUN_005cb5d0
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00740c90(float *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  float unaff_EBP;
  float10 fVar8;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [28];
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_4;
  
  piVar3 = (int *)(**(code **)(*param_2 + 0x54))();
  piVar4 = (int *)FUN_005d59f0(&LAB_004040e0);
  if ((((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 0x38))(), iVar5 == 2)) ||
      (piVar6 = (int *)FUN_005d59f0(&LAB_00404040), piVar6 == (int *)0x0)) ||
     (iVar5 = (**(code **)(*piVar6 + 0x4c))(), iVar5 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') || (!bVar2)) {
    fStack_64 = *param_1;
    fStack_60 = param_1[1];
    fStack_5c = param_1[2];
    fStack_58 = param_1[4];
    fStack_54 = param_1[5];
    fStack_50 = param_1[6];
    if (piVar4 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar3 + 0x20))();
      fVar1 = fStack_60 - *(float *)(iVar5 + 4);
      if ((_DAT_00894b68 < fVar1) && (fVar1 < _DAT_00890bf8)) {
        iVar5 = (**(code **)(*piVar3 + 0x20))();
        fStack_60 = *(float *)(iVar5 + 4);
        iVar5 = (**(code **)(*piVar3 + 0x24))();
        fStack_54 = *(float *)(iVar5 + 4);
      }
    }
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x20))();
    fVar1 = fStack_64 - *pfVar7;
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    if (_DAT_009b1c24 < fVar1) {
      iVar5 = (**(code **)(*piVar3 + 0x20))();
      fVar1 = fStack_5c - *(float *)(iVar5 + 8);
      if (fVar1 < _DAT_00890968) {
        fVar1 = -fVar1;
      }
      if (_DAT_009b1ebc < fVar1) {
        (**(code **)(*piVar3 + 0x5c))(&fStack_64);
      }
    }
    (**(code **)(*piVar3 + 0x60))(&fStack_58);
    FUN_005ca910(param_1 + 0xc,auStack_44);
    FUN_005cb5d0(uStack_1c,-fStack_24);
    (**(code **)(*piVar3 + 0x40))(auStack_44);
    fStack_4 = -fStack_28;
    fVar8 = (float10)FUN_005cb5d0(uStack_20,fStack_4);
    FUN_005c6bb0(auStack_48,(float)((float10)unaff_EBP - fVar8),auStack_48);
    (**(code **)(*piVar3 + 0x70))(auStack_48);
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x28))();
    fStack_54 = param_1[0x11];
    fStack_58 = *pfVar7;
    iVar5 = (**(code **)(*piVar3 + 0x28))();
    fStack_50 = *(float *)(iVar5 + 8);
    pfVar7 = &fStack_58;
  }
  else {
    (**(code **)(*piVar3 + 0x5c))(param_1);
    (**(code **)(*piVar3 + 0x74))(param_1 + 0xc);
    (**(code **)(*piVar3 + 0x60))(param_1 + 4);
    pfVar7 = param_1 + 0x10;
  }
  (**(code **)(*piVar3 + 100))(pfVar7);
  piVar3 = (int *)FUN_005d59f0(&LAB_00403f90);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))(param_1[3]);
    (**(code **)(*piVar3 + 0x18))(param_1[7]);
    (**(code **)(*piVar3 + 0x1c))(param_1[0xb]);
    (**(code **)(*piVar3 + 0x24))(param_1[0x18]);
    (**(code **)(*piVar3 + 0x20))(*(undefined1 *)((int)param_1 + 0x71));
  }
  piVar3 = (int *)FUN_005d59f0(&LAB_00404010);
  if ((piVar3 != (int *)0x0) &&
     ((*(byte *)((int)param_1 + 0x72) < 2 || (iVar5 = (**(code **)(*piVar3 + 4))(), iVar5 < 2)))) {
    (**(code **)(*piVar3 + 0xc))(*(undefined1 *)((int)param_1 + 0x72));
  }
  return;
}

