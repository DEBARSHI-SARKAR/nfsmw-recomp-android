/* speed.exe 004da510 FUN_004da510; analysis pseudocode, not buildable source.
 * calls 004b0010 FUN_004b0010
 * calls 004ae8b0 FUN_004ae8b0
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004b0040 FUN_004b0040
 * calls 00454810 FUN_00454810
 * calls 004b0120 FUN_004b0120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004da510(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 fVar7;
  
  cVar3 = FUN_004ae8b0();
  if (cVar3 == '\0') {
    if (*(float *)(param_1 + 0xfc) <= _DAT_00890dc4) {
      pfVar4 = (float *)FUN_00454810(0xfdf3bc20,0);
      if (pfVar4 == (float *)0x0) {
        pfVar4 = (float *)FUN_006269b0(4);
      }
      fVar1 = *(float *)(param_1 + 0x6c) - *pfVar4;
    }
    else {
      fVar1 = *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x6c);
    }
    *(float *)(param_1 + 0x6c) = fVar1;
  }
  iVar6 = *(int *)(param_1 + 0x58);
  fVar1 = *(float *)(*(int *)(iVar6 + 8) + 0x14);
  fVar2 = *(float *)(param_1 + 0x6c);
  if (*(float *)(param_1 + 0x6c) <= _DAT_00890968) {
    fVar2 = _DAT_00890968;
  }
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x6c) = fVar2;
  iVar5 = FUN_007c4b80();
  fVar1 = (float)(iVar5 + -1000) * _DAT_00890dc4;
  fVar2 = _DAT_00890968;
  if ((_DAT_00890968 < fVar1) && (fVar2 = fVar1, _DAT_0089096c < fVar1)) {
    fVar2 = _DAT_0089096c;
  }
  fVar2 = fVar2 * _DAT_00897d98 + _DAT_00897d9c;
  fVar1 = fVar2 * *(float *)(*(int *)(iVar6 + 8) + 0x14);
  fVar7 = extraout_ST0;
  if (extraout_ST0 <= (float10)_DAT_00890968) {
    fVar7 = (float10)_DAT_00890968;
  }
  if ((float10)fVar1 < fVar7) {
    fVar7 = (float10)fVar1;
  }
  *(float *)(param_1 + 0x6c) = (float)fVar7;
  if ((fVar7 == (float10)fVar2 * (float10)*(float *)(*(int *)(iVar6 + 8) + 0x14)) &&
     (*(char *)(param_1 + 0x78) == '\0')) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    FUN_004b0010();
    FUN_004b0040(0,0,1000,0);
    FUN_004b0040(0,0x4399999a,2000,0);
  }
  else if ((fVar7 != (float10)*(float *)(*(int *)(iVar6 + 8) + 0x14)) &&
          (*(char *)(param_1 + 0x78) != '\0')) {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(float *)(param_1 + 0x70) =
       *(float *)(param_1 + 0x6c) / *(float *)(*(int *)(*(int *)(param_1 + 0x58) + 8) + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + 8) + 0x10);
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_004b0120(param_2);
    iVar6 = FUN_007c4b80();
    *(int *)(param_1 + 0x5c) = *(int *)(&DAT_008f1550 + iVar6 * 4) * *(int *)(param_1 + 0x5c) >> 0xf
    ;
  }
  return 0;
}

