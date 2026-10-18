/* speed.exe 004b5040 FUN_004b5040; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004b5040(int param_1)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((DAT_00904ff9 == '\0') && (DAT_009b0894 == 0)) {
    if ((DAT_00904ffb == '\0') && (DAT_009b089c == 0)) {
      iVar3 = *(int *)(param_1 + 0x8c);
      fVar4 = (float10)*(float *)(&DAT_008964a8 + iVar3 * 4) * (float10)_DAT_008964a0;
      if (*(char *)(param_1 + 0x80) == '\0') {
        fVar5 = (float10)_DAT_008964a4;
        goto LAB_004b50dd;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x8c);
      fVar4 = (float10)*(float *)(&DAT_008964d4 + iVar3 * 4) * (float10)_DAT_008964cc;
      if (*(char *)(param_1 + 0x80) == '\0') {
        fVar5 = (float10)_DAT_008964fc;
        goto LAB_004b50dd;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8c);
    fVar4 = (float10)*(float *)(&DAT_00896500 + iVar3 * 4) * (float10)_DAT_008964f8;
    if (*(char *)(param_1 + 0x80) == '\0') {
      fVar5 = (float10)_DAT_008964fc;
      goto LAB_004b50dd;
    }
  }
  fVar5 = (float10)_DAT_0089096c;
LAB_004b50dd:
  fVar5 = fVar5 * fVar4;
  if (iVar3 < 5) {
    sVar2 = FUN_007c4b80();
    uVar1 = (ulonglong)(ushort)(*(short *)(param_1 + 0x274) - sVar2) % 0xffff;
    *(short *)(param_1 + 0x274) = (short)uVar1;
    fVar4 = (float10)FUN_0045db30((int)uVar1);
    *(float *)(param_1 + 0x278) = (float)(fVar4 * (float10)_DAT_0089654c);
    fVar5 = (float10)(float)fVar5 * (float10)*(float *)(param_1 + 0x26c);
  }
  return (float10)DAT_009142d8 * (float10)_DAT_008910dc * fVar5;
}

