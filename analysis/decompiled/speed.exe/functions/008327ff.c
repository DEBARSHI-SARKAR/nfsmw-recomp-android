/* speed.exe 008327ff FUN_008327ff; analysis pseudocode, not buildable source.
 */

int FUN_008327ff(ushort param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = DAT_009c2c1c + -1;
  iVar2 = DAT_009c2c1c;
  if (((DAT_009c2c10 != 0) && (DAT_009c2c1c != 0)) && (-1 < iVar3)) {
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      uVar1 = **(ushort **)(DAT_009c2c10 + 4 + iVar2 * 8);
      if (param_1 == uVar1) {
        *param_2 = *(undefined4 *)(DAT_009c2c10 + iVar2 * 8);
        return iVar2;
      }
      if (uVar1 < param_1) {
        iVar4 = iVar2 + 1;
      }
      else {
        iVar3 = iVar2 + -1;
      }
    } while (iVar4 <= iVar3);
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),0xffff);
}

