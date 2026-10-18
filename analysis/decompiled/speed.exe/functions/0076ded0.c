/* speed.exe 0076ded0 FUN_0076ded0; analysis pseudocode, not buildable source.
 */

int FUN_0076ded0(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_1 * 0x16 + DAT_009b38c0);
  iVar1 = (uint)*puVar2 * 0x20 + DAT_009b38bc;
  if (param_2 == iVar1) {
    iVar1 = (uint)puVar2[1] * 0x20 + DAT_009b38bc;
  }
  return iVar1;
}

