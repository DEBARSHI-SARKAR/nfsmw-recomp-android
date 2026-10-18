/* speed.exe 0082bfd0 FUN_0082bfd0; analysis pseudocode, not buildable source.
 */

int FUN_0082bfd0(uint param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_009c2964 + 0x18);
  iVar3 = *(byte *)(iVar1 + 0xf) - 1;
  if (-1 < iVar3) {
    puVar2 = (ushort *)(*(int *)(DAT_009c2964 + 0x24) + iVar3 * 2);
    do {
      if ((*(uint *)(iVar1 + 0xc + (uint)*puVar2 * 4) & param_2 & 0xffffff) == (param_1 & param_2))
      {
        return iVar1 + (uint)*puVar2 * 4;
      }
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar3);
  }
  return 0;
}

