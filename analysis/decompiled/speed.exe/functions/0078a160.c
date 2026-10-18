/* speed.exe 0078a160 thunk_FUN_0078a060; analysis pseudocode, not buildable source.
 */

void thunk_FUN_0078a060(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_009b3890;
  if (DAT_009b3890 != 0) {
    FUN_00789550();
    thunk_FUN_007c7250(iVar2);
  }
  iVar2 = DAT_009b3904;
  DAT_009b3890 = 0;
  if (DAT_009b3904 != 0) {
    iVar1 = *(int *)(DAT_009b3904 + 8);
    if (iVar1 != 0) {
      FUN_00784ba0();
      FUN_005d0370(iVar1,0xc,0);
    }
    FUN_005d0370(iVar2,0x10,0);
  }
  DAT_009b3904 = 0;
  FUN_00771120();
  FUN_007816f0();
  return;
}

