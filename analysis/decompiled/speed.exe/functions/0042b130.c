/* speed.exe 0042b130 FUN_0042b130; analysis pseudocode, not buildable source.
 * calls 00773fb0 FUN_00773fb0
 * calls 005d59f0 FUN_005d59f0
 * calls 0076e220 FUN_0076e220
 * calls 00410220 FUN_00410220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00410670 FUN_00410670
 * calls 004042a0 FUN_004042a0
 * calls 007862d0 FUN_007862d0
 * calls 00765410 FUN_00765410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b130(undefined4 param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  int local_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  char cStack_268;
  short sStack_266;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008681cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*param_2 + 8))();
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) != 0)) &&
      (piVar5 = (int *)FUN_005d59f0(&LAB_00403700), piVar5 != (int *)0x0)) &&
     (iVar6 = (**(code **)(*piVar5 + 0x48))(), iVar6 != 0)) {
    FUN_0077b9e0();
    fStack_32c = *(float *)(iVar4 + 0x20);
    fStack_328 = *(float *)(iVar4 + 0x24);
    fStack_324 = *(float *)(iVar4 + 0x28);
    uStack_4 = 0;
    FUN_007862d0((float *)(iVar4 + 0x10),&fStack_32c,1,0);
    fStack_314 = fStack_25c;
    fStack_338 = fStack_238;
    fStack_310 = fStack_258;
    fStack_30c = fStack_254;
    fStack_334 = fStack_234;
    fStack_330 = fStack_230;
    FUN_00410220(&fStack_338);
    fStack_318 = -fStack_338;
    fStack_320 = fStack_330;
    fStack_31c = fStack_334;
    fStack_338 = fStack_330;
    fStack_308 = (*(float *)(iVar4 + 0x10) - fStack_314) * fStack_330 +
                 fStack_334 * (*(float *)(iVar4 + 0x14) - fStack_310) +
                 fStack_318 * (*(float *)(iVar4 + 0x18) - fStack_30c);
    fStack_330 = fStack_318;
    pbVar7 = (byte *)FUN_00765410(sStack_266 * 0x16 + DAT_009b38c0,(int)cStack_268);
    if ((pbVar7 != (byte *)0x0) && (*pbVar7 != 0)) {
      FUN_00773fb0((int)sStack_266,&fStack_300);
      bVar1 = fStack_32c * fStack_300 + fStack_328 * fStack_2fc + fStack_324 * fStack_2f8 <
              _DAT_00890968;
      iVar4 = FUN_004042a0(1,bVar1);
      iVar6 = 0;
      fStack_33c = 0.0;
      if (0 < iVar4) {
        do {
          iVar8 = iVar6;
          if (bVar1) {
            iVar8 = ((uint)*pbVar7 - iVar6) + -1;
          }
          if (((byte)*(undefined4 *)(pbVar7 + iVar8 * 4 + 4) & 0xf) == 1) {
            fVar10 = (float10)FUN_00410670(iVar6,bVar1);
            if (fVar10 < (float10)fStack_33c) {
              fVar10 = (float10)fStack_33c;
            }
            fStack_33c = (float)fVar10;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      fVar2 = (fStack_308 - fStack_33c) + _DAT_00890d3c;
      fVar3 = _DAT_00890604;
      if ((fVar2 <= _DAT_00890604) && (fVar3 = fVar2, fVar2 < _DAT_0089096c)) {
        fVar3 = _DAT_0089096c;
      }
      pfVar9 = *(float **)(local_304 + 0x14);
      if (pfVar9 != *(float **)(local_304 + 0x18)) {
        do {
          *pfVar9 = -fVar3;
          pfVar9 = pfVar9 + 8;
        } while (pfVar9 != *(float **)(local_304 + 0x18));
      }
    }
    uStack_4 = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = pvStack_c;
  return;
}

