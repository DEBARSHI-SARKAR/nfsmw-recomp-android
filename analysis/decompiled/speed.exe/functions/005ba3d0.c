/* speed.exe 005ba3d0 FUN_005ba3d0; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 005af2b0 FUN_005af2b0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005ba3d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_0087407b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a2d50;
  puVar1 = (undefined4 *)param_1[5];
  local_4 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    FUN_005af2b0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = (undefined4 *)param_1[5];
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_007c7250(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  param_1[2] = 0;
  local_4 = 0xffffffff;
  param_1[3] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  ExceptionList = pvStack_c;
  return;
}

