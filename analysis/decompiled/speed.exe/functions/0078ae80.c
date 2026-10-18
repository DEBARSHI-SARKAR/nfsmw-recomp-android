/* speed.exe 0078ae80 FUN_0078ae80; analysis pseudocode, not buildable source.
 * calls 00723a00 FUN_00723a00
 * calls 00730bf0 FUN_00730bf0
 * calls 00465240 FUN_00465240
 */

void FUN_0078ae80(void)

{
  FUN_00730bf0(0x34800,1);
  DAT_009b4168 = FUN_00723a00(0x34800,"Online Buffer",0);
  FUN_00465240(8,DAT_009b4168,0x34800,"Online");
  return;
}

