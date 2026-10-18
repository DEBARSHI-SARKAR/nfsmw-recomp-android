/* speed.exe 00645540 FUN_00645540; analysis pseudocode, not buildable source.
 * calls 00643b60 FUN_00643b60
 * calls 005d0370 FUN_005d0370
 * calls 006340d0 FUN_006340d0
 * calls 005d59e0 FUN_005d59e0
 */

void __fastcall FUN_00645540(undefined4 *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00879cff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a7ec8;
  uVar1 = 0;
  local_4 = 1;
  if (param_1[10] != 0) {
    do {
      FUN_006340d0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[10]);
  }
  FUN_005d0370(param_1[9],param_1[10] << 6,"EventSequencerSystems");
  local_4 = local_4 & 0xffffff00;
  FUN_00643b60();
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

