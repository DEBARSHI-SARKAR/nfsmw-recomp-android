/* speed.exe 00672f50 FUN_00672f50; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0066b970 FUN_0066b970
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00672f50(void)

{
  int iVar1;
  undefined4 uVar2;
  float *local_c;
  
  iVar1 = FUN_00454810(0xc92a0142,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_0066b970(iVar1,0,0);
  if ((local_c[6] <= _DAT_00890968) && (*local_c <= _DAT_00890968)) {
    FUN_0045a430();
    return 0;
  }
  uVar2 = 1;
  if (local_c[3] <= _DAT_00890968) {
    uVar2 = 2;
  }
  FUN_0045a430();
  return uVar2;
}

