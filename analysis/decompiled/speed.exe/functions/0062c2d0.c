/* speed.exe 0062c2d0 FUN_0062c2d0; analysis pseudocode, not buildable source.
 * calls 005dbd70 FUN_005dbd70
 * calls 005dd8d0 FUN_005dd8d0
 * calls 005dce90 FUN_005dce90
 * calls 0062aa90 FUN_0062aa90
 * calls 005de1f0 FUN_005de1f0
 * calls 005dcfa0 FUN_005dcfa0
 * calls 005fa860 FUN_005fa860
 * calls 005dcf90 thunk_FUN_005d96a0
 * calls 005e46f0 FUN_005e46f0
 * calls 005e9d60 FUN_005e9d60
 * calls 00577740 FUN_00577740
 * calls 005e3980 FUN_005e3980
 */

undefined4 * __thiscall FUN_0062c2d0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_008779e7;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a7ab4;
  param_1[2] = param_2;
  uVar5 = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  local_4 = 0;
  while (uVar5 = uVar5 - 1, param_2 <= uVar5) {
    *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) = (char)uVar5;
    FUN_005e46f0(uVar5);
    FUN_005e9d60(uVar5);
    cVar1 = FUN_005dd8d0();
    if ((cVar1 == '\0') && (iVar2 = FUN_005e3980(uVar5), iVar2 != 0)) {
      iVar2 = FUN_005dce90();
      if (iVar2 != 0) {
        FUN_005dce90();
        cVar1 = FUN_005de1f0();
        if (cVar1 == '\0') {
          FUN_005dce90();
          FUN_005fa860();
        }
      }
      FUN_00577740();
      iVar2 = thunk_FUN_005d96a0();
      if (iVar2 != 0) {
        uVar6 = 0;
        do {
          iVar2 = FUN_005dcfa0(uVar6);
          if (iVar2 != 0) {
            iVar4 = DAT_00920390 + 0x10;
            bVar7 = DAT_00920390 != 0;
            local_4._0_1_ = 1;
            DAT_00920390 = iVar4;
            if (bVar7) {
              FUN_0062aa90(iVar2);
            }
            local_4 = (uint)local_4._1_3_ << 8;
          }
          uVar6 = uVar6 + 1;
          uVar3 = thunk_FUN_005d96a0();
        } while (uVar6 < uVar3);
      }
    }
  }
  if (DAT_0091e000 != 0) {
    FUN_005dbd70();
  }
  ExceptionList = local_c;
  return param_1;
}

