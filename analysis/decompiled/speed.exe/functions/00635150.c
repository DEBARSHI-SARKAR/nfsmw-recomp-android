/* speed.exe 00635150 FUN_00635150; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_00635150(void)

{
  int iVar1;
  
  iVar1 = FUN_005d29d0(0x1c,0);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

