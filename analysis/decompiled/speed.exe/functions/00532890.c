/* speed.exe 00532890 FUN_00532890; analysis pseudocode, not buildable source.
 * calls 00571e80 FUN_00571e80
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 005a3b60 FUN_005a3b60
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 0056db00 FUN_0056db00
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_00532890(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f730;
  pvStack_c = ExceptionList;
  if ((*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) & 1) == 0) {
    ExceptionList = &pvStack_c;
    puVar1 = _malloc(0x4c);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xe7353be7,0x6005281e,0);
      *puVar1 = &PTR_FUN_0089c458;
      *(undefined1 *)((int)puVar1 + 0x45) = 1;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xb & 1) == 0) {
      ExceptionList = &pvStack_c;
      puVar1 = _malloc(0x4c);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_00586fa0(0xc1c089ce,0xe072db21,0);
        *puVar1 = &PTR_FUN_0089c450;
      }
      local_4 = 0xffffffff;
      FUN_00573960(puVar1);
    }
    puVar1 = _malloc(0x4c);
    local_4 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xe7353be7,0x17e18f87,0);
      *puVar1 = &PTR_FUN_0089c458;
      *(undefined1 *)((int)puVar1 + 0x45) = 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar1);
  puVar1 = _malloc(0x4c);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x2287e063,0x18ecff,0);
    *puVar1 = &PTR_FUN_0089c460;
    *(undefined1 *)((int)puVar1 + 0x45) = 1;
    puVar5 = puVar1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar5);
  if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xb & 1) == 0) {
    uVar4 = FUN_00571e80(param_1[4]);
    uVar4 = uVar4 & 0xff;
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    iVar3 = param_1[0xb];
  }
  else {
    iVar3 = param_1[4];
    uVar2 = FUN_005af1c0("PC BACK");
    if (((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(uVar2), iVar3 == 0)) {
      iVar3 = 0;
    }
    FUN_00514c70(iVar3);
    uVar4 = (**(code **)(param_1[0xb] + 0x24))(puVar5);
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    iVar3 = param_1[0xb];
  }
  (**(code **)(iVar3 + 0x40))(uVar4);
  FUN_00525220(param_1[4],0x3c458c1,0x8fff61f2);
  FUN_00525220(param_1[4],0xb5c74226,0x8fff61f2);
  if (*(char *)(DAT_0091cf90 + 3) != '\0') {
    if (((param_1[4] != 0) && (iVar3 = FUN_00516af0(param_1[4]), iVar3 != 0)) &&
       ((iVar3 = FUN_005b8550(0xc87422f7), iVar3 != 0 &&
        (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)))) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    iVar3 = param_1[4];
    uVar2 = FUN_0056db00();
    FUN_005252d0(iVar3,0xeb406fec,&DAT_008941f8,uVar2);
  }
  (**(code **)(*param_1 + 0xc))();
  FUN_005a3b60();
  ExceptionList = puVar1;
  return;
}

