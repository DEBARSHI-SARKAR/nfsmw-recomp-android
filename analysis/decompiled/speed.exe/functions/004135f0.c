/* speed.exe 004135f0 FUN_004135f0; analysis pseudocode, not buildable source.
 * calls 00410180 FUN_00410180
 * calls 00410220 FUN_00410220
 * calls 00767400 FUN_00767400
 * calls 004100a0 FUN_004100a0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004135f0(int param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
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
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  fStack_24 = *(float *)(iVar5 + 0x10);
  fStack_20 = *(float *)(iVar5 + 0x14);
  fStack_1c = *(float *)(iVar5 + 0x18);
  if (*(int **)(iVar5 + 0x1c) == (int *)0x0) {
    pfVar7 = (float *)&DAT_008a2fb4;
  }
  else {
    piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0x1c) + 0x54))();
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x24))();
  }
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fStack_4 = pfVar7[2];
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fStack_3c = *pfVar7;
  fStack_38 = pfVar7[1];
  fStack_34 = pfVar7[2];
  if (*(int **)(iVar5 + 0x1c) != (int *)0x0) {
    piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0x1c) + 0x54))();
    fVar8 = (float10)(**(code **)(*piVar6 + 0x30))();
    if ((float10)_DAT_00891080 <= fVar8) {
      fStack_28 = fStack_4;
      fStack_30 = fVar1;
      fStack_2c = fVar2;
      goto LAB_004136a9;
    }
  }
  fStack_28 = *(float *)(iVar5 + 0x28);
  fStack_30 = *(float *)(iVar5 + 0x20);
  fStack_2c = *(float *)(iVar5 + 0x24);
LAB_004136a9:
  FUN_00410220(&fStack_30);
  fStack_10 = -fStack_30;
  fStack_c = fStack_28;
  fStack_18 = fStack_28;
  fStack_14 = 0.0;
  fStack_8 = 0.0;
  fStack_4 = fStack_10;
  FUN_00410220(&fStack_c);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x54))();
  fStack_48 = fStack_24 - fStack_3c;
  fVar1 = *pfVar7;
  fStack_44 = fStack_20 - fStack_38;
  fVar2 = pfVar7[2];
  fStack_40 = fStack_1c - fStack_34;
  fStack_3c = fStack_c * fVar1 + fVar2 * fStack_30;
  fStack_38 = fStack_8 * fVar1 + fStack_2c * fVar2;
  fStack_34 = fStack_4 * fVar1 + fVar2 * fStack_28;
  fStack_18 = fStack_48 + fStack_3c;
  fStack_14 = fStack_44 + fStack_38;
  fStack_10 = fStack_40 + fStack_34;
  fStack_c = fStack_18;
  fStack_8 = fStack_14;
  fStack_4 = fStack_10;
  fVar8 = (float10)FUN_005c5e80(fStack_34 * fStack_34 + fStack_3c * fStack_3c);
  fVar1 = (float)fVar8;
  fVar8 = (float10)FUN_005c5e80(fStack_40 * fStack_40 + fStack_48 * fStack_48);
  fVar2 = (float)fVar8;
  fVar8 = (float10)FUN_005c5e80(fStack_18 * fStack_18 + fStack_10 * fStack_10);
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 - _DAT_00890864;
  if ((param_3 != '\0') && (fVar2 < _DAT_00890cd4 == (fVar2 == _DAT_00890cd4))) {
    fVar3 = -fStack_40;
    cVar4 = FUN_00767400(-fStack_48,fVar3,fStack_3c,fStack_34,0,0,fVar2,auStack_4c,auStack_50);
    if (cVar4 != '\0') {
      fVar1 = fVar1 * _DAT_00891084;
      fStack_8 = 0.0;
      fStack_4 = fStack_48;
      fStack_2c = 0.0;
      fStack_28 = fStack_48;
      fStack_30 = fVar3;
      fStack_c = fVar3;
      fVar9 = (float10)FUN_00410180(&fStack_30);
      fVar9 = (float10)fVar1 / fVar9;
      fStack_30 = (float)((float10)fStack_30 * fVar9);
      fStack_2c = (float)((float10)fStack_2c * fVar9);
      fStack_3c = fStack_30 + fStack_48;
      fStack_38 = fStack_2c + fStack_44;
      fStack_34 = (float)(fVar9 * (float10)fStack_28 + (float10)fStack_40);
      fStack_48 = fStack_48 - fStack_30;
      fStack_44 = fStack_44 - fStack_2c;
      fStack_40 = (float)((float10)fStack_40 - fVar9 * (float10)fStack_28);
      fStack_28 = fStack_40;
      fStack_c = fStack_48;
      fStack_8 = fStack_44;
      fStack_4 = fStack_40;
      fVar9 = (float10)FUN_00410180(&fStack_3c);
      fVar9 = (float10)(float)fVar8 / fVar9;
      fStack_3c = (float)((float10)fStack_3c * fVar9);
      fStack_38 = (float)((float10)fStack_38 * fVar9);
      fStack_34 = (float)((float10)fStack_34 * fVar9);
      fVar9 = (float10)FUN_00410180(&fStack_48);
      fVar9 = (float10)(float)fVar8 / fVar9;
      fStack_48 = (float)((float10)fStack_48 * fVar9);
      fStack_44 = (float)((float10)fStack_44 * fVar9);
      fStack_40 = (float)((float10)fStack_40 * fVar9);
      fVar8 = (float10)FUN_004100a0(&fStack_3c,&fStack_18);
      fVar9 = (float10)FUN_004100a0(&fStack_48,&fStack_18);
      if (fVar9 < (float10)(float)fVar8) {
        fStack_3c = fStack_48;
        fStack_38 = fStack_44;
        fStack_34 = fStack_40;
      }
      *param_2 = fStack_3c + fStack_24;
      param_2[1] = fStack_38 + fStack_20;
      param_2[2] = fStack_34 + fStack_1c;
      return;
    }
  }
  *param_2 = fStack_24 + fStack_3c;
  param_2[1] = fStack_38 + fStack_20;
  param_2[2] = fStack_1c + fStack_34;
  return;
}

