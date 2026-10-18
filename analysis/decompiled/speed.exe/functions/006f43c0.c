/* speed.exe 006f43c0 FUN_006f43c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ecd50 FUN_006ecd50
 */

void FUN_006f43c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_009885d0;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    if ((*(uint *)(iVar2 + 0x18) >> 4 & 1) != 0) {
      FUN_006ecd50();
      FUN_005d0370(iVar2,0x28,0);
    }
  }
  return;
}

