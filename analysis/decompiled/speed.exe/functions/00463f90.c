/* speed.exe 00463f90 FUN_00463f90; analysis pseudocode, not buildable source.
 */

void FUN_00463f90(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char local_30 [48];
  
  pcVar3 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  pcVar3 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if (DAT_0090e680 != 0) {
    pcVar3 = local_30;
    iVar4 = 0x2f;
    iVar5 = DAT_0090e680 - (int)pcVar3;
    do {
      cVar2 = pcVar3[iVar5];
      iVar4 = iVar4 + -1;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 != 0);
  }
  if (local_30[0] != '\0') {
    pcVar3 = local_30;
    do {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  DAT_0090e680 = 0;
  DAT_0090e684 = 0;
  return;
}

