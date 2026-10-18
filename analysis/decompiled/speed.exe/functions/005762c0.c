/* speed.exe 005762c0 FUN_005762c0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005762c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  iVar3 = 0;
  pfVar6 = (float *)(*(int *)(param_1 + 300) + 0x138);
  pfVar5 = (float *)(param_1 + 0x268);
  do {
    iVar4 = 0;
    pfVar7 = pfVar6;
    pfVar8 = pfVar5;
    do {
      fVar1 = *pfVar8;
      fVar2 = *pfVar7;
      if (fVar2 != fVar1) {
        return (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 |
                              (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                             (ushort)(fVar2 == fVar1) << 0xe);
      }
      iVar4 = iVar4 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    } while (iVar4 < 7);
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 7;
    pfVar6 = pfVar6 + 7;
  } while (iVar3 < 3);
  iVar3 = *(int *)(*(int *)(param_1 + 300) + 0x18c);
  return CONCAT31((int3)((uint)iVar3 >> 8),*(int *)(param_1 + 0x2c8) == iVar3);
}

