/* speed.exe 0082221f FUN_0082221f; analysis pseudocode, not buildable source.
 */

int FUN_0082221f(int param_1)

{
  int iVar1;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar1 = *(int *)(DAT_009c21f8 + param_1 * 8);
  return *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8);
}

