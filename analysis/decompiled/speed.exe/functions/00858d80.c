/* speed.exe 00858d80 FUN_00858d80; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00858d80(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 0;
  piVar2 = &DAT_008c76ac;
  do {
    iVar1 = *piVar2;
    if (iVar1 <= param_2) {
      bVar6 = true;
      pcVar4 = param_1;
      piVar5 = piVar2 + 1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pcVar4 == (char)*piVar5;
        pcVar4 = pcVar4 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (bVar6);
      if (bVar6) {
        return *(undefined4 *)(&UNK_008c76a8 + iVar3 * 0x18);
      }
    }
    piVar5 = piVar2 + 5;
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + 1;
    if (*piVar5 == 0) {
      return 0;
    }
  } while( true );
}

