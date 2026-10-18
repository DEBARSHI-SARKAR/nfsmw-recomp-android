/* speed.exe 008086e6 FUN_008086e6; analysis pseudocode, not buildable source.
 */

void FUN_008086e6(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    uVar1 = 0;
    iVar2 = 6;
    do {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      uVar1 = uVar1 >> 1 & 0x7f;
      if ((iVar4 >> ((byte)iVar2 & 0x1f) & 1U) == 0) {
        uVar1 = *(uint *)(param_1 + uVar1 * 0xc);
      }
      else {
        uVar1 = *(uint *)(param_1 + 4 + uVar1 * 0xc);
      }
    } while (((uVar1 & 1) == 0) && (0 < iVar2));
    *(ushort *)(param_2 + iVar4 * 2) =
         (ushort)((uVar1 >> 1 & 0x7f | iVar3 * 0x800) << 1) | (ushort)uVar1 & 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  return;
}

