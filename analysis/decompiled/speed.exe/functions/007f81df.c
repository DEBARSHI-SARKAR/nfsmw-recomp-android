/* speed.exe 007f81df FUN_007f81df; analysis pseudocode, not buildable source.
 * calls 007f8139 FUN_007f8139
 * calls 007f9abe FUN_007f9abe
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_007f81df(int param_1)

{
  int iVar1;
  uint3 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_007f8139();
  fVar3 = (float10)FUN_007f9abe();
  iVar1 = *(int *)(param_1 + 0x40) + iVar1;
  fVar4 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar4 = fVar4 + (float10)_DAT_00891214;
  }
  fVar4 = fVar4 * fVar3 * (float10)_DAT_00890d60;
  *(float *)(param_1 + 0x48) = (float)fVar4;
  fVar3 = (float10)*(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) < 0) {
    fVar3 = fVar3 + (float10)_DAT_00891214;
  }
  uVar2 = (uint3)(CONCAT22((short)((uint)*(int *)(param_1 + 0x44) >> 0x10),
                           (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                           (ushort)(fVar4 == fVar3) << 0xe) >> 8);
  if (fVar4 >= fVar3 && (fVar4 == fVar3) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

