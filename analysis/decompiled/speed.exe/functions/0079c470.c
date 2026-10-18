/* speed.exe 0079c470 FUN_0079c470; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0083a980 FUN_0083a980
 * calls 00844a50 FUN_00844a50
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083e410 FUN_0083e410
 * calls 0083e3e0 FUN_0083e3e0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00794ef0 FUN_00794ef0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_0079c470(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint local_20c;
  undefined1 local_208;
  undefined4 local_207;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00794f80();
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 0x75736561)) {
    for (puVar5 = *(undefined4 **)(iVar1 + 0x30); puVar5 != (undefined4 *)(iVar1 + 0x30);
        puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[2] == 0x75736561) {
        iVar3 = puVar5[8];
        goto LAB_0079c51a;
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x20);
LAB_0079c51a:
    if (iVar3 != -1) {
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return 0xffffffff;
    }
  }
  local_208 = 0;
  puVar5 = &local_207;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_20c = 0;
  uVar4 = 1;
  if (*(char *)(param_2 + 6) == '\0') {
    if ((param_2[3] != 2) && (uVar4 = 0x401, param_2[3] == 0)) {
      local_20c = 0x400;
    }
    if ((param_2[4] != 2) && (uVar4 = uVar4 | 0x2000, param_2[4] == 0)) {
      local_20c = local_20c | 0x2000;
    }
    iVar3 = param_2[1];
    if (iVar3 != 0xb) {
      if (iVar3 == 1) {
        local_20c = local_20c | 0x80000000;
        uVar4 = uVar4 | 0x80000000;
      }
      else if (iVar3 == 0) {
        local_20c = local_20c | 0x40000000;
        uVar4 = uVar4 | 0x40000000;
      }
      else if (iVar3 == 2) {
        local_20c = local_20c | 0x20000000;
        uVar4 = uVar4 | 0x20000000;
      }
    }
    if ((param_2[2] != 2) && (uVar4 = uVar4 | 0x200, param_2[2] == 0)) {
      local_20c = local_20c | 0x200;
    }
    if ((param_2[5] != 2) && (uVar4 = uVar4 | 0x4000, param_2[5] == 0)) {
      local_20c = local_20c | 0x4000;
    }
    iVar3 = param_2[0xb];
    if (0 < iVar3) {
      uVar4 = uVar4 | 0x100000;
    }
    if (1 < iVar3) {
      uVar4 = uVar4 | 0x200000;
    }
    if (2 < iVar3) {
      uVar4 = uVar4 | 0x400000;
    }
    if (3 < iVar3) {
      uVar4 = uVar4 | 0x800000;
    }
    if (4 < iVar3) {
      uVar4 = uVar4 | 0x1000000;
    }
    if (iVar3 == 6) {
      uVar4 = uVar4 | 0x2000000;
    }
  }
  else {
    FUN_0083c880(&local_208,0x200,&DAT_008b4cbc,param_2 + 6);
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    uVar4 = 0;
    local_20c = 0;
  }
  FUN_0083a980(&local_208,0x200,"START",0);
  FUN_0083a980(&local_208,0x200,"COUNT",*param_2);
  FUN_0083a980(&local_208,0x200,"CUSTFLAGS",local_20c);
  FUN_0083a980(&local_208,0x200,"CUSTMASK",uVar4);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_00794f80(0x17,*(int *)(param_1 + 0xc));
    FUN_00844b00(*(undefined4 *)(iVar3 + 0x38));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar3 = FUN_00794f80(0x17,FUN_007962e0,param_1);
  uVar2 = FUN_00844a50(*(undefined4 *)(iVar3 + 0x38));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_00794ef0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  FUN_0083e3e0(*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 0xf0),FUN_0079bb20);
  FUN_0083e410(*(undefined4 *)(param_1 + 0xc),0,0,FUN_0079c260);
  uVar8 = 0;
  puVar7 = &LAB_00796410;
  puVar6 = &local_208;
  uVar2 = 0x75736561;
  FUN_00794f80(0x75736561,puVar6,&LAB_00796410,param_1,param_3,param_4,0);
  uVar2 = FUN_00793340(uVar2,puVar6,puVar7,param_1,param_3,param_4,uVar8);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar2;
}

