/* speed.exe 00518fe0 FUN_00518fe0; analysis pseudocode, not buildable source.
 * calls 00660200 FUN_00660200
 * calls 0064c9a0 FUN_0064c9a0
 */

void FUN_00518fe0(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0091cb20 + 0x1e) == '\0') {
    iVar1 = FUN_0064c9a0();
    if (iVar1 != 0) {
      FUN_00660200(2,8,9);
    }
  }
  return;
}

