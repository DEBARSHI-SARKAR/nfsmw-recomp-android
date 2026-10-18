/* speed.exe 00766680 FUN_00766680; analysis pseudocode, not buildable source.
 */

int FUN_00766680(int param_1,short param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(byte *)(param_1 + 0x10) != 0) {
    puVar2 = (ushort *)(param_1 + 0x12);
    do {
      iVar1 = (uint)*puVar2 * 0x16 + DAT_009b38c0;
      if ((param_2 != *(short *)(iVar1 + 8)) && ((*(byte *)(iVar1 + 10) & 1) == 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x10));
  }
  return 0;
}

