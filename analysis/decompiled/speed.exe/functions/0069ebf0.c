/* speed.exe 0069ebf0 FUN_0069ebf0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0069ebf0(int param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0xf0) + 0x1c))();
    fVar2 = (float10)_DAT_00890968;
    if (fVar7 < fVar2 != (fVar7 == fVar2)) {
      return (uint)(ushort)((ushort)(fVar7 < fVar2) << 8 | (ushort)(NAN(fVar7) || NAN(fVar2)) << 10
                           | (ushort)(fVar7 == fVar2) << 0xe);
    }
    uVar3 = FUN_00452940();
    if (1 < uVar3) {
      uVar4 = FUN_007c4b80();
      uVar6 = uVar3 - 1;
      if (uVar4 + 1 < uVar3 - 1) {
        uVar6 = uVar4 + 1;
      }
      uVar3 = FUN_00452940();
      if (uVar3 <= uVar4) {
        FUN_006269b0(4);
      }
      iVar1 = *(int *)(param_1 + 0xa0);
      uVar3 = FUN_00452940();
      if (uVar6 < uVar3) {
        return iVar1 + 8 + uVar6 * 4;
      }
      uVar3 = FUN_006269b0(4);
      return uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar5 = FUN_00452940();
  if (iVar5 != 0) {
    return iVar1 + 8;
  }
  uVar3 = FUN_006269b0(4);
  return uVar3;
}

