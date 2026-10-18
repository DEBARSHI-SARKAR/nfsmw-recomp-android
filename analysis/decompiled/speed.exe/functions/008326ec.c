/* speed.exe 008326ec FUN_008326ec; analysis pseudocode, not buildable source.
 */

int FUN_008326ec(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  local_c = DAT_009c2c1c + -1;
  local_8 = 0;
  if (DAT_009c2c1c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_009c2c1c;
    if (-1 < local_c) {
      uVar1 = *param_1;
      do {
        iVar5 = (local_c + local_8) / 2;
        puVar3 = *(ushort **)(DAT_009c2c10 + 4 + iVar5 * 8);
        if ((uVar1 == *puVar3) && (param_1[1] == puVar3[1])) break;
        if (iVar5 == 0) {
          uVar2 = **(ushort **)(DAT_009c2c10 + 4);
          if (((uVar1 == uVar2) && (param_1[1] < (*(ushort **)(DAT_009c2c10 + 4))[1])) ||
             (uVar1 < uVar2)) {
            return 0;
          }
        }
        if (((uVar1 == *puVar3) && (param_1[1] < puVar3[1])) || (uVar1 < *puVar3)) {
          puVar4 = *(ushort **)(DAT_009c2c10 + -4 + iVar5 * 8);
          uVar2 = *puVar4;
          if ((uVar1 == uVar2) && (puVar4[1] < param_1[1])) {
            return iVar5;
          }
          if (uVar2 < uVar1) {
            return iVar5;
          }
        }
        if ((*puVar3 < uVar1) || ((uVar1 == *puVar3 && (puVar3[1] < param_1[1])))) {
          local_8 = iVar5 + 1;
          if (*(int *)(DAT_009c2c10 + 4 + local_8 * 8) == 0) {
            return CONCAT22((short)((uint)iVar5 >> 0x10),(short)local_8);
          }
        }
        else {
          local_c = iVar5 + -1;
        }
      } while (local_8 <= local_c);
    }
    iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),0xffff);
  }
  return iVar5;
}

