/* speed.exe 00659530 FUN_00659530; analysis pseudocode, not buildable source.
 * calls 007224f0 FUN_007224f0
 * calls 0064b3b0 FUN_0064b3b0
 * calls 00768ca0 FUN_00768ca0
 * calls 0072c070 FUN_0072c070
 * calls 004647c0 FUN_004647c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00659530(void)

{
  undefined4 uVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_004647c0(local_80,"TRACKS\\STREAM%s.BUN",DAT_009a3a20 + 0x40);
  uVar1 = FUN_00768ca0(local_80,local_40,0x40);
  FUN_0064b3b0(uVar1);
  FUN_007224f0();
  if (((DAT_0091cf90[300] & 4U) == 0) || (*DAT_0091cf90 != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_0072c070(local_40,uVar1);
  if (DAT_00925e84 != '\0') {
    DAT_00925e84 = '\0';
  }
  DAT_00925e70 = &LAB_00666fa0;
  _DAT_00925e78 = "BeginGameFlowLoadTrack";
  _DAT_00925e74 = 0;
  return;
}

