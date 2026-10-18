/* speed.exe 0076fde0 FUN_0076fde0; analysis pseudocode, not buildable source.
 * calls 00766680 FUN_00766680
 */

undefined1 __fastcall FUN_0076fde0(int param_1)

{
  char cVar1;
  ushort *puVar2;
  int iVar3;
  int local_8 [2];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar3 = (int)*(short *)(param_1 + 0x8e);
    puVar2 = (ushort *)(iVar3 * 0x16 + DAT_009b38c0);
    if ((*(byte *)(iVar3 * 0x16 + 10 + DAT_009b38c0) & 1) != 0) {
      cVar1 = *(char *)(param_1 + 0x8c);
      local_8[0] = (uint)*puVar2 * 0x20 + DAT_009b38bc;
      local_8[1] = (uint)puVar2[1] * 0x20 + DAT_009b38bc;
      puVar2 = (ushort *)FUN_00766680(local_8[cVar1],iVar3);
      if ((puVar2 == (ushort *)0x0) || (-1 < (char)puVar2[5])) {
        puVar2 = (ushort *)FUN_00766680(local_8[(int)cVar1 ^ 1],iVar3);
      }
    }
    if ((puVar2 != (ushort *)0x0) && ((char)puVar2[5] < '\0')) {
      if ((short)puVar2[3] != -1) {
        return *(undefined1 *)(DAT_009b38c8 + 4 + (short)puVar2[3] * 8);
      }
    }
  }
  return 0xff;
}

