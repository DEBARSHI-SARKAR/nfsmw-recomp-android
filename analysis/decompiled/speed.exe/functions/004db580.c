/* speed.exe 004db580 FUN_004db580; analysis pseudocode, not buildable source.
 * calls 0045ce70 FUN_0045ce70
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045ce40 FUN_0045ce40
 * calls 0045db30 FUN_0045db30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004db580(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 fVar9;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar6 = FUN_0045ce40();
    fVar8 = (float10)FUN_0045ce70(*(undefined4 *)(param_1 + 0xf0),uVar6);
    *(float *)(param_1 + 0xec) = (float)fVar8;
    uVar6 = FUN_0045ce40();
    *(undefined4 *)(param_1 + 0xf0) = uVar6;
    if (DAT_00919690 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
      uVar6 = FUN_007c4b80();
      *(undefined4 *)(param_1 + 0x10c) = uVar6;
      iVar7 = FUN_007c4b80();
      iVar7 = 0x500 - iVar7;
      uVar6 = FUN_007c4b80();
      fVar8 = (float10)_DAT_0089096c;
      *(undefined4 *)(param_1 + 0x100) = uVar6;
      fVar8 = (fVar8 - extraout_ST0) * (float10)_DAT_00897dcc;
      *(float *)(param_1 + 0xfc) = (float)fVar8;
      if (fVar8 < (float10)*(float *)(*(int *)(param_1 + 0x18) + 0xa0)) {
        *(float *)(param_1 + 0xfc) = *(float *)(*(int *)(param_1 + 0x18) + 0xa0) * _DAT_00897de0;
      }
      fVar8 = (float10)FUN_0045dbf0(iVar7);
      fVar1 = *(float *)(iVar5 + 0x10);
      fVar9 = (float10)FUN_0045db30(iVar7);
      fVar1 = (float)(((float10)(float)(fVar8 * (float10)fVar1) -
                      fVar9 * (float10)*(float *)(iVar5 + 0x14)) *
                     (float10)*(float *)(param_1 + 0xfc));
      fVar8 = (float10)FUN_0045dbf0(iVar7);
      fVar2 = *(float *)(iVar5 + 0x14);
      fVar9 = (float10)FUN_0045db30(iVar7);
      iVar7 = 0xffff - iVar7;
      fVar2 = (float)((fVar9 * (float10)*(float *)(iVar5 + 0x10) +
                      (float10)(float)(fVar8 * (float10)fVar2)) *
                     (float10)*(float *)(param_1 + 0xfc));
      fVar8 = (float10)FUN_0045dbf0(iVar7);
      fVar3 = *(float *)(iVar5 + 0x10);
      fVar9 = (float10)FUN_0045db30(iVar7);
      fVar3 = (float)(((float10)(float)(fVar8 * (float10)fVar3) -
                      fVar9 * (float10)*(float *)(iVar5 + 0x14)) *
                     (float10)*(float *)(param_1 + 0xfc));
      fVar8 = (float10)FUN_0045dbf0(iVar7);
      fVar4 = *(float *)(iVar5 + 0x14);
      fVar9 = (float10)FUN_0045db30(iVar7);
      fVar8 = (fVar9 * (float10)*(float *)(iVar5 + 0x10) + (float10)(float)(fVar8 * (float10)fVar4))
              * (float10)*(float *)(param_1 + 0xfc);
      if (*(int *)(param_1 + 0x108) == 0) {
        *(float *)(param_1 + 0x90) = fVar1 + *(float *)(iVar5 + 0x40);
        *(float *)(param_1 + 0x94) = fVar2 + *(float *)(iVar5 + 0x44);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar5 + 0x48);
      }
      else {
        *(float *)(param_1 + 0xa0) = fVar3 + *(float *)(iVar5 + 0x40);
        *(float *)(param_1 + 0xa4) = (float)(fVar8 + (float10)*(float *)(iVar5 + 0x44));
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar5 + 0x48);
      }
      if (*(int *)(param_1 + 0x110) == 0) {
        *(float *)(param_1 + 0x90) = fVar1 + *(float *)(iVar5 + 0x40);
        *(float *)(param_1 + 0x94) = fVar2 + *(float *)(iVar5 + 0x44);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar5 + 0x48);
        return;
      }
      *(float *)(param_1 + 0xa0) = fVar3 + *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0xa4) = (float)(fVar8 + (float10)*(float *)(iVar5 + 0x44));
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar5 + 0x48);
    }
  }
  return;
}

