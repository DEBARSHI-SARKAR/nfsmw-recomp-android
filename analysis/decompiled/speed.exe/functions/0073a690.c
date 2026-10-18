/* speed.exe 0073a690 FUN_0073a690; analysis pseudocode, not buildable source.
 */

void FUN_0073a690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar1 + 0xe) = 2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

