/* speed.exe 00736000 FUN_00736000; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

void __fastcall FUN_00736000(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = 0;
  pcVar3 = (char *)(param_1 + 0x80);
  do {
    if (*pcVar3 != '\0') {
      piVar5 = (int *)(param_1 + 8);
      iVar6 = 4;
      do {
        iVar1 = *piVar5;
        if ((iVar1 != 0) && (iVar2 = FUN_00460dd0(pcVar3,iVar1 + 0x1156), iVar2 == 0)) {
          *(char *)(iVar1 + 0x1149) = (char)iVar4;
        }
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar4 = iVar4 + 1;
    pcVar3 = pcVar3 + 0x10;
  } while (iVar4 < 4);
  pcVar3 = (char *)(param_1 + 0x80);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  return;
}

