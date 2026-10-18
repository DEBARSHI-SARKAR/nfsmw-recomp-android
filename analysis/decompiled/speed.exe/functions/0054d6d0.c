/* speed.exe 0054d6d0 FUN_0054d6d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00798380 FUN_00798380
 * calls 0079bac0 FUN_0079bac0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 005b8550 FUN_005b8550
 * calls 00838360 FUN_00838360
 * calls 00598a60 FUN_00598a60
 * calls 00598bb0 FUN_00598bb0
 * calls 00515e90 FUN_00515e90
 * calls 00515e20 FUN_00515e20
 * calls 00524920 FUN_00524920
 * calls 0078be30 FUN_0078be30
 * calls 00598970 FUN_00598970
 * calls 005b8400 FUN_005b8400
 * calls 00460d20 FUN_00460d20
 * calls 00516be0 FUN_00516be0
 * calls 0078c640 FUN_0078c640
 * calls 0079a9e0 FUN_0079a9e0
 * calls 005419e0 FUN_005419e0
 * calls 0056bc10 FUN_0056bc10
 * calls 007908d0 FUN_007908d0
 * calls 00598700 FUN_00598700
 * calls 00839530 FUN_00839530
 * calls 005258b0 FUN_005258b0
 * calls 00516b50 FUN_00516b50
 * calls 0078c730 FUN_0078c730
 * calls 00572e80 FUN_00572e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054d6d0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_288 [128];
  undefined1 local_208;
  undefined4 local_207;
  
  if (0x911ab364 < param_2) {
    if (0xe1fde1d1 < param_2) {
      if (param_2 != 0xf9e94d58) {
        return;
      }
      if (DAT_009b41ec < 1) {
        return;
      }
      uVar3 = FUN_0056bc10(0xc9e362a2,&DAT_0091c39c);
      FUN_00515e20(local_288,0x80,uVar3);
      FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0xe1fde1d1,0xe1fde1d1,
                   local_288);
      return;
    }
    if (param_2 == 0xe1fde1d1) {
      iVar5 = FUN_00516af0("OL_FriendDialogue.fng");
      if (((iVar5 != 0) && (iVar5 = FUN_005b8550(0x47ff4e7c), iVar5 != 0)) &&
         (iVar5 = FUN_005b1360(0x6ebbfb68), iVar5 != 0)) {
        FUN_005b8400(iVar5,0);
        *(undefined4 *)(iVar5 + 0x10) = 0;
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    if (param_2 == 0x97c1b72f) {
      FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    if (param_2 != 0xc98356ba) {
      return;
    }
    if (*(char *)(param_1 + 0x14e) != '\0') {
      FUN_0079bac0();
      iVar5 = FUN_0078be30();
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          iVar4 = iVar7;
          FUN_0079bac0(iVar7);
          iVar4 = FUN_007908d0(iVar4);
          iVar4 = FUN_00460d20(iVar4 + 0x28,DAT_0091cacc + 0x4c);
          if (iVar4 == 0) {
            FUN_005419e0();
            *(undefined1 *)(param_1 + 0x14e) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
    }
    FUN_0078c730();
    FUN_0078c640();
    if (*(char *)(param_1 + 0x30) == '\0') {
      return;
    }
    FUN_005258b0(1);
    DAT_0091ca90 = 1;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(char *)(param_1 + 0x14c) != '\0') {
      FUN_00516be0(0x4fbee42a,"OL_FriendDialogue.fng",0xffffffff,0xff);
      return;
    }
    FUN_00516be0(0x34dc1bec,"OL_FriendDialogue.fng",0xffffffff,0xff);
    if (*(char *)(param_1 + 0x14f) == '\0') {
      return;
    }
    FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x9bc569a);
    return;
  }
  if (param_2 == 0x911ab364) {
    FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (DAT_0091cacc == 0) {
      return;
    }
    thunk_FUN_007c7250(DAT_0091cacc);
    DAT_0091cacc = 0;
    return;
  }
  if (0x35f8620b < param_2) {
    if (param_2 != 0x427304a6) {
      if (param_2 != 0x4fbee42a) {
        return;
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined1 *)(param_1 + 0x14c) = 1;
      DAT_0091d261 = 1;
      return;
    }
    if (DAT_0091cacc == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x148) + 8);
      uVar8 = 2;
      iVar5 = *(int *)(param_1 + 0x148) + 0xc;
      FUN_0079a9e0(iVar5,uVar3,2);
      FUN_00798380(iVar5,uVar3,uVar8);
    }
    else {
      thunk_FUN_007c7250(DAT_0091cacc);
      DAT_0091cacc = 0;
    }
    iVar5 = FUN_0078c730();
    FUN_00839530(*(undefined4 *)(iVar5 + 0xf8),&DAT_0091c39c,0,0);
    FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    DAT_009b41ec = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined1 *)(param_1 + 0x14c) = 0;
    DAT_0091d261 = 0;
LAB_0054d866:
    FUN_0079a9e0();
    iVar5 = FUN_0045d3a0(0);
    if (iVar5 != 0) {
      return;
    }
    FUN_00572e80(1,0);
    return;
  }
  if (param_2 == 0x35f8620b) {
    FUN_00524920("OL_EAMessenger.fng",0x47ff4e7c,0x9e99,1);
    FUN_00524920("OL_FriendDialogue.fng",0x47ff4e7c,0x9e99,1);
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd,0x249db7b7,1);
    return;
  }
  if (param_2 != 0xc407210) {
    if (param_2 != 0x34dc1bec) {
      return;
    }
    FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  iVar5 = *(int *)(param_3 + 0x10);
  if (iVar5 != -0x47583934) {
    if (iVar5 != -0x47583933) {
      if (iVar5 != -0x47583932) {
        return;
      }
      local_208 = 0;
      puVar6 = &local_207;
      for (iVar5 = 0x7f; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      uVar3 = FUN_0056bc10(0x8d0a8371,&DAT_0091c39c);
      FUN_00515e20(&local_208,0x200,uVar3);
      FUN_00598bb0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x70e01038,0x417b25e4,0x427304a6,
                   0xffffffff,0xffffffff,1,&local_208);
      return;
    }
    if (DAT_0091cacc == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x148) + 8);
      uVar8 = 1;
      iVar5 = *(int *)(param_1 + 0x148) + 0xc;
      FUN_0079a9e0(iVar5,uVar3,1);
      FUN_00798380(iVar5,uVar3,uVar8);
    }
    else {
      if (*(char *)(DAT_0091cacc + 0x110) != '\0') {
        iVar5 = FUN_0078c730();
        FUN_00838360(*(undefined4 *)(iVar5 + 0xf8),&DAT_0091c39c,1,0,0);
      }
      thunk_FUN_007c7250(DAT_0091cacc);
      DAT_0091cacc = 0;
    }
    FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    DAT_009b41ec = 0;
    goto LAB_0054d866;
  }
  uVar1 = DAT_0091c344;
  if (DAT_0091cacc == 0) {
LAB_0054d8b4:
    if (uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_00598a60(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x97c1b72f,0x88a7cf05)
      ;
      goto LAB_0054d91c;
    }
  }
  else if (*(char *)(DAT_0091cacc + 0x110) == '\x01') {
    uVar1 = _DAT_0091c390 & 0x400000;
    goto LAB_0054d8b4;
  }
  cVar2 = FUN_00516b50("OL_GameRoom.fng");
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x14f) = 1;
    return;
  }
  FUN_00516be0(0x4fbee42a,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
LAB_0054d91c:
  DAT_009b41ec = 0;
  FUN_00572e80(1,0);
  return;
}

