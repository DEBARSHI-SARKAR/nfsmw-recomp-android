/* speed.exe 007b5630 FUN_007b5630; analysis pseudocode, not buildable source.
 * calls 005938a0 FUN_005938a0
 * calls 005251a0 FUN_005251a0
 * calls 00652ad0 _malloc
 * calls 005881f0 FUN_005881f0
 * calls 007ae950 FUN_007ae950
 * calls 00573140 FUN_00573140
 * calls 00524850 FUN_00524850
 * calls 00588120 FUN_00588120
 * calls 0055a280 FUN_0055a280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_007b5630(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088326a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005938a0(param_2,4,3,1);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7b48;
  param_1[0xb] = &PTR_LAB_008b7b3c;
  param_1[0x38] = 0;
  FUN_0055a280();
  param_1[0x6e] = 0;
  _DAT_009b9e7c = 0;
  iVar1 = 0;
  local_4._0_1_ = 1;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    do {
      uVar5 = param_1[4];
      iVar1 = iVar1 + 1;
      uVar2 = FUN_00573140("EVENT_ICON_%d",iVar1);
      iVar3 = FUN_005251a0(uVar5,uVar2);
      if (iVar3 != 0) {
        pvVar4 = _malloc(0x14);
        local_4._0_1_ = 2;
        if (pvVar4 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00588120(iVar3);
        }
        local_4._0_1_ = 1;
        FUN_005881f0(uVar5);
      }
    } while (iVar1 < (int)(param_1[0x14] * param_1[0x13]));
  }
  uVar5 = param_1[4];
  uVar2 = FUN_00573140("TRACK_MAP");
  uVar5 = FUN_00524850(uVar5,uVar2);
  param_1[0x39] = uVar5;
  FUN_007ae950();
  ExceptionList = pvStack_c;
  return param_1;
}

