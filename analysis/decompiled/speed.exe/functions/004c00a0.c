/* speed.exe 004c00a0 FUN_004c00a0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_004c00a0(void)

{
  int iVar1;
  
  iVar1 = FUN_005d29d0(0x2c,0);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

