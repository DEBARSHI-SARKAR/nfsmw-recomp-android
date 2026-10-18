/* speed.exe 0057e470 FUN_0057e470; analysis pseudocode, not buildable source.
 * calls 004fb000 FUN_004fb000
 * calls 00525940 FUN_00525940
 * calls 005257f0 FUN_005257f0
 * calls 00516b90 FUN_00516b90
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_0057e470(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  
  FUN_00460ca0(s_unknown_008f3f40,param_1,0x40);
  DAT_0091cf68 = 1;
  cVar1 = FUN_00516b90(PTR_DAT_008f4318);
  if (cVar1 != '\0') {
    cVar1 = FUN_004fb000();
    pcVar2 = "InGameAnyMovie.fng";
    if (cVar1 != '\0') {
      pcVar2 = "WS_InGameAnyMovie.fng";
    }
    FUN_00525940(pcVar2,0,0,0);
    return;
  }
  cVar1 = FUN_004fb000();
  pcVar2 = "InGameAnyMovie.fng";
  if (cVar1 != '\0') {
    pcVar2 = "WS_InGameAnyMovie.fng";
  }
  FUN_005257f0(pcVar2,0,0,0);
  return;
}

