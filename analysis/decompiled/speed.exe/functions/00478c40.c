/* speed.exe 00478c40 FUN_00478c40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00478c40(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * _DAT_00890968;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * _DAT_00890968;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * _DAT_00890968;
  if (*(char *)(param_1 + 6) != '\0') {
    iVar6 = 0;
    do {
      fVar1 = *(float *)(*(int *)(param_1 + 8) + 4 + iVar6);
      pfVar4 = (float *)(*(int *)(param_1 + 8) + iVar6);
      fVar2 = pfVar4[2];
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x10;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *pfVar4;
      *(float *)(param_1 + 0x14) = fVar1 + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x18) = fVar2 + *(float *)(param_1 + 0x18);
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 6));
  }
  bVar3 = 1;
  if (*(byte *)(param_1 + 6) != 0) {
    bVar3 = *(byte *)(param_1 + 6);
  }
  fVar1 = _DAT_0089096c / (float)bVar3;
  *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x14);
  return;
}

