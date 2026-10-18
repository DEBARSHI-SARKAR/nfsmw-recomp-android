/* speed.exe 0054b8d0 FUN_0054b8d0; analysis pseudocode, not buildable source.
 * calls 007935b0 FUN_007935b0
 * calls 0053d810 FUN_0053d810
 * calls 0056e340 FUN_0056e340
 * calls 00589870 FUN_00589870
 * calls 005252d0 FUN_005252d0
 * calls 0083b8a0 FUN_0083b8a0
 * calls 00799f50 FUN_00799f50
 */

undefined4 __fastcall FUN_0054b8d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00799f50();
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  if (*(int *)(param_1 + 0x34) != -1) {
    *(undefined4 *)(param_1 + 0x2e8) = 1;
    *(undefined4 *)(param_1 + 0x2d4) = 1;
    iVar5 = 0;
    do {
      iVar2 = FUN_007935b0(*(undefined4 *)(param_1 + 0x34),0,*(int *)(param_1 + 0x2e8) + -1 + iVar5)
      ;
      if (iVar2 == 0) break;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      FUN_0083b8a0(iVar2 + 0x1c,&local_38,0x1c,&DAT_0089b350);
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
    } while (iVar5 < 0xf);
    puVar3 = (undefined4 *)FUN_007935b0(*(undefined4 *)(param_1 + 0x34),1,0);
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe01061f,&DAT_0089c328);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_0056e340();
      FUN_005252d0(uVar1,0x92d8775b,uVar4);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x72346254,&DAT_0089c2d0,0);
    }
    else {
      FUN_0083b8a0(puVar3 + 7,&local_1c,0x1c,&DAT_0089b350);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe01061f,&DAT_0089d764,puVar3[1]);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x92d8775b,puVar3 + 3);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x72346254,&DAT_0089d764,*puVar3);
    }
    FUN_0053d810();
    iVar5 = *(int *)(param_1 + 0x2e4);
    if (iVar5 < *(int *)(param_1 + 0x2d4)) {
      *(int *)(param_1 + 0x2d4) = iVar5;
    }
    FUN_00589870(0xc,iVar5,*(undefined4 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2d4));
  }
  return 0;
}

