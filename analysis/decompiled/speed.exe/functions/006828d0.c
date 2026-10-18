/* speed.exe 006828d0 FUN_006828d0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 006721c0 FUN_006721c0
 * calls 005e48f0 FUN_005e48f0
 * calls 00681620 FUN_00681620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006828d0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  
  uVar2 = param_2;
  pfVar3 = (float *)FUN_006721c0((int)*(short *)(param_1 + 8));
  if ((DAT_0091e000 == 0) || (*(char *)(DAT_0091e000 + 0x198a) == '\0')) {
    if (pfVar3 == (float *)0x0) goto LAB_0068294e;
    fVar1 = *pfVar3 + _DAT_008a9330;
    fVar7 = (float10)FUN_006e8de0();
    if ((float10)fVar1 < fVar7) {
      pfVar3 = pfVar3 + 2;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar3 = 0.0;
        pfVar3 = pfVar3 + 1;
      }
      pfVar3 = (float *)0x0;
      goto LAB_0068294e;
    }
  }
  if (pfVar3 != (float *)0x0) {
    iVar4 = 0;
    pfVar5 = pfVar3 + 2;
    do {
      if (*pfVar5 != 0.0) goto LAB_0068295e;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < 0x40);
  }
LAB_0068294e:
  FUN_005e48f0((int)*(short *)(param_1 + 8));
LAB_0068295e:
  uVar6 = 0;
  if (0 < *(short *)(param_1 + 0xc)) {
    do {
      param_2 = 0;
      if (((pfVar3 != (float *)0x0) && (uVar6 < 0x800)) &&
         (((uint)pfVar3[(uVar6 >> 5) + 2] >> ((byte)uVar6 & 0x1f) & 1) != 0)) {
        param_2 = 1;
      }
      FUN_00681620(uVar2,param_2);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)*(short *)(param_1 + 0xc));
  }
  return;
}

