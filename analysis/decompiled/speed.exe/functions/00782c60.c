/* speed.exe 00782c60 FUN_00782c60; analysis pseudocode, not buildable source.
 * calls 00782a30 FUN_00782a30
 * calls 0076c6a0 FUN_0076c6a0
 */

void FUN_00782c60(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  do {
    FUN_0076c6a0(*(undefined4 *)(uVar2 + DAT_009b38a0));
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x1000);
  piVar1 = DAT_009b3c84 + DAT_009b3c8c;
  for (piVar3 = DAT_009b3c84; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    FUN_00782a30();
    *(undefined1 *)(*piVar3 + 0x80) = 0;
  }
  return;
}

