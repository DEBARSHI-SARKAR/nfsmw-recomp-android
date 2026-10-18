/* speed.exe 004cc910 FUN_004cc910; analysis pseudocode, not buildable source.
 * calls 004c7020 FUN_004c7020
 * calls 004c6f10 FUN_004c6f10
 * calls 004d96b0 FUN_004d96b0
 * calls 007869c0 FUN_007869c0
 * calls 0045a430 FUN_0045a430
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007831e0 FUN_007831e0
 * calls 006eeb60 FUN_006eeb60
 */

void __fastcall FUN_004cc910(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c4c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00897764;
  local_4 = 2;
  FUN_007869c0(0);
  if ((DAT_00911fa8 != 0) && (DAT_008f86f8 != 0)) {
    piVar2 = (int *)FUN_004d96b0(param_1[5]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0045a430();
    FUN_004c6f10();
    thunk_FUN_007c7250(iVar1);
    param_1[5] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007831e0();
  FUN_004c7020();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = pvStack_c;
  return;
}

