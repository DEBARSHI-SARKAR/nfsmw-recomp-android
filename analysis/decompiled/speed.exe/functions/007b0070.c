/* speed.exe 007b0070 FUN_007b0070; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0045d380 FUN_0045d380
 */

void FUN_007b0070(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0045d3a0(0);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_0045d380(iVar4);
      if ((((iVar3 != 0) && (iVar3 != 4)) && (*(int *)(iVar3 + 8) != 0)) &&
         (((iVar1 = *(int *)(*(int *)(iVar3 + 8) + 0x10), iVar1 == 0x71 || (iVar1 == 0x72)) ||
          ((iVar1 == 0x69 || (iVar1 == 0x6a)))))) {
        *(bool *)(iVar3 + 0x10) = *(char *)(iVar3 + 0x10) == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

