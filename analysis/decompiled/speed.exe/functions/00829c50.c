/* speed.exe 00829c50 FUN_00829c50; analysis pseudocode, not buildable source.
 * calls 00834f6a FUN_00834f6a
 * calls 00834e6d FUN_00834e6d
 * calls 00834ec8 FUN_00834ec8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00829c50(void)

{
  int iVar1;
  uint local_c;
  undefined1 local_5;
  
  if (DAT_009c29b0 == 0) {
    if ((DAT_009c2988 == (code *)0x0) || (iVar1 = (*DAT_009c2988)(8), iVar1 == 0)) {
      DAT_009c29b0 = 0;
    }
    else {
      FUN_00834f6a(1);
      DAT_009c29b0 = iVar1;
    }
  }
  local_5 = DAT_009c2974;
  DAT_009c2974 = 1;
  local_c = 0;
  iVar1 = FUN_00834e6d(&local_c);
  local_c = (uint)(iVar1 == 0);
  if (local_c != 0) {
    DAT_009c2954 = 0;
    DAT_009c2958 = 0;
    DAT_009c295c = 0;
    DAT_009c2960 = 0;
    DAT_009c2974 = 1;
    DAT_009c2975 = 0;
    _DAT_009c299c = 0;
    _DAT_009c2998 = 0;
    _DAT_009c2994 = 0;
    _DAT_009c2990 = 0;
    DAT_009c2964 = 0;
    FUN_00834ec8(1);
    return 0;
  }
  DAT_009c2974 = local_5;
  return 0xffffffee;
}

