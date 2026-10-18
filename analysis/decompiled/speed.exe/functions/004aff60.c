/* speed.exe 004aff60 FUN_004aff60; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 007c94b0 __chkstk
 * calls 0081b1ce FUN_0081b1ce
 * calls 00460c70 FUN_00460c70
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_004aff60(void)

{
  int iVar1;
  undefined4 local_1fc0;
  undefined4 local_1fbc;
  undefined4 local_1fb8;
  undefined4 local_1fb4;
  undefined4 local_1fb0;
  undefined4 local_1fac;
  undefined4 local_1fa8;
  undefined4 local_1fa4;
  undefined1 local_1fa0 [8092];
  undefined4 uStack_4;
  
  uStack_4 = 0x4aff6a;
  FUN_0081b1ce(local_1fa0,0x1fa0);
  local_1fc0 = 0;
  local_1fbc = 0;
  local_1fb8 = 0;
  local_1fb4 = 0;
  local_1fb0 = 0;
  local_1fac = 0;
  local_1fa8 = 0;
  local_1fa4 = 0;
  iVar1 = FUN_00460c50(local_1fa0);
  FUN_00460c70(&local_1fc0,(int)&local_1fc0 + iVar1 + 1);
  return;
}

