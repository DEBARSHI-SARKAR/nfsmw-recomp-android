/* speed.exe 004f2c20 FUN_004f2c20; analysis pseudocode, not buildable source.
 * calls 004eb8e0 FUN_004eb8e0
 */

void FUN_004f2c20(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      FUN_004eb8e0(iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return;
}

