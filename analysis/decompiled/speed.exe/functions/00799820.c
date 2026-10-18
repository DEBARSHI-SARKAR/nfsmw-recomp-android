/* speed.exe 00799820 FUN_00799820; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00793ae0 FUN_00793ae0
 * calls 0051a2f0 FUN_0051a2f0
 * calls 00794f80 FUN_00794f80
 * calls 00527f80 FUN_00527f80
 * calls 00460d20 FUN_00460d20
 * calls 00840c60 FUN_00840c60
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_00799820(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_424 [137];
  int aiStack_200 [125];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008827a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar2 = FUN_0056e340();
  iVar3 = FUN_00460d20(param_2,uVar2);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x8b) == '\x01') {
      *param_3 = param_1[param_4 * 0xc + 0xe];
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      ExceptionList = local_c;
      return 1;
    }
    iVar3 = FUN_00794f80();
    if (*(int *)(iVar3 + 0x38) != 0) {
      iVar3 = FUN_00794f80(0x73656c66);
      iVar3 = FUN_00840c60(*(undefined4 *)(iVar3 + 0x38));
      if (iVar3 != 0) {
        FUN_0051a2f0();
        local_4 = 0;
        FUN_00793ae0(iVar3);
        *param_3 = aiStack_424[param_4 * 0xc];
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        local_4 = 0xffffffff;
        FUN_00527f80();
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  else {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_00460d20(puVar1 + 4,param_2);
      if ((iVar3 == 0) && (puVar1[0x93] == 0)) {
        FUN_0051a2f0();
        local_4 = 1;
        FUN_00793ae0(puVar1 + 2);
        *param_3 = aiStack_200[param_4 * 0xc];
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        local_4 = 0xffffffff;
        FUN_00527f80();
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  ExceptionList = local_c;
  return 0;
}

