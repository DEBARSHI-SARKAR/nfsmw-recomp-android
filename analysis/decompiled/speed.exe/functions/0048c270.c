/* speed.exe 0048c270 FUN_0048c270; analysis pseudocode, not buildable source.
 * calls 005caea0 FUN_005caea0
 * calls 004866c0 FUN_004866c0
 * calls 005cb5d0 FUN_005cb5d0
 * calls 00401670 FUN_00401670
 * calls 0048b290 FUN_0048b290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048c270(int param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x44) + 0x10);
    piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x10);
    pfVar4 = (float *)(**(code **)*piVar2)();
    fStack_58 = *pfVar4;
    fStack_54 = pfVar4[1];
    fStack_50 = pfVar4[2];
    iVar3 = *(int *)(param_1 + 0x48);
    fStack_40 = *(float *)(iVar3 + 4) + *(float *)(param_1 + 0x4c);
    fStack_3c = *(float *)(iVar3 + 8) + *(float *)(param_1 + 0x50);
    fStack_38 = *(float *)(iVar3 + 0xc) + *(float *)(param_1 + 0x54);
    fStack_28 = fStack_38;
    uVar5 = (**(code **)(*piVar2 + 0x18))();
    FUN_00401670(&fStack_40,uVar5,&fStack_30);
    fStack_28 = fStack_28 + fStack_50;
    fStack_4c = (fStack_30 + fStack_58) - *param_2;
    fStack_48 = (fStack_2c + fStack_54) - param_2[1];
    fStack_44 = fStack_28 - param_2[2];
    uVar5 = (**(code **)(*piVar1 + 0x20))();
    FUN_004866c0(param_1 + 4,uVar5,&fStack_10);
    fStack_20 = -fStack_10;
    fStack_1c = -fStack_c;
    fStack_18 = -fStack_8;
    uStack_14 = uStack_4;
    if (*(int *)(param_1 + 100) != 0) {
      fStack_58 = 0.0;
      fStack_54 = 0.0;
      fStack_50 = 0.0;
      FUN_005caea0(&fStack_20,&fStack_4c,&fStack_58);
      fVar6 = (float10)FUN_005cb5d0(fStack_54,fStack_50);
      fVar6 = fVar6 * (float10)_DAT_00891068 * (float10)_DAT_008953ec;
      fVar7 = (float10)fsin(fVar6);
      fStack_30 = (float)fVar7;
      fVar6 = (float10)fcos(fVar6);
      fStack_24 = (float)fVar6;
      fStack_2c = fStack_30 * _DAT_00890968;
      fStack_28 = fStack_2c;
      if (*(int *)(param_1 + 100) == 2) {
        fVar6 = (float10)FUN_005cb5d0(fStack_54,fStack_58);
        fVar6 = fVar6 * (float10)_DAT_008933d4 * (float10)_DAT_008953ec;
        fVar7 = (float10)fsin(fVar6);
        fVar6 = (float10)fcos((float10)(float)fVar6);
        fStack_34 = (float)fVar6;
        fStack_40 = (float)((float10)_DAT_00890968 * fVar7);
        fStack_3c = (float)((float10)_DAT_00890968 * fVar7);
        fStack_38 = (float)fVar7;
        FUN_004866c0(&fStack_30,&fStack_40,&fStack_30);
      }
      FUN_004866c0(&fStack_30,param_1 + 4,&fStack_40);
      FUN_004866c0(&fStack_40,uVar5,&fStack_10);
      fStack_20 = -fStack_10;
      uStack_14 = uStack_4;
      fStack_1c = -fStack_c;
      fStack_18 = -fStack_8;
    }
    FUN_005caea0(&fStack_20,&fStack_4c,&fStack_4c);
    fVar6 = (float10)FUN_005cb5d0(fStack_4c,fStack_44);
    if ((float10)*(float *)(param_1 + 0x58) < fVar6) {
      FUN_0048b290(param_1 + 0x14,param_1 + 0x20,param_2,
                   (float)((float10)*(float *)(param_1 + 0x58) - fVar6),&fStack_10,&fStack_20);
      return;
    }
    if (fVar6 < -(float10)*(float *)(param_1 + 0x5c)) {
      FUN_0048b290(param_1 + 0x2c,param_1 + 0x38,param_2,
                   (float)(-(float10)*(float *)(param_1 + 0x5c) - fVar6),&fStack_10,&fStack_20);
      return;
    }
  }
  return;
}

