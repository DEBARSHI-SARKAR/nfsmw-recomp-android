/* speed.exe 0052f890 FUN_0052f890; analysis pseudocode, not buildable source.
 * calls 00503360 FUN_00503360
 * calls 00503380 FUN_00503380
 * calls 00572360 FUN_00572360
 * calls 0051f4b0 FUN_0051f4b0
 * calls 00511820 FUN_00511820
 */

void __fastcall FUN_0052f890(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086f563;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d7b8;
  local_4 = 1;
  local_10 = param_1;
  FUN_00503380(0);
  local_14 = FUN_00511820();
  FUN_00503360(&local_14,1);
  local_4 = local_4 & 0xffffff00;
  FUN_0051f4b0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

