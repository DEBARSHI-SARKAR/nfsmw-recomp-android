/* speed.exe 006bd7c0 FUN_006bd7c0; analysis pseudocode, not buildable source.
 * calls 006c2e60 FUN_006c2e60
 * calls 006bd4b0 FUN_006bd4b0
 * calls 006c8770 FUN_006c8770
 * calls 006bcfa0 FUN_006bcfa0
 * calls 006bd0d0 FUN_006bd0d0
 * calls 006c3a30 FUN_006c3a30
 * calls 006bcdc0 FUN_006bcdc0
 */

void FUN_006bd7c0(void)

{
  DAT_00982a24 = 0;
  (**(code **)(*DAT_00982bdc + 0x48))(DAT_00982bdc,0,0,0,&DAT_00982a28);
  (**(code **)(*DAT_00982bdc + 0xa0))(DAT_00982bdc,&DAT_00982a2c);
  if (0 < DAT_00901830) {
    FUN_006c8770();
  }
  FUN_006c2e60();
  FUN_006bd4b0();
  FUN_006bcdc0();
  FUN_006bcfa0();
  FUN_006bd0d0();
  FUN_006c3a30();
  DAT_00982bac = 1;
  return;
}

