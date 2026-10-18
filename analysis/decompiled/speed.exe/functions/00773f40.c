/* speed.exe 00773f40 FUN_00773f40; analysis pseudocode, not buildable source.
 */

uint FUN_00773f40(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = 0;
  if (*(byte *)(param_1 + 0x10) != 0) {
    puVar4 = (ushort *)(param_1 + 0x12);
    do {
      puVar1 = (ushort *)((uint)*puVar4 * 0x16 + DAT_009b38c0);
      iVar2 = (uint)*puVar1 * 0x20 + DAT_009b38bc;
      if (param_1 == iVar2) {
        iVar2 = (uint)puVar1[1] * 0x20 + DAT_009b38bc;
      }
      if (param_2 == iVar2) {
        return (uint)*puVar4;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x10));
  }
  return 0xffffffff;
}

