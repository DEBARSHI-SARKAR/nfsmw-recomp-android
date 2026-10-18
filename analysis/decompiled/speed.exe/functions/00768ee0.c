/* speed.exe 00768ee0 FUN_00768ee0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_00768ee0(float *param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_4 + 8);
  *param_1 = (*(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10)) * param_2 +
             *(float *)(iVar1 + 0x10);
  param_1[1] = (*(float *)(iVar2 + 0x14) - *(float *)(iVar1 + 0x14)) * param_2 +
               *(float *)(iVar1 + 0x14);
  param_1[2] = (*(float *)(iVar2 + 0x18) - *(float *)(iVar1 + 0x18)) * param_2 +
               *(float *)(iVar1 + 0x18);
  iVar1 = *(int *)(param_4 + 8);
  iVar2 = *(int *)(param_3 + 8);
  param_1[4] = (*(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20)) * param_2 +
               *(float *)(iVar2 + 0x20);
  param_1[5] = (*(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24)) * param_2 +
               *(float *)(iVar2 + 0x24);
  param_1[6] = (*(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28)) * param_2 +
               *(float *)(iVar2 + 0x28);
  pfVar3 = *(float **)(param_3 + 8);
  pfVar4 = *(float **)(param_4 + 8);
  param_1[8] = (*pfVar4 - *pfVar3) * param_2 + *pfVar3;
  param_1[9] = (pfVar4[1] - pfVar3[1]) * param_2 + pfVar3[1];
  param_1[10] = (pfVar4[2] - pfVar3[2]) * param_2 + pfVar3[2];
  pfVar3 = (float *)(*(int *)(param_3 + 8) + 0x60);
  param_1[0x10] = (*(float *)(*(int *)(param_4 + 8) + 0x60) - *pfVar3) * param_2 + *pfVar3;
  pfVar3 = (float *)(*(int *)(param_3 + 8) + 0x5c);
  param_1[0x11] = (*(float *)(*(int *)(param_4 + 8) + 0x5c) - *pfVar3) * param_2 + *pfVar3;
  pfVar3 = (float *)FUN_00454810(0x1d76ea96,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(0x10);
  }
  pfVar4 = (float *)FUN_00454810(0x1d76ea96,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(0x10);
  }
  param_1[0x14] = (*pfVar3 - *pfVar4) * param_2 + *pfVar4;
  param_1[0x15] = (pfVar3[1] - pfVar4[1]) * param_2 + pfVar4[1];
  param_1[0x16] = (pfVar3[2] - pfVar4[2]) * param_2 + pfVar4[2];
  iVar1 = *(int *)(param_4 + 8);
  iVar2 = *(int *)(param_3 + 8);
  param_1[0x18] =
       (*(float *)(iVar1 + 0x30) - *(float *)(iVar2 + 0x30)) * param_2 + *(float *)(iVar2 + 0x30);
  param_1[0x19] =
       (*(float *)(iVar1 + 0x34) - *(float *)(iVar2 + 0x34)) * param_2 + *(float *)(iVar2 + 0x34);
  param_1[0x1a] =
       (*(float *)(iVar1 + 0x38) - *(float *)(iVar2 + 0x38)) * param_2 + *(float *)(iVar2 + 0x38);
  param_1[0x1c] =
       (*(float *)(*(int *)(param_4 + 8) + 0x58) - *(float *)(*(int *)(param_3 + 8) + 0x58)) *
       param_2 + *(float *)(*(int *)(param_3 + 8) + 0x58);
  pfVar3 = (float *)(*(int *)(param_3 + 8) + 0x54);
  param_1[0x1d] = (*(float *)(*(int *)(param_4 + 8) + 0x54) - *pfVar3) * param_2 + *pfVar3;
  pfVar3 = (float *)FUN_00454810(0x756239,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(4);
  }
  pfVar4 = (float *)FUN_00454810(0x756239,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  param_1[0x1e] = (*pfVar3 - *pfVar4) * param_2 + *pfVar4;
  pfVar3 = (float *)FUN_00454810(0x2ef8a8bf,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(4);
  }
  pfVar4 = (float *)FUN_00454810(0x2ef8a8bf,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  param_1[0x1f] = (*pfVar3 - *pfVar4) * param_2 + *pfVar4;
  pfVar3 = (float *)(*(int *)(param_3 + 8) + 0x50);
  param_1[0x20] = (*(float *)(*(int *)(param_4 + 8) + 0x50) - *pfVar3) * param_2 + *pfVar3;
  iVar1 = *(int *)(param_4 + 8);
  iVar2 = *(int *)(param_3 + 8);
  param_1[0x24] =
       (*(float *)(iVar1 + 0x40) - *(float *)(iVar2 + 0x40)) * param_2 + *(float *)(iVar2 + 0x40);
  param_1[0x25] =
       (*(float *)(iVar1 + 0x44) - *(float *)(iVar2 + 0x44)) * param_2 + *(float *)(iVar2 + 0x44);
  param_1[0x26] =
       (*(float *)(iVar1 + 0x48) - *(float *)(iVar2 + 0x48)) * param_2 + *(float *)(iVar2 + 0x48);
  return;
}

