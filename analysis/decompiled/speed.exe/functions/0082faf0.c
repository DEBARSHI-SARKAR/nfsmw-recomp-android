/* speed.exe 0082faf0 FUN_0082faf0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0082fb0b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0082faf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  
  iVar1 = *(int *)(in_stack_00000010 + 8);
  iVar5 = iVar1 - *(int *)(in_stack_00000010 + 0x14);
  iVar2 = FUN_007c4b80();
  iVar4 = iVar2;
  if ((iVar2 < iVar5) && (iVar2 < iVar1)) {
    iVar3 = FUN_007c4b80();
    do {
      iVar4 = iVar4 + iVar3;
      if (iVar5 < iVar4) break;
    } while (iVar4 < iVar1);
  }
  if (iVar1 < iVar4) {
    iVar4 = iVar1 + iVar2;
  }
  return iVar4 - iVar5;
}

