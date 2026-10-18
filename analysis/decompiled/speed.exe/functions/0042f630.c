/* speed.exe 0042f630 FUN_0042f630; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042f630(int *param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)(**(code **)(*param_3 + 0x5c))();
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
  pfVar1 = (float *)param_1[5];
  fVar5 = ((float10)(float)param_1[8] + (float10)_DAT_0089096c) * (float10)_DAT_00890864;
  fVar5 = ((float10)_DAT_0089096c - fVar5) + fVar5 * ((float10)(float)fVar3 / fVar4);
  fVar4 = (float10)_DAT_00890968 * fVar5;
  *pfVar1 = (float)fVar4;
  fVar3 = (float10)_DAT_008918d0;
  pfVar1[1] = (float)fVar4;
  pfVar1[2] = (float)(fVar5 * fVar3);
  iVar2 = param_1[5];
  *(float *)(iVar2 + 0x20) = (float)(fVar5 * (float10)_DAT_008918cc);
  *(float *)(iVar2 + 0x24) = (float)fVar4;
  fVar3 = (float10)_DAT_008908e8;
  *(float *)(iVar2 + 0x28) = (float)fVar4;
  iVar2 = param_1[5];
  *(float *)(iVar2 + 0x40) = (float)(fVar5 * fVar3);
  *(float *)(iVar2 + 0x44) = (float)fVar4;
  *(float *)(iVar2 + 0x48) = (float)fVar4;
  iVar2 = param_1[5];
  fVar3 = (float10)_DAT_008918c8;
  *(float *)(iVar2 + 0x60) = (float)fVar4;
  *(float *)(iVar2 + 100) = (float)fVar4;
  *(float *)(iVar2 + 0x68) = (float)(fVar5 * fVar3);
  return;
}

