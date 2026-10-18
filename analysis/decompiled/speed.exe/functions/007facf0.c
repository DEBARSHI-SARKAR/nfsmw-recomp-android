/* speed.exe 007facf0 FUN_007facf0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007facf0(int param_1)

{
  char cVar1;
  
  DAT_009c0a30 = DAT_009c0a30 << ((byte)param_1 & 0x1f);
  DAT_009bfe28 = DAT_009bfe28 - param_1;
  if (DAT_009bfe28 < 0x10) {
    cVar1 = (char)DAT_009bfe28;
    DAT_009bfe28 = DAT_009bfe28 + 0x10;
    DAT_009c0a30 = DAT_009c0a30 | (uint)*DAT_009c1840 << (0x10U - cVar1 & 0x1f);
    DAT_009c1840 = DAT_009c1840 + 1;
  }
  return;
}

