/* speed.exe 00417790 FUN_00417790; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 0040b280 FUN_0040b280
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00417790(int param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
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
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x20))();
  pfVar5 = (float *)(**(code **)(*piVar3 + 0x24))();
  fStack_2c = *pfVar5 * _DAT_00890864 + *pfVar4;
  fStack_28 = pfVar5[1] * _DAT_00890864 + pfVar4[1];
  fStack_24 = pfVar5[2] * _DAT_00890864 + pfVar4[2];
  fStack_18 = *(float *)(DAT_00919690 + 0x40);
  fStack_1c = *(float *)(DAT_00919690 + 0x48);
  fStack_20 = -*(float *)(DAT_00919690 + 0x44);
  fStack_38 = -*(float *)(DAT_00919690 + 0x54) * _DAT_00890e98 + fStack_20;
  fStack_34 = *(float *)(DAT_00919690 + 0x58) * _DAT_00890e98 + fStack_1c;
  fStack_30 = *(float *)(DAT_00919690 + 0x50) * _DAT_00890e98 + fStack_18;
  fVar6 = (float10)FUN_005c5e80((*pfVar4 - fStack_38) * (*pfVar4 - fStack_38) +
                                (pfVar4[1] - fStack_34) * (pfVar4[1] - fStack_34) +
                                (pfVar4[2] - fStack_30) * (pfVar4[2] - fStack_30));
  fVar1 = (float)fVar6;
  fStack_48 = 7.0;
  if ((fVar1 < _DAT_00890858) && (_DAT_00890d3c < fVar1)) {
    fStack_48 = fVar1 - _DAT_00890634;
  }
  cVar2 = FUN_0040b280(pfVar4,&fStack_2c,&fStack_38,fStack_48,&fStack_20);
  if (cVar2 != '\0') {
    fStack_44 = fStack_20 - fStack_38;
    fStack_40 = fStack_1c - fStack_34;
    fStack_3c = fStack_18 - fStack_30;
    FUN_0040fe20(&fStack_44,&fStack_44);
    fVar1 = (fStack_20 - fStack_2c) * fStack_44 +
            (fStack_1c - fStack_28) * fStack_40 + (fStack_18 - fStack_24) * fStack_3c;
    fStack_20 = fStack_44 * fVar1 + fStack_2c;
    *param_2 = fStack_20;
    fStack_1c = fStack_40 * fVar1 + fStack_28;
    param_2[1] = fStack_1c;
    fStack_18 = fStack_3c * fVar1 + fStack_24;
    param_2[2] = fStack_18;
    fVar1 = fStack_40 * pfVar5[1] + fStack_3c * pfVar5[2] + fStack_44 * *pfVar5;
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fVar1 = fVar1 * ((_DAT_00890858 - fStack_48) * _DAT_00890634 + _DAT_00890e04);
    fStack_38 = fStack_44 * fVar1 + *pfVar5;
    fStack_34 = fStack_40 * fVar1 + pfVar5[1];
    fStack_30 = fStack_3c * fVar1 + pfVar5[2];
    (**(code **)(*piVar3 + 0x60))(&fStack_38);
  }
  return;
}

