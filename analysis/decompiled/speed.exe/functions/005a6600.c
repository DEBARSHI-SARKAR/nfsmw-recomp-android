/* speed.exe 005a6600 FUN_005a6600; analysis pseudocode, not buildable source.
 * calls 0059e9d0 FUN_0059e9d0
 * calls 00644060 FUN_00644060
 * calls 0059e260 FUN_0059e260
 * calls 005a0060 FUN_005a0060
 * calls 00516990 FUN_00516990
 * calls 0059ca80 FUN_0059ca80
 * calls 005a6540 FUN_005a6540
 * calls 00735620 FUN_00735620
 * calls 00648140 FUN_00648140
 * calls 00642d70 FUN_00642d70
 * calls 005251e0 FUN_005251e0
 * calls 0059d0c0 FUN_0059d0c0
 * calls 0059e420 FUN_0059e420
 * calls 0059d2a0 FUN_0059d2a0
 * calls 0059e7f0 FUN_0059e7f0
 * calls 0059f440 FUN_0059f440
 * calls 005a0530 FUN_005a0530
 * calls 0059d500 FUN_0059d500
 * calls 0059f0e0 FUN_0059f0e0
 * calls 005248c0 FUN_005248c0
 * calls 00514c70 FUN_00514c70
 * calls 00652ad0 _malloc
 * calls 005a01d0 FUN_005a01d0
 * calls 005a1380 FUN_005a1380
 * calls 005a0380 FUN_005a0380
 * calls 005a0c60 FUN_005a0c60
 * calls 0059cec0 FUN_0059cec0
 * calls 0059ca00 FUN_0059ca00
 * calls 0059e0f0 FUN_0059e0f0
 * calls 005a0ef0 FUN_005a0ef0
 * calls 0059e620 FUN_0059e620
 * calls 0059ee10 FUN_0059ee10
 * calls 0059dd30 FUN_0059dd30
 * calls 0057cdb0 FUN_0057cdb0
 * calls 005d8660 FUN_005d8660
 * calls 0059cc30 FUN_0059cc30
 * calls 00626dd0 FUN_00626dd0
 * calls 0059fc80 FUN_0059fc80
 * calls 00643fc0 FUN_00643fc0
 * calls 0059dee0 FUN_0059dee0
 * calls 0059ec70 FUN_0059ec70
 */

