/* speed.exe 005d47c0 FUN_005d47c0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_005d47c0(void)

{
  int iVar1;
  
  iVar1 = FUN_005d29d0(0x18,&PTR_LAB_004c5452_1_00890f10);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

