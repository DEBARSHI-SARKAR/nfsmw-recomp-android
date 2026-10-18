/* speed.exe 006672d0 FUN_006672d0; analysis pseudocode, not buildable source.
 * calls 00460b80 FUN_00460b80
 * calls 00464080 FUN_00464080
 * calls 00464050 FUN_00464050
 * calls 00664250 FUN_00664250
 * calls 006617e0 FUN_006617e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006672d0(void)

{
  FUN_006617e0();
  FUN_00664250();
  _DAT_00925890 = FUN_00464050(0);
  _DAT_00925898 = FUN_00460b80();
  _DAT_00925894 = FUN_00464080(0);
  if (DAT_00925e84 != '\0') {
    DAT_00925e84 = '\0';
  }
  DAT_00925e70 = &LAB_00666f90;
  _DAT_00925e78 = "LoadingRegion";
  _DAT_00925e74 = 0;
  return;
}

