/* speed.exe 0058f180 FUN_0058f180; analysis pseudocode, not buildable source.
 * calls 007303d0 FUN_007303d0
 * calls 00516b50 FUN_00516b50
 * calls 00621e80 FUN_00621e80
 * calls 00586290 FUN_00586290
 * calls 004b8c40 FUN_004b8c40
 * calls 00542da0 FUN_00542da0
 * calls 00627400 FUN_00627400
 * calls 00524850 FUN_00524850
 * calls 00663c90 FUN_00663c90
 * calls 00516e10 FUN_00516e10
 * calls 005169b0 FUN_005169b0
 * calls 00515e60 FUN_00515e60
 * calls 00517a50 FUN_00517a50
 */

undefined4 * __thiscall FUN_0058f180(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872772;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a0fc8;
  FUN_00517a50();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_00516e10();
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(iVar2 + 1);
  iVar2 = FUN_00516e10();
  *(undefined1 *)(iVar2 + 1) = 0;
  do {
    if (DAT_009b2c14 == 0) {
      cVar1 = FUN_007303d0();
      if (cVar1 == '\0') {
        cVar1 = FUN_004b8c40();
        if (cVar1 == '\0') {
          cVar1 = FUN_00516b50("EA_Trax.fng");
          if (cVar1 != '\0') {
            FUN_005169b0("EA_Trax.fng");
          }
          uVar3 = FUN_00524850(param_1[4],0x348ff9f,s_unknown_008f3f40);
          FUN_00515e60(uVar3);
          FUN_00542da0(s_unknown_008f3f40,param_1[4]);
          iVar2 = FUN_00627400(0xc);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (iVar2 != 0) {
            FUN_00621e80(0x14035fb);
          }
          ExceptionList = local_c;
          return param_1;
        }
      }
    }
    FUN_00663c90();
  } while( true );
}

