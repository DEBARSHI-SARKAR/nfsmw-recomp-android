/* speed.exe 007dce20 ctrlevent_capture; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007dceab FUN_007dceab
 * calls 007dceb6 FUN_007dceb6
 */

/* Library Function - Single Match
    _ctrlevent_capture@4
   
   Library: Visual Studio 2003 Debug
   __stdcall ctrlevent_capture,4 */

void ctrlevent_capture(int param_1)

{
  undefined4 unaff_ESI;
  undefined4 *local_28;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd800;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(0);
  if (param_1 == 0) {
    local_28 = &DAT_009bae70;
    local_20 = DAT_009bae70;
  }
  else {
    local_28 = &DAT_009bae74;
    local_20 = DAT_009bae74;
  }
  if ((local_20 != 0) && (local_20 != 1)) {
    *local_28 = 0;
  }
  local_8 = 0xffffffff;
  FUN_007dceab();
  FUN_007dceb6(unaff_ESI);
  return;
}

