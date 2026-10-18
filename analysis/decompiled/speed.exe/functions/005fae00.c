/* speed.exe 005fae00 FUN_005fae00; analysis pseudocode, not buildable source.
 * calls 005dcd00 FUN_005dcd00
 * calls 00454810 FUN_00454810
 * calls 005e2580 FUN_005e2580
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

void __thiscall FUN_005fae00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875f68;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0xc);
  ExceptionList = &local_c;
  if ((piVar1 != (int *)0x0) && (ExceptionList = &local_c, *piVar1 == 0)) {
    ExceptionList = &local_c;
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  local_28 = DAT_008a2fb8;
  local_2c = DAT_008a2fb4;
  local_24 = DAT_008a2fbc;
  piVar1 = (int *)FUN_00454810(0xe43b2ccc,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  if (*piVar1 != 0) {
    FUN_005e2580(*piVar1,0,0);
    local_4 = 0;
    FUN_005dcd00(local_20,&local_2c,0);
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  *param_2 = local_2c;
  param_2[1] = local_28;
  param_2[2] = local_24;
  ExceptionList = local_c;
  return;
}

