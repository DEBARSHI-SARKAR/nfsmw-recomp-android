/* speed.exe 0066bb80 FUN_0066bb80; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00407630 FUN_00407630
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0066bb80(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = FUN_00454810(0xb1669f64,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_00407630(iVar1,0,0);
  if ((_DAT_00890968 < *(float *)(local_c + 4)) && (_DAT_00890968 < *(float *)(local_c + 0x10))) {
    FUN_0045a430();
    return 1;
  }
  FUN_0045a430();
  return 0;
}

