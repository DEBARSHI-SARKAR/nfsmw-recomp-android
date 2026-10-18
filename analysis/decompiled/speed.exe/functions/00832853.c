/* speed.exe 00832853 FUN_00832853; analysis pseudocode, not buildable source.
 */

int FUN_00832853(ushort param_1,ushort param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  iVar4 = DAT_009c2c1c + -1;
  iVar3 = DAT_009c2c1c;
  if (((DAT_009c2c10 != 0) && (DAT_009c2c1c != 0)) && (-1 < iVar4)) {
    do {
      iVar3 = (local_8 + iVar4) / 2;
      puVar2 = *(ushort **)(DAT_009c2c10 + 4 + iVar3 * 8);
      uVar1 = *puVar2;
      if ((param_1 == uVar1) && (param_2 == puVar2[1])) {
        *param_3 = *(undefined4 *)(DAT_009c2c10 + iVar3 * 8);
        return iVar3;
      }
      if ((uVar1 < param_1) || ((param_1 == uVar1 && (puVar2[1] < param_2)))) {
        iVar3 = iVar3 + 1;
        local_8 = iVar3;
      }
      else {
        iVar4 = iVar3 + -1;
      }
    } while (local_8 <= iVar4);
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),0xffff);
}

