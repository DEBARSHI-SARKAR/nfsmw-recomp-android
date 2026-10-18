/* speed.exe 007f369d FUN_007f369d; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f369d(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = param_3 - 1;
  if ((uint)((int)pcVar2 - (int)(param_2 + 1)) < uVar3) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_2 + 1);
  }
  iVar5 = unaff_EDI - (int)param_2;
  iVar4 = uVar3 + 1;
  do {
    cVar1 = *param_2;
    if (('@' < cVar1) && (cVar1 < '[')) {
      cVar1 = cVar1 + ' ';
    }
    param_2[iVar5] = cVar1;
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)(uVar3 + 1 + unaff_EDI) = 0;
  return;
}

