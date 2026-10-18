/* speed.exe 006d44b0 FUN_006d44b0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006d4100 FUN_006d4100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d44b0(void)

{
  undefined4 uVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 fVar3;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  uint uStack_14;
  
  iVar5 = 0xa8;
  piVar4 = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,7);
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  uVar9 = 0;
  if (*(int *)(DAT_009196b4 + 0xc) != 0) {
    iVar5 = FUN_007c4b80(piVar4,iVar5,0,0,0,0);
    fVar3 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + (float10)_DAT_00891214;
    }
    fVar6 = (float)(((fVar3 * (float10)_DAT_008a7a5c - (float10)_DAT_0089096c) * extraout_ST0 +
                    (float10)_DAT_0089096c) * (float10)_DAT_008a0bac);
    iVar5 = FUN_007c4b80(piVar4,iVar5,fVar6,fVar7,fVar8,uVar9);
    fVar3 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + (float10)_DAT_00891214;
    }
    fVar7 = (float)(((fVar3 * (float10)_DAT_008a7a5c - (float10)_DAT_0089096c) * extraout_ST0_00 +
                    (float10)_DAT_0089096c) * (float10)_DAT_008a0bac);
    iVar5 = FUN_007c4b80(piVar4,iVar5,fVar6,fVar7,fVar8,uVar9);
    fVar3 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + (float10)_DAT_00891214;
    }
    fVar8 = (float)(((fVar3 * (float10)_DAT_008a7a5c - (float10)_DAT_0089096c) * extraout_ST0_01 +
                    (float10)_DAT_0089096c) * (float10)_DAT_008a0bac);
  }
  iVar2 = 0;
  do {
    uVar1 = FUN_007c4b80(piVar4,iVar5,fVar6,fVar7,fVar8,uVar9);
    *(undefined4 *)((int)&uStack_1c + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0xc);
  if ((DAT_00982c60 == -1) ||
     (iVar5 = (&DAT_0093de60)[DAT_00982c60], (&DAT_0093de60)[DAT_00982c60] == 0)) {
    iVar5 = DAT_00982a28;
  }
  FUN_006d4100(iVar5,0,(uint)CONCAT11((undefined1)uStack_1c,uStack_18) << 8 | uStack_14 & 0xff,1,9,3
               ,0);
  return;
}

