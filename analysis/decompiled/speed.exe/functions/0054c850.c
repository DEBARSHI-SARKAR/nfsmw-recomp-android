/* speed.exe 0054c850 FUN_0054c850; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0079c470 FUN_0079c470
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0079bac0 FUN_0079bac0
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 00513bc0 FUN_00513bc0
 * calls 00798270 FUN_00798270
 * calls 00838360 FUN_00838360
 * calls 00515e20 FUN_00515e20
 * calls 00524920 FUN_00524920
 * calls 005257f0 FUN_005257f0
 * calls 00598970 FUN_00598970
 * calls 0078bc60 FUN_0078bc60
 * calls 005b8400 FUN_005b8400
 * calls 00513b50 FUN_00513b50
 * calls 00460ca0 FUN_00460ca0
 * calls 00460d20 FUN_00460d20
 * calls 0078cf80 FUN_0078cf80
 * calls 00516be0 FUN_00516be0
 * calls 00591e90 FUN_00591e90
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0079d830 FUN_0079d830
 * calls 0078c790 FUN_0078c790
 * calls 0056bc10 FUN_0056bc10
 * calls 005141e0 FUN_005141e0
 * calls 00573020 FUN_00573020
 * calls 0078c730 FUN_0078c730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054c850(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 local_350;
  undefined4 local_34f;
  undefined4 local_34b;
  undefined4 local_347;
  undefined2 local_343;
  undefined1 local_341;
  undefined1 local_340;
  undefined4 local_33f;
  char local_318 [36];
  undefined1 local_2f4 [32];
  int local_2d4;
  undefined1 local_2bc [52];
  undefined1 local_288 [644];
  
  local_34f = 0;
  local_34b = 0;
  local_347 = 0;
  local_343 = 0;
  local_350 = 0;
  local_341 = 0;
  FUN_00460ca0(&local_350,&DAT_0091c39c,0x10);
  puVar10 = &DAT_0091c39c;
  FUN_0078c730(&DAT_0091c39c);
  uVar1 = FUN_0078c790(puVar10);
  puVar2 = (undefined4 *)FUN_00513bc0(local_288,uVar1);
  puVar6 = &DAT_0091c340;
  for (iVar5 = 0x9f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00460ca0(&DAT_0091c39c,&local_350,0x10);
  iVar5 = FUN_00591e90(PTR_s_OL_GameRoom_fng_008f32b0);
  if (iVar5 == 0) {
    puVar9 = &local_340;
    puVar2 = &DAT_0091c340;
    FUN_0078c730(puVar9,&DAT_0091c340);
    FUN_0078cf80(puVar9,puVar2);
    if (((DAT_0091c358 != 0) && (local_318[0] != '\0')) && (local_2d4 == 0)) {
      FUN_0078bc60(1,local_318);
      uVar3 = 0;
      puVar9 = local_2bc;
      uVar1 = 0;
      FUN_0079bac0(puVar9,0,0);
      FUN_0079c470(puVar9,uVar1,uVar3);
      DAT_0091cacc = _malloc(0x114);
      if (DAT_0091cacc == (undefined4 *)0x0) {
        DAT_0091cacc = (undefined4 *)0x0;
      }
      else {
        *DAT_0091cacc = 0;
      }
      FUN_00460c70(DAT_0091cacc + 0xb,&DAT_0091c39c);
      FUN_00460c70(DAT_0091cacc + 0x13,local_318);
      FUN_00460c70(DAT_0091cacc + 0x3b,local_2f4);
      uVar1 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
      FUN_005257f0("OL_Challenge.fng",0,uVar1,0);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_0056bc10(0xd831eab3);
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  else {
    if ((DAT_0091c348 != 0) || ((_DAT_0091c390 & 0x20000) != 0)) {
      if (DAT_0091c37c == 0) {
        FUN_00516be0(0xf9e94d58,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
        iVar5 = FUN_0078c730();
        iVar5 = FUN_00838360(*(undefined4 *)(iVar5 + 0xf8),&DAT_0091c39c,2,&LAB_00544d20,param_1);
        if (iVar5 == 0) {
          FUN_005141e0(0xed8e446b,&DAT_0091c39c);
          iVar5 = 0;
          if (DAT_0091c1a8 < 1) {
            return;
          }
          do {
            if (((&DAT_0091c22c)[iVar5] != '\0') &&
               (iVar4 = FUN_00460d20((&DAT_0091c1ac)[iVar5],&DAT_0091c39c), iVar4 == 0)) {
              (&DAT_0091c22c)[iVar5] = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < DAT_0091c1a8);
          return;
        }
        if ((*(char *)(param_1 + 0xf6) != '\0') && (iVar5 == -0x6c)) {
          return;
        }
        FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar5);
        return;
      }
      puVar10 = &DAT_0091c39c;
      FUN_0079a9e0(&DAT_0091c39c);
      FUN_00798270(puVar10);
      FUN_00516be0(0xf9e94d58,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
      DAT_0091ca90 = 1;
      if (*(int *)(param_1 + 0x10) == 0) {
        DAT_0091ca90 = 1;
        return;
      }
      iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10));
      if (iVar5 == 0) {
        return;
      }
      iVar5 = FUN_005b8550(0x47ff4e7c);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = FUN_005b1360(0xde6eff34);
      if (iVar5 == 0) {
        return;
      }
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
      return;
    }
    if ((DAT_0091c36c == 0) || (DAT_0091c37c == 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_0056bc10(0x97b25a02);
      FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,uVar3);
      DAT_0091ca90 = 1;
      return;
    }
    puVar10 = &DAT_0091c39c;
    if (DAT_0091c374 != 0) {
      local_340 = 0;
      puVar2 = &local_33f;
      for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      uVar1 = FUN_0056bc10(0xa4ca09c8);
      FUN_00515e20(&local_340,0x80,uVar1);
      FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,
                   &local_340);
      return;
    }
    FUN_0079a9e0(&DAT_0091c39c);
    iVar5 = FUN_0079d830(puVar10);
    if (iVar5 == -0xd) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_0056bc10(0xe973ea37,&DAT_0091c39c);
      uVar8 = 0x34dc1bec;
      uVar7 = 0x34dc1bec;
    }
    else {
      if (iVar5 == -0x10) {
        uVar3 = 0x89e3b31f;
      }
      else {
        if (iVar5 != -0xe) {
          FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
          DAT_0091ca90 = 1;
          return;
        }
        uVar3 = 0x2ad727f;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_0056bc10(uVar3);
      uVar8 = 0x34dc1bec;
      uVar7 = 0x34dc1bec;
    }
  }
  FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,uVar7,uVar8,uVar3);
  return;
}

