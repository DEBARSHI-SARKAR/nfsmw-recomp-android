/* speed.exe 0064b6d0 FUN_0064b6d0; analysis pseudocode, not buildable source.
 * calls 00737830 FUN_00737830
 * calls 006c1410 FUN_006c1410
 * calls 007b4220 FUN_007b4220
 * calls 006bf690 FUN_006bf690
 * calls 00525b70 FUN_00525b70
 * calls 0062d450 FUN_0062d450
 * calls 00516e10 FUN_00516e10
 * calls 004facb0 FUN_004facb0
 * calls 004af1a0 FUN_004af1a0
 * calls 006cbb60 FUN_006cbb60
 * calls 00627400 FUN_00627400
 */

void __fastcall FUN_0064b6d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879fcf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004facb0(param_1);
  FUN_006bf690();
  FUN_00737830();
  FUN_007b4220();
  iVar2 = FUN_00627400(8);
  local_4 = 0;
  if (iVar2 != 0) {
    FUN_0062d450(iVar2);
  }
  local_4 = 0xffffffff;
  FUN_00516e10();
  FUN_00525b70();
  DAT_00925e90 = 3;
  FUN_004af1a0();
  cVar1 = FUN_006cbb60();
  if (cVar1 != '\0') {
    FUN_006c1410(1);
  }
  ExceptionList = local_c;
  return;
}

