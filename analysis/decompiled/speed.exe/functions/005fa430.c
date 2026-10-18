/* speed.exe 005fa430 FUN_005fa430; analysis pseudocode, not buildable source.
 * calls 005f8ea0 FUN_005f8ea0
 * calls 005f7d80 FUN_005f7d80
 * calls 005f8d50 FUN_005f8d50
 * calls 00652ad0 _malloc
 * calls 005f8080 FUN_005f8080
 * calls 005f8ce0 FUN_005f8ce0
 * calls 005f8dc0 FUN_005f8dc0
 * calls 005f8e30 FUN_005f8e30
 */

void FUN_005fa430(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined *local_14;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875f34;
  local_c = ExceptionList;
  local_14 = &DAT_008f59f0;
  local_10 = &PTR_DAT_008f5a50;
  ExceptionList = &local_c;
  uVar1 = FUN_005f8e30(&local_14,&local_14);
  FUN_005f8dc0(0x54c54946,uVar1);
  uVar1 = FUN_005f8ce0(0x3d4e5abd,0x1c1fda99);
  uVar2 = FUN_005f8e30(0x17,0x17);
  FUN_005f8dc0(0xf5d5e94a,uVar2);
  uVar1 = FUN_005f8ea0(uVar1,0x3d4e5abd);
  uVar2 = FUN_005f8e30(2,2);
  FUN_005f8dc0(0x1c4f5f88,uVar2);
  iVar3 = FUN_005f8d50(uVar1,0xf5d5e94a);
  if (iVar3 != -0x60f0817c) {
    pvVar4 = _malloc(0x2d8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      DAT_0091e00c = 0;
    }
    else {
      DAT_0091e00c = FUN_005f7d80(param_1);
    }
    local_4 = 0xffffffff;
    FUN_005f8080(pvVar4);
  }
  ExceptionList = local_c;
  return;
}

