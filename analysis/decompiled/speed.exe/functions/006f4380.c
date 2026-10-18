/* speed.exe 006f4380 FUN_006f4380; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ecd50 FUN_006ecd50
 */

void FUN_006f4380(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_009885d0;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    FUN_006ecd50();
    FUN_005d0370(iVar2,0x28,0);
    iVar2 = iVar1;
  }
  return;
}

