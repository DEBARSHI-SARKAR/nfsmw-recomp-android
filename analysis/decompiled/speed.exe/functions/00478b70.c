/* speed.exe 00478b70 FUN_00478b70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00478b70(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  
  if (*(byte *)(param_1 + 6) < *(byte *)(param_1 + 5)) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) + 1;
  }
  pfVar4 = (float *)((uint)*(byte *)(param_1 + 7) * 0x10 + *(int *)(param_1 + 8));
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *pfVar4;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - fVar1;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - fVar2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x10) = *param_2 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = fVar1 + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = fVar2 + *(float *)(param_1 + 0x18);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  pfVar4 = (float *)((uint)*(byte *)(param_1 + 7) * 0x10 + *(int *)(param_1 + 8));
  *pfVar4 = *param_2;
  pfVar4[1] = fVar1;
  pfVar4[2] = fVar2;
  fVar1 = _DAT_0089096c / (float)*(byte *)(param_1 + 6);
  *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x14);
  bVar3 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar3;
  if (*(byte *)(param_1 + 5) <= bVar3) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}

