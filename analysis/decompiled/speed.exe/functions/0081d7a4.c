/* speed.exe 0081d7a4 FUN_0081d7a4; analysis pseudocode, not buildable source.
 * calls 0081f264 FUN_0081f264
 * calls 0082235b FUN_0082235b
 */

void FUN_0081d7a4(int param_1)

{
  int iVar1;
  
  FUN_0082235b(param_1);
  if ((*(byte *)(param_1 * 0x90 + 0x24 + DAT_009c21f4) & 4) == 0) {
    FUN_0081f264(param_1,0);
  }
  else {
    iVar1 = 0;
    if (0 < DAT_0090bd18) {
      do {
        FUN_0081f264(param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0090bd18);
    }
  }
  return;
}

