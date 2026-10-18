/* speed.exe 007889d0 FUN_007889d0; analysis pseudocode, not buildable source.
 * calls 0076d7a0 FUN_0076d7a0
 * calls 005fcb20 FUN_005fcb20
 * calls 0041c8a0 FUN_0041c8a0
 * calls 005d0370 FUN_005d0370
 * calls 00785a00 FUN_00785a00
 * calls 00436150 FUN_00436150
 * calls 0076e220 FUN_0076e220
 * calls 00438750 FUN_00438750
 * calls 0077ae80 FUN_0077ae80
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0042cbf0 FUN_0042cbf0
 * calls 00777d30 FUN_00777d30
 * calls 005fb3b0 FUN_005fb3b0
 */

void __fastcall FUN_007889d0(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int local_380;
  int local_37c;
  undefined4 *local_378;
  undefined **local_374;
  int *local_370;
  undefined4 local_36c;
  int local_368;
  int local_364;
  int local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  float local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  float local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  char local_2b0;
  undefined1 local_2ac;
  undefined4 local_288;
  short local_272;
  undefined1 local_268 [596];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00882431;
  local_14 = ExceptionList;
  uVar12 = 0;
  ExceptionList = &local_14;
  if (DAT_009b3874 != 0) {
    iVar13 = 0;
    ExceptionList = &local_14;
    do {
      pbVar1 = (byte *)(iVar13 + 0xb + DAT_009b38c0);
      *pbVar1 = *pbVar1 & 0xcf;
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 0x16;
    } while (uVar12 < DAT_009b3874);
  }
  local_358 = 0xffffffff;
  local_37c = 0;
  local_354 = 0xffffffff;
  local_324 = param_1;
  if (DAT_0091e000 != 0) {
    FUN_0077b9e0();
    local_2ac = 1;
    local_288 = 2;
    local_c = 0;
    if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
      local_330 = 0xbf333333;
      local_32c = 0;
      local_374 = (undefined **)0xc51cf000;
      local_370 = (int *)0x4313cccd;
      local_328 = 0x3f333333;
      local_36c = 0x44dee000;
      iVar13 = FUN_00785a00(&local_374,&local_330,0x3f800000,local_268,&local_380);
      if (iVar13 == -1) {
        local_272 = 0;
        local_2b0 = '\0';
      }
      else {
        FUN_00777d30(iVar13,local_380,&local_374,&local_330,1);
        if (local_2b0 != '\0') {
          local_358 = CONCAT22(local_358._2_2_,*(undefined2 *)(local_272 * 0x16 + 6 + DAT_009b38c0))
          ;
          local_37c = 1;
        }
      }
    }
    else {
      local_37c = FUN_005fcb20();
      if ((0 < local_37c) && (iVar13 = 0, 0 < local_37c)) {
        do {
          iVar8 = FUN_005fb3b0(iVar13);
          iVar9 = FUN_00785a00(iVar8 + 0x28,iVar8 + 0x34,0x3f800000,local_268,&local_380);
          if (iVar9 == -1) {
            local_272 = 0;
            local_2b0 = '\0';
          }
          else {
            FUN_00777d30(iVar9,local_380,iVar8 + 0x28,iVar8 + 0x34,1);
            if (local_2b0 != '\0') {
              *(undefined2 *)((int)&local_358 + iVar13 * 2) =
                   *(undefined2 *)(local_272 * 0x16 + 6 + DAT_009b38c0);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_37c);
      }
    }
    local_c = 0xffffffff;
    FUN_0076e220();
  }
  local_360 = DAT_009b38a8;
  if (0 < DAT_009aa9c4) {
    local_364 = 0;
    local_380 = DAT_009aa9c4;
    do {
      puVar15 = (undefined4 *)(local_364 + DAT_009aa9c8);
      if (*(char *)(puVar15 + 4) != '\0') {
        local_348 = *puVar15;
        local_34c = 0;
        local_350 = -(float)puVar15[1];
        local_31c = 0;
        local_338 = puVar15[2];
        local_344 = 0x3f800000;
        local_340 = -(float)puVar15[3];
        local_314 = 0x3f800000;
        local_33c = 0;
        local_334 = 0x3f800000;
        local_30c = 0;
        local_304 = 0x3f800000;
        local_370 = (int *)0x0;
        local_36c = 0;
        local_368 = 0;
        local_374 = &PTR_FUN_00891594;
        local_c = 1;
        local_378 = puVar15;
        local_320 = local_350;
        local_318 = local_348;
        local_310 = local_340;
        local_308 = local_338;
        FUN_0077ae80(&local_320,&local_374);
        puVar10 = (undefined4 *)FUN_0041c8a0();
        *(undefined1 *)((int)puVar10 + 0xf) = 1;
        puVar10[1] = puVar10;
        *puVar10 = puVar10;
        puVar10[2] = puVar10;
        local_c = CONCAT31(local_c._1_3_,2);
        piVar11 = local_370;
        piVar14 = local_370;
        if (local_370 != local_370 + local_368) {
          do {
            iVar13 = *(int *)(*(int *)(local_360 + 0x20) + *piVar14 * 4);
            if (iVar13 != 0) {
              bVar2 = *(byte *)(iVar13 + 0xb);
              uVar12 = 0;
              if (bVar2 != 0) {
                do {
                  local_35c = *(undefined4 *)
                               (*(ushort *)(iVar13 + 0x12) + 0x14 + iVar13 + uVar12 * 4);
                  FUN_00438750(&local_330,&local_35c);
                  uVar12 = uVar12 + 1;
                  piVar11 = local_370;
                } while (uVar12 < bVar2);
              }
            }
            piVar14 = piVar14 + 1;
            puVar15 = local_378;
          } while (piVar14 != piVar11 + local_368);
        }
        puVar3 = (undefined4 *)*puVar10;
        while (puVar3 != puVar10) {
          iVar13 = *(short *)(puVar3 + 3) * 0x16 + DAT_009b38c0;
          cVar7 = FUN_0076d7a0(iVar13,puVar15);
          if (cVar7 != '\0') {
            bVar5 = false;
            if (((0 < local_37c) && (*(short *)(iVar13 + 6) != -1)) && (iVar8 = 0, 0 < local_37c)) {
              do {
                bVar5 = (bool)(bVar5 | *(short *)(iVar13 + 6) ==
                                       *(short *)((int)&local_358 + iVar8 * 2));
                iVar8 = iVar8 + 1;
              } while (iVar8 < local_37c);
              if (bVar5) goto LAB_00788e58;
            }
            if (*(char *)((int)local_378 + 0x12) == '\0') {
              *(byte *)(iVar13 + 0xb) = *(byte *)(iVar13 + 0xb) | 0x10;
            }
            else {
              *(byte *)(iVar13 + 0xb) = *(byte *)(iVar13 + 0xb) | 0x20;
            }
          }
LAB_00788e58:
          puVar15 = local_378;
          if (*(char *)((int)puVar3 + 0xf) == '\0') {
            puVar4 = (undefined4 *)puVar3[2];
            if (*(char *)((int)puVar4 + 0xf) == '\0') {
              cVar7 = *(char *)((int)*puVar4 + 0xf);
              puVar3 = puVar4;
              puVar4 = (undefined4 *)*puVar4;
              while (cVar7 == '\0') {
                cVar7 = *(char *)((int)*puVar4 + 0xf);
                puVar3 = puVar4;
                puVar4 = (undefined4 *)*puVar4;
              }
            }
            else {
              cVar7 = *(char *)((int)puVar3[1] + 0xf);
              puVar6 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
              while ((puVar3 = puVar6, cVar7 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
                cVar7 = *(char *)((int)puVar3[1] + 0xf);
                puVar6 = (undefined4 *)puVar3[1];
                puVar4 = puVar3;
              }
            }
          }
        }
        local_c._1_3_ = (undefined3)((uint)local_c >> 8);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00436150(&local_35c,*puVar10,puVar10);
        if (puVar10 != (undefined4 *)0x0) {
          FUN_005d0370(puVar10,0x10,0);
        }
        local_c = 0xffffffff;
        FUN_0042cbf0();
      }
      local_364 = local_364 + 0x18;
      local_380 = local_380 + -1;
    } while (local_380 != 0);
  }
  ExceptionList = local_14;
  return;
}

