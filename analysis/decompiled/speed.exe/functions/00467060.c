/* speed.exe 00467060 FUN_00467060; analysis pseudocode, not buildable source.
 * calls 0045ed30 FUN_0045ed30
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_00467060(undefined4 param_1)

{
  undefined1 local_50 [16];
  undefined1 local_40 [60];
  
  FUN_0045ed30(local_50,param_1);
  if ((_DAT_00911210 & 1) == 0) {
    _DAT_00911210 = _DAT_00911210 | 1;
  }
  FUN_0045f490(&DAT_00911200,local_40);
  return &DAT_00911200;
}

