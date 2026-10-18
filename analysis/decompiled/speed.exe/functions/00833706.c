/* speed.exe 00833706 FUN_00833706; analysis pseudocode, not buildable source.
 * calls 00832f5b FUN_00832f5b
 */

void FUN_00833706(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = FUN_00832f5b();
  iVar2 = 0;
  if (*(char *)(unaff_ESI + 3) != '\0') {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(unaff_ESI + 3));
  }
  return;
}

