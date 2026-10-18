/* speed.exe 00701510 FUN_00701510; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00701510(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x184);
  if (*(int *)(param_1 + 0x104) < (int)*(char *)(iVar3 + 0xb0)) {
    fVar1 = *(float *)(param_1 + 0x140);
    fVar2 = *(float *)(iVar3 + 0x94);
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                     (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2) {
      return iVar3;
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

