/* speed.exe 0073a650 FUN_0073a650; analysis pseudocode, not buildable source.
 */

void FUN_0073a650(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar1 = *(int *)(param_3 + iVar3 * 4);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
        *(undefined1 *)(iVar1 + 0xe) = 1;
        *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(iVar1 + 8);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  return;
}

