/* speed.exe 006cba70 FUN_006cba70; analysis pseudocode, not buildable source.
 * calls 006cb680 FUN_006cb680
 * calls EXTERNAL:00000005 SetErrorMode
 * calls 006cb9d0 FUN_006cb9d0
 * calls 006c2620 FUN_006c2620
 * calls 007ee0ca FUN_007ee0ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cba70(void)

{
  char cVar1;
  
  SetErrorMode(1);
  DAT_0093dd0c = 0;
  DAT_0093dc08 = 0;
  _DAT_0093de10 = 0;
  _DAT_0093de14 = 0;
  _DAT_0093de18 = 0;
  _DAT_0093de1c = 0;
  FUN_006cb680();
  DAT_008f945c = DAT_0093dc08;
  FUN_006cb9d0();
  FUN_007ee0ca(0,0);
  cVar1 = FUN_006c2620();
  DAT_00982c30 = 0;
  if (cVar1 != '\0') {
    DAT_0093dc08 = DAT_008f945c;
    DAT_0093dc09 = 0x3a;
    DAT_0093dc0a = 0x5c;
    DAT_0093dc0b = 0;
  }
  return;
}

