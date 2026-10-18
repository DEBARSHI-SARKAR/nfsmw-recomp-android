/* speed.exe 0048c190 FUN_0048c190; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_0048c190(void)

{
  int iVar1;
  
  iVar1 = FUN_005d29d0(0xc,0);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