undefined4 * __thiscall
FUN_005a6600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008739b6;
  pvStack_c = ExceptionList;
  puVar7 = param_1 + 2;
  ExceptionList = &pvStack_c;
  FUN_005d8660(0x14);
  local_4 = 0;
  FUN_0059ca00(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar7);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008a2538;
  param_1[8] = param_2;
  param_1[0xb] = param_5;
  FUN_00643fc0(1);
  iVar2 = param_1[8];
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)((int)param_1 + 0x2bd) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[10] = param_4;
  param_1[9] = param_3;
  if ((iVar2 != 4) && (iVar2 != 6)) {
    FUN_005a6540(iVar2,param_3);
  }
  FUN_00516990(param_3,0x66);
  FUN_005248c0(param_3,0);
  pvVar5 = _malloc(0x50);
  local_4._0_1_ = 3;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059e7f0(puVar7,param_1[9],param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xb0] = uVar6;
  pvVar5 = _malloc(0x80);
  local_4._0_1_ = 4;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059ee10(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xbe] = uVar6;
  pvVar5 = _malloc(0x278);
  local_4._0_1_ = 5;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059f0e0(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xbf] = uVar6;
  pvVar5 = _malloc(0x48);
  local_4._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059e260(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xb9] = uVar6;
  pvVar5 = _malloc(0x40);
  local_4._0_1_ = 7;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059e0f0(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xbb] = uVar6;
  pvVar5 = _malloc(0x98);
  local_4._0_1_ = 8;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059dee0(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xbc] = uVar6;
  pvVar5 = _malloc(0x50);
  local_4._0_1_ = 9;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_005a0380(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xb7] = uVar6;
  pvVar5 = _malloc(0x48);
  local_4._0_1_ = 10;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059ec70(puVar7,param_3,param_5);
  }
  local_4._0_1_ = 2;
  param_1[0xc4] = uVar6;
  pvVar5 = _malloc(0x50);
  local_4._0_1_ = 0xb;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0059dd30(puVar7,param_3,param_5);
  }
  param_1[0xc6] = uVar6;
  iVar2 = param_1[8];
  local_4._0_1_ = 2;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 2;
  if (((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) {
    local_4._0_1_ = uVar3;
    pvVar5 = _malloc(0x48);
    local_4._0_1_ = 0xc;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0059e620(puVar7,param_3,param_5);
    }
    local_4._0_1_ = 2;
    param_1[0xb8] = uVar6;
    pvVar5 = _malloc(0x70);
    local_4._0_1_ = 0xd;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_005a0ef0(puVar7,param_1[9],param_5);
    }
    local_4._0_1_ = 2;
    param_1[0xb2] = uVar6;
    pvVar5 = _malloc(0x68);
    local_4._0_1_ = 0xe;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_005a0c60(puVar7,param_1[9],param_5);
    }
    param_1[0xb3] = uVar6;
  }
  else {
    pvVar5 = _malloc(0x50);
    local_4._0_1_ = 0xf;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_005a0060(puVar7,param_3,param_5);
    }
    local_4._0_1_ = 2;
    param_1[0xc3] = uVar6;
    pvVar5 = _malloc(0x78);
    local_4._0_1_ = 0x10;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0059e9d0(puVar7,param_1[9],param_5);
    }
    param_1[0xb1] = uVar6;
    local_4._0_1_ = 2;
    if (param_1[8] == 1) {
      if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1964) == 2)) {
        pvVar5 = _malloc(0x50);
        local_4._0_1_ = 0x11;
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0059d2a0(puVar7,param_3,param_5);
        }
        param_1[0xb5] = uVar6;
      }
      local_4._0_1_ = 2;
      pvVar5 = _malloc(0x58);
      local_4._0_1_ = 0x12;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0059cec0(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xb6] = uVar6;
      pvVar5 = _malloc(0x50);
      local_4._0_1_ = 0x13;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0059d0c0(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xb4] = uVar6;
      pvVar5 = _malloc(0xd8);
      local_4._0_1_ = 0x14;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0059fc80(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xc0] = uVar6;
      pvVar5 = _malloc(0xe8);
      local_4._0_1_ = 0x15;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0059f440(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xc1] = uVar6;
      pvVar5 = _malloc(0x58);
      local_4._0_1_ = 0x16;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005a01d0(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xc2] = uVar6;
      pvVar5 = _malloc(0x58);
      local_4._0_1_ = 0x17;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005a0530(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xca] = uVar6;
      pvVar5 = _malloc(0x50);
      local_4._0_1_ = 0x18;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005a1380(puVar7,param_3,param_5);
      }
      local_4._0_1_ = 2;
      param_1[0xcb] = uVar6;
      pvVar5 = _malloc(0x70);
      local_4._0_1_ = 0x19;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0059cc30(puVar7,param_3,param_5);
      }
      param_1[199] = uVar6;
    }
    local_4._0_1_ = 2;
    if ((param_1[8] == 1) || (param_1[8] == 3)) {
      pvVar5 = _malloc(0x338);
      local_4._0_1_ = 0x1a;
      if (pvVar5 == (void *)0x0) {
        param_1[200] = 0;
      }
      else {
        uVar6 = FUN_0059d500(param_3,param_5);
        param_1[200] = uVar6;
      }
    }
  }
  local_4._0_1_ = 2;
  if ((param_1[8] == 1) || (param_1[8] == 2)) {
    pvVar5 = _malloc(0x58);
    local_4._0_1_ = 0x1b;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0059e420(puVar7,param_3,param_5);
    }
    local_4._0_1_ = 2;
    param_1[0xba] = uVar6;
    pvVar5 = _malloc(0x48);
    local_4._0_1_ = 0x1c;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0059ca80(puVar7,param_3,param_5);
    }
    param_1[0xc9] = uVar6;
  }
  local_4._0_1_ = 2;
  cVar4 = FUN_00735620();
  if (cVar4 == '\0') {
    uVar6 = FUN_005251e0(param_3,0xc18c12fd);
    FUN_00514c70(uVar6);
    uVar6 = FUN_005251e0(param_3,0xc18c12fe);
    FUN_00514c70(uVar6);
  }
  else {
    puVar7 = _malloc(0x38);
    if (puVar7 == (undefined4 *)0x0) {
      param_1[0xc5] = 0;
    }
    else {
      puVar1 = puVar7 + 2;
      *puVar1 = puVar1;
      puVar7[3] = puVar1;
      puVar7[4] = param_3;
      puVar7[6] = 0x20;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *(undefined1 *)(puVar7 + 10) = 0;
      *puVar7 = &PTR_FUN_008a1f80;
      puVar7[0xd] = 0;
      puVar7[0xc] = param_3;
      param_1[0xc5] = puVar7;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0057cdb0(0xffffffff,0);
  FUN_0057cdb0(0,0);
  uVar6 = (**(code **)(*(int *)param_1[10] + 0x34))();
  cVar4 = FUN_00626dd0();
  if (cVar4 == '\0') {
    FUN_00648140(uVar6);
    FUN_00644060(1);
    FUN_00642d70();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

