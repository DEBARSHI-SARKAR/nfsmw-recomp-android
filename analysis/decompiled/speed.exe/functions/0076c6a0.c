/* speed.exe 0076c6a0 FUN_0076c6a0; analysis pseudocode, not buildable source.
 */

void FUN_0076c6a0(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    uVar5 = 0;
    while ((iVar3 != 0 && (uVar5 < *(uint *)(param_1 + 4)))) {
      uVar4 = 0;
      if (*(short *)(iVar3 + 0x18) != 0) {
        uVar4 = 0xc0;
      }
      psVar1 = *(short **)(iVar3 + 0x1c);
      if ((psVar1 != (short *)0x0) && (*psVar1 == 0)) {
        *(ushort *)(iVar3 + 0x12) = *(ushort *)(iVar3 + 0x12) | uVar4;
      }
      if ((uVar4 != 0) && (psVar1 != (short *)0x0)) {
        iVar6 = 0;
        if (psVar1[2] != 0) {
          pbVar2 = (byte *)((int)psVar1 + (ushort)psVar1[1] + 0x1d);
          do {
            *pbVar2 = *pbVar2 | (byte)uVar4;
            pbVar2 = pbVar2 + 0x20;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)(*(int *)(iVar3 + 0x1c) + 4));
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = (uVar5 & 0xffff) * 0x40 + *(int *)(param_1 + 8);
    }
  }
  return;
}

