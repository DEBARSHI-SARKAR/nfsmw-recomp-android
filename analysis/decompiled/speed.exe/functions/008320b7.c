/* speed.exe 008320b7 FUN_008320b7; analysis pseudocode, not buildable source.
 * calls 00831f67 FUN_00831f67
 * calls 00834580 FUN_00834580
 */

int FUN_008320b7(uint param_1,uint param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  pcVar2 = &DAT_009c2ae6;
  do {
    if (*pcVar2 == '\0') {
      return iVar3;
    }
    pcVar2 = pcVar2 + 0x10;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x9c2be6);
  iVar3 = FUN_00834580();
  iVar5 = 0;
  piVar4 = &DAT_009c2ae0;
  while (((*(ushort *)(piVar4[2] + 2) == 0 ||
          ((uint)(iVar3 - *piVar4) <= (uint)*(ushort *)(piVar4[2] + 2))) ||
         (piVar4 == (int *)&DAT_009c2ad0))) {
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + 1;
    if (0x9c2bdf < (int)piVar4) {
      iVar3 = 0;
      piVar4 = &DAT_009c2ae8;
      while ((bVar1 = *(byte *)((int)piVar4 + -1), param_1 < *(ushort *)(*piVar4 + 4) ||
             (bVar1 != param_2))) {
        piVar4 = piVar4 + 4;
        iVar3 = iVar3 + 1;
        if (0x9c2be7 < (int)piVar4) {
          return -1;
        }
      }
      (&DAT_009c2ae6)[iVar3 * 0x10] = 0;
      (&DAT_009c2aa0)[bVar1] = (&DAT_009c2aa0)[bVar1] + -1;
      return iVar3;
    }
  }
  FUN_00831f67(iVar5);
  return iVar5;
}

