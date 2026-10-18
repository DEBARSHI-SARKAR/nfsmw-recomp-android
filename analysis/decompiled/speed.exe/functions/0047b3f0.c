/* speed.exe 0047b3f0 FUN_0047b3f0; analysis pseudocode, not buildable source.
 * calls 0046d2e0 FUN_0046d2e0
 * calls 004647c0 FUN_004647c0
 * calls 0047b030 FUN_0047b030
 * calls 00477fa0 FUN_00477fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047b3f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 local_10 [16];
  
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    piVar5 = (int *)*param_1;
    do {
      if (param_2 == *piVar5) {
        if ((int *)*param_1 + iVar3 * 5 == (int *)0x0) {
          return 0;
        }
        FUN_004647c0(local_10,"Track %d",param_3);
        iVar3 = FUN_00477fa0(local_10);
        param_1[9] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        fVar8 = (float10)FUN_0047b030();
        fVar1 = (float)fVar8;
        fVar2 = _DAT_00890968;
        if (((float10)_DAT_00890968 < fVar8) && (fVar2 = fVar1, _DAT_0089096c < fVar1)) {
          fVar2 = _DAT_0089096c;
        }
        if (fVar1 != fVar2) {
          return 0;
        }
        uVar4 = FUN_0046d2e0(fVar1);
        uVar6 = (int)*(short *)(iVar3 + 0x14) - 1;
        uVar7 = ((int)uVar4 < 1) - 1 & uVar4;
        if ((int)uVar7 <= (int)uVar6) {
          uVar6 = uVar7;
        }
        if (uVar4 != uVar6) {
          return 0;
        }
        return uVar4 * 0x84 + 0x28 + iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 5;
    } while (iVar3 < (int)param_1[5]);
  }
  return 0;
}

