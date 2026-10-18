/* speed.exe 00606cf0 FUN_00606cf0; analysis pseudocode, not buildable source.
 * calls 00606c20 FUN_00606c20
 */

int FUN_00606cf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x1c);
  FUN_00606c20();
  if ((*(byte *)(*(int *)(unaff_ESI + 0x14) + 8) & 1) == 0) {
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
    while (iVar3 != 0) {
      *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14) = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14) + -1
      ;
      FUN_00606c20();
      iVar3 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
    }
    piVar1 = (int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
    *piVar1 = *piVar1 + -1;
  }
  return *(int *)(unaff_ESI + 0x1c) + (in_EAX - iVar2);
}

