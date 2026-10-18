/* speed.exe 00662950 FUN_00662950; analysis pseudocode, not buildable source.
 * calls 0074d1f0 FUN_0074d1f0
 * calls 0073d300 FUN_0073d300
 * calls 007224f0 FUN_007224f0
 * calls 00789290 FUN_00789290
 * calls 005cc240 FUN_005cc240
 * calls 006dfaf0 FUN_006dfaf0
 * calls 00652ef0 FUN_00652ef0
 * calls 004af1a0 FUN_004af1a0
 * calls 007357f0 FUN_007357f0
 * calls 005258b0 FUN_005258b0
 * calls 006fc3a0 FUN_006fc3a0
 * calls 0064b460 FUN_0064b460
 * calls 00735620 FUN_00735620
 * calls 00516b90 FUN_00516b90
 * calls 004b1590 FUN_004b1590
 * calls 00450310 FUN_00450310
 * calls 004facb0 FUN_004facb0
 * calls 007c66d0 _malloc
 * calls 0073de50 FUN_0073de50
 * calls 006c39c0 FUN_006c39c0
 * calls 00503790 FUN_00503790
 * calls 006e79d0 thunk_FUN_00736b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00662950(void)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a2b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_00926064 != 0) && (ExceptionList = &local_c, cVar1 = FUN_00516b90(), cVar1 != '\0')) {
    FUN_005258b0();
  }
  FUN_004facb0();
  FUN_007224f0();
  FUN_0064b460();
  FUN_00503790();
  DAT_0091102c = 0;
  if ((DAT_00904fc8 == '\0') && (DAT_00904fc9 == '\0')) {
    FUN_00652ef0();
  }
  cVar1 = FUN_00735620();
  if (cVar1 != '\0') {
    FUN_007357f0();
  }
  FUN_00789290();
  thunk_FUN_00736b20();
  FUN_004b1590();
  FUN_004af1a0();
  FUN_00450310();
  DAT_00912018 = 0;
  pvVar2 = _malloc(0x120);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0074d1f0();
  }
  local_4 = 0xffffffff;
  if (DAT_00926064 == 0) {
    FUN_00735620();
  }
  cVar1 = FUN_00735620();
  if (cVar1 == '\0') {
    if ((DAT_00926064 != 0) ||
       ((((DAT_0091cf90[300] & 4U) != 0 && (*DAT_0091cf90 == '\x02')) ||
        (pcVar3 = "CareerGame", (DAT_0091cf90[300] & 1U) == 0)))) {
      pcVar3 = "QuickGame";
    }
  }
  else {
    pcVar3 = "OnlineGame";
  }
  FUN_005cc240(pcVar3);
  FUN_006fc3a0();
  FUN_0073d300();
  FUN_006c39c0();
  puVar4 = (undefined4 *)FUN_006dfaf0();
  FUN_0073de50();
  *puVar4 = 0;
  if (DAT_00925e84 != '\0') {
    DAT_00925e84 = '\0';
  }
  _DAT_00925e74 = 0;
  DAT_00925e70 = &LAB_006628f0;
  _DAT_00925e78 = "WaitForSimulation";
  ExceptionList = local_c;
  return;
}

