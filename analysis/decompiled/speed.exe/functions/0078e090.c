/* speed.exe 0078e090 FUN_0078e090; analysis pseudocode, not buildable source.
 * calls 00460f80 FUN_00460f80
 * calls 0056bc10 FUN_0056bc10
 * calls 00599050 FUN_00599050
 * calls 00598390 FUN_00598390
 */

void __fastcall FUN_0078e090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_18 [4];
  int local_14;
  undefined4 auStack_10 [4];
  
  if ((*(int *)(param_1 + 0x73c) != 0) &&
     (local_14 = param_1, iVar1 = FUN_00598390(*(int *)(param_1 + 0x73c)), iVar1 != 0)) {
    iVar4 = 0;
    pcVar6 = local_18;
    pcVar5 = (char *)(param_1 + 0x67d);
    iVar1 = 4;
    do {
      if (*pcVar5 != '\0') {
        if (((pcVar5 == (char *)0x0) || (*pcVar5 != '0')) || (pcVar5[1] != 'x')) {
          pcVar3 = pcVar5;
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
          }
        }
        else {
          uVar2 = FUN_00460f80(pcVar5);
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\x01';
          }
          pcVar3 = (char *)FUN_0056bc10(uVar2);
        }
        auStack_10[iVar4] = pcVar3;
        iVar4 = iVar4 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcVar5 = pcVar5 + 0x2d;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (3 < iVar4) {
      iVar4 = 3;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        FUN_00599050(iVar1,auStack_10[iVar1],local_18[iVar1] == '\0');
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    *(undefined1 *)(local_14 + 0x740) = 1;
  }
  return;
}

