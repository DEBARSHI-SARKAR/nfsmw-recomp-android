/* speed.exe 00602680 FUN_00602680; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 * calls 00602590 FUN_00602590
 * calls 0045a470 FUN_0045a470
 * calls 0045a490 FUN_0045a490
 * calls 00452430 FUN_00452430
 * calls 00452440 FUN_00452440
 * calls 005da0f0 FUN_005da0f0
 * calls 00455c40 FUN_00455c40
 */

undefined4 * __thiscall FUN_00602680(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008761f8;
  local_c = ExceptionList;
  if (*(undefined4 **)(param_2 + 4) == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_2 + 0xc);
    ExceptionList = &local_c;
    if ((piVar1 != (int *)0x0) && (ExceptionList = &local_c, *piVar1 == 0)) {
      ExceptionList = &local_c;
      FUN_005fa780(piVar1);
    }
    piVar1 = *(int **)(param_2 + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
    uVar2 = FUN_00452430();
  }
  else {
    uVar2 = **(undefined4 **)(param_2 + 4);
    ExceptionList = &local_c;
  }
  FUN_00602590(uVar2,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a39c4;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[8] = 0xffffffff;
  uVar2 = FUN_00455c40(0x5cea9d46,"GRaceCustom",1);
  uVar3 = FUN_00452440();
  FUN_0045a490(0x5cea9d46,uVar2,uVar3);
  uVar2 = FUN_00452430();
  FUN_0045a470(uVar2);
  uVar2 = FUN_005da0f0();
  param_1[6] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

