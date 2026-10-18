/* speed.exe 00672d30 FUN_00672d30; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 * calls 00452bd0 FUN_00452bd0
 * calls 00452b30 FUN_00452b30
 * calls 006269b0 FUN_006269b0
 * calls 00454760 FUN_00454760
 */

undefined4 FUN_00672d30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  undefined1 local_1c [12];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00452b30();
  local_4 = 0;
  piVar4 = &DAT_008f87a0;
  iVar1 = DAT_008f87a8;
  do {
    if (iVar1 == 0) {
LAB_00672d7e:
      local_4 = 0xffffffff;
      FUN_00452bd0();
      ExceptionList = local_c;
      return 0;
    }
    if (*piVar4 == param_2) {
      cVar3 = FUN_00454760(piVar4[4],local_1c);
      if (cVar3 != '\0') {
        if ((local_10 == (undefined4 *)0x0) &&
           (local_10 = (undefined4 *)FUN_00454c30(0), local_10 == (undefined4 *)0x0)) {
          local_10 = (undefined4 *)FUN_006269b0(4);
        }
        uVar2 = *local_10;
        local_4 = 0xffffffff;
        FUN_00452bd0();
        ExceptionList = local_c;
        return uVar2;
      }
      goto LAB_00672d7e;
    }
    iVar1 = piVar4[9];
    piVar4 = piVar4 + 7;
  } while( true );
}

