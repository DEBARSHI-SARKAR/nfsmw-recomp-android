/* speed.exe 006f4ea0 FUN_006f4ea0; analysis pseudocode, not buildable source.
 * calls 0041cb50 FUN_0041cb50
 * calls 006f2700 FUN_006f2700
 * calls 00621280 FUN_00621280
 * calls 006f47a0 FUN_006f47a0
 * calls 00621210 FUN_00621210
 * calls 005cc240 FUN_005cc240
 * calls 006ea040 FUN_006ea040
 * calls 00627400 FUN_00627400
 */

void __fastcall FUN_006f4ea0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087eb5c;
  local_c = ExceptionList;
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    ExceptionList = &local_c;
    FUN_006ea040();
    FUN_006f2700();
    FUN_006f47a0();
    ExceptionList = local_c;
    return;
  case 2:
    ExceptionList = &local_c;
    iVar1 = FUN_00627400();
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_00621210();
      ExceptionList = local_c;
      return;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    iVar1 = FUN_00627400();
    local_4 = 1;
    goto LAB_006f5108;
  case 4:
    ExceptionList = &local_c;
    FUN_005cc240("AvoidableManager");
    FUN_0041cb50();
    FUN_005cc240("AICopManager");
    FUN_0041cb50();
    FUN_005cc240("AITrafficManager");
    FUN_0041cb50();
    FUN_005cc240("AIParkedCarSpawner");
    FUN_0041cb50();
    FUN_005cc240("PathFinder");
    FUN_0041cb50();
    FUN_005cc240("GameplayActivity");
    FUN_0041cb50();
    FUN_005cc240(&DAT_00893084);
    FUN_0041cb50();
    FUN_005cc240("NISListenerActivity");
    FUN_0041cb50();
    ExceptionList = local_c;
    return;
  case 6:
    ExceptionList = &local_c;
    iVar1 = FUN_00627400();
    local_4 = 2;
    if (iVar1 != 0) {
      FUN_00621210();
      ExceptionList = local_c;
      return;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    iVar1 = FUN_00627400();
    local_4 = 3;
LAB_006f5108:
    if (iVar1 != 0) {
      FUN_00621280();
    }
  }
  ExceptionList = local_c;
  return;
}

