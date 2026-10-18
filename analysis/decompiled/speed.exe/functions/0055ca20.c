/* speed.exe 0055ca20 FUN_0055ca20; analysis pseudocode, not buildable source.
 * calls 0056e340 FUN_0056e340
 * calls 00555a90 FUN_00555a90
 * calls 005b8550 FUN_005b8550
 * calls 007a1fa0 FUN_007a1fa0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00799fe0 FUN_00799fe0
 * calls 0083d9c0 FUN_0083d9c0
 * calls 00572070 FUN_00572070
 * calls 00592170 FUN_00592170
 * calls 0079eb70 FUN_0079eb70
 * calls 00794f80 FUN_00794f80
 * calls 0079a0b0 FUN_0079a0b0
 * calls 007412a0 FUN_007412a0
 * calls 007a2910 FUN_007a2910
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00652ad0 _malloc
 * calls 00539510 FUN_00539510
 * calls 00460c70 FUN_00460c70
 * calls 00790370 FUN_00790370
 * calls 005b1360 FUN_005b1360
 * calls 00460d20 FUN_00460d20
 * calls 00586290 FUN_00586290
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00598970 FUN_00598970
 * calls 00514c70 FUN_00514c70
 * calls 0078c8d0 FUN_0078c8d0
 * calls 00515e20 FUN_00515e20
 * calls 0078bc60 FUN_0078bc60
 * calls 0079c470 FUN_0079c470
 * calls 0056e300 FUN_0056e300
 * calls 0078bad0 FUN_0078bad0
 * calls 0079f090 FUN_0079f090
 * calls 00539810 FUN_00539810
 * calls 00598590 FUN_00598590
 * calls 005252d0 FUN_005252d0
 * calls 00798380 FUN_00798380
 * calls 007c4b80 FUN_007c4b80
 * calls 00790970 FUN_00790970
 * calls 005b7580 FUN_005b7580
 * calls 0078c180 FUN_0078c180
 * calls 0056dbe0 FUN_0056dbe0
 * calls 005b5b70 FUN_005b5b70
 * calls 0078c730 FUN_0078c730
 * calls 00525220 FUN_00525220
 * calls 005b8400 FUN_005b8400
 * calls 0056bc10 FUN_0056bc10
 * calls 005379d0 FUN_005379d0
 * calls 00591d90 FUN_00591d90
 * calls 0079bac0 FUN_0079bac0
 * calls 005af1c0 FUN_005af1c0
 * calls 0079dec0 FUN_0079dec0
 * calls 00513290 FUN_00513290
 * calls 0079e610 FUN_0079e610
 * calls 00572e80 FUN_00572e80
 * calls 007ec4d2 FUN_007ec4d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0055ca20(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 local_60 [32];
  undefined1 local_40 [48];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870f03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089ec78;
  param_1[0xb] = 0;
  local_4 = 0;
  FUN_00592170(param_1[4],"scroll_area","scrollbar",1,1,0,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00539810(param_1[4]);
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  *(undefined1 *)(param_1 + 0x45f) = 0;
  *(undefined1 *)((int)param_1 + 0x117d) = 0;
  uVar2 = FUN_007c4b80();
  param_1[0x460] = uVar2;
  *(undefined1 *)(param_1 + 0x461) = 0;
  *(undefined1 *)((int)param_1 + 0x1185) = 0;
  param_1[0x462] = 0;
  *(undefined1 *)(param_1 + 0x463) = 0;
  *(undefined1 *)(param_1 + 0x465) = 0;
  param_1[0x466] = 0;
  *(undefined1 *)(param_1 + 0x467) = 0;
  *(undefined1 *)((int)param_1 + 0x119d) = 0;
  *(undefined1 *)((int)param_1 + 0x119e) = 0;
  *(undefined1 *)((int)param_1 + 0x119f) = 1;
  *(undefined1 *)(param_1 + 0x468) = 0;
  *(undefined1 *)((int)param_1 + 0x11a1) = 0;
  *(undefined1 *)((int)param_1 + 0x11a2) = 0;
  *(undefined1 *)((int)param_1 + 0x11a3) = 0;
  *(undefined1 *)(param_1 + 0x469) = 0;
  *(undefined1 *)((int)param_1 + 0x11a5) = 0;
  *(undefined1 *)((int)param_1 + 0x11a6) = 0;
  *(undefined1 *)((int)param_1 + 0x11a7) = 0;
  *(undefined1 *)(param_1 + 0x46a) = 0;
  DAT_0091ca85 = 0;
  DAT_008f32fc = 1;
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  DAT_008f32bc = 0xffffffff;
  param_1[0x46b] = 0;
  param_1[0x46c] = 0;
  param_1[0x46d] = 0;
  param_1[0x46e] = 0;
  param_1[0x46f] = 0;
  if (DAT_009b0fa0 != 1) {
    iVar3 = FUN_00794f80();
    if (*(char *)(iVar3 + 0x71) != '\0') {
      uVar2 = 1;
      FUN_00794f80(1);
      FUN_0079e610(uVar2);
    }
    FUN_007412a0();
  }
  pcVar8 = FUN_005394b0;
  puVar4 = param_1;
  FUN_0079f090(FUN_005394b0,param_1);
  FUN_0078c180(pcVar8,puVar4);
  *(undefined1 *)(param_1 + 0x463) = *(undefined1 *)(DAT_0091cf90 + 0x173);
  iVar3 = 0;
  do {
    puVar4 = _malloc(0x20);
    (&DAT_0091c1ac)[iVar3] = puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    (&DAT_0091c22c)[iVar3] = 0;
    (&DAT_0091c24c)[iVar3] = 0;
    uVar2 = DAT_0091c1ac;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  DAT_0091c24c = 1;
  DAT_0091c1a8 = 1;
  uVar5 = FUN_0056e340();
  FUN_00460c70(uVar2,uVar5);
  iVar3 = FUN_0056dbe0(0xb);
  param_1[0x45d] = *(undefined4 *)(iVar3 + 0x10);
  uVar2 = FUN_007a2910(0);
  pcVar11 = (char *)param_1[4];
  param_1[0x45c] = uVar2;
  if (pcVar11 == (char *)0x0) {
LAB_0055ccce:
    iVar3 = 0;
  }
  else {
    pcVar6 = pcVar11;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 == pcVar11 + 1) goto LAB_0055ccce;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar11);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar11);
        if (iVar3 == 0) goto LAB_0055ccce;
        goto LAB_0055ccba;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar11);
LAB_0055ccba:
      if (iVar3 == 0) goto LAB_0055ccce;
    }
    iVar3 = FUN_005b8550(0x4162454c);
    if (iVar3 == 0) goto LAB_0055ccce;
  }
  param_1[0x459] = iVar3;
  FUN_005379d0();
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_00515e20(local_60,0x20,"STATUS_%d",iVar3);
    pcVar11 = (char *)param_1[4];
    uVar2 = FUN_005af1c0(local_60);
    if (pcVar11 != (char *)0x0) {
      pcVar6 = pcVar11;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != pcVar11 + 1) {
        if (DAT_0091d218 < 1) {
          iVar7 = FUN_005b5b70(pcVar11);
          if (iVar7 == 0) {
            iVar7 = FUN_005b7580(pcVar11);
            if (iVar7 == 0) goto LAB_0055cda3;
            goto LAB_0055cd6f;
          }
        }
        else {
          FUN_00572070();
          iVar7 = FUN_00591d90(pcVar11);
LAB_0055cd6f:
          if (iVar7 == 0) goto LAB_0055cda3;
        }
        iVar7 = FUN_005b8550(uVar2);
        if ((iVar7 != 0) && (iVar7 = FUN_005b1360(0x16a259), iVar7 != 0)) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
        }
      }
    }
LAB_0055cda3:
  } while (iVar3 < 4);
  FUN_00555a90();
  FUN_0079bac0();
  FUN_00790970(&LAB_00522b50,param_1);
  FUN_0079a0b0();
  if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
    FUN_0056c6e0(param_1[0x45a]);
    param_1[0x45a] = 0;
    iVar3 = FUN_0078bcc0();
    if (iVar3 == 0) {
      puVar9 = &LAB_00522cf0;
      puVar4 = param_1;
      uVar2 = FUN_0056e340(&LAB_00522cf0,param_1);
      iVar3 = FUN_0079eb70(uVar2,puVar9,puVar4);
      if (iVar3 < 1) {
        uVar2 = param_1[4];
        uVar5 = FUN_0056bc10(0xab13cae4);
        FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0xd828e52c,0xd828e52c,uVar5);
      }
      else {
        FUN_0056e300(3);
        uVar2 = param_1[4];
        uVar5 = FUN_0056bc10(0xcc6c959f);
        uVar2 = FUN_00598590(uVar2,&DAT_00890978,1,uVar5);
        param_1[0x45a] = uVar2;
      }
    }
    else {
      FUN_0079dec0();
      FUN_00799fe0();
    }
  }
  else {
    pcVar11 = (char *)param_1[4];
    if (pcVar11 != (char *)0x0) {
      pcVar6 = pcVar11;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != pcVar11 + 1) {
        if (DAT_0091d218 < 1) {
          iVar3 = FUN_005b5b70(pcVar11);
          if (iVar3 == 0) {
            iVar3 = FUN_005b7580(pcVar11);
            if (iVar3 == 0) goto LAB_0055cf65;
            goto LAB_0055cf15;
          }
        }
        else {
          FUN_00572070();
          iVar3 = FUN_00591d90(pcVar11);
LAB_0055cf15:
          if (iVar3 == 0) goto LAB_0055cf65;
        }
        iVar3 = FUN_005b8550(0x69593a1d);
        if ((iVar3 != 0) &&
           (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001,
           *(int *)(iVar3 + 0x18) == 5)) {
          iVar7 = *(int *)(iVar3 + 100);
          iVar3 = *(int *)(iVar3 + 0x60);
          if (0 < iVar3) {
            do {
              FUN_00514c70(iVar7);
              iVar7 = *(int *)(iVar7 + 4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
    }
LAB_0055cf65:
    pcVar11 = (char *)param_1[4];
    if (pcVar11 != (char *)0x0) {
      pcVar6 = pcVar11;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != pcVar11 + 1) {
        if (DAT_0091d218 < 1) {
          iVar3 = FUN_005b5b70(pcVar11);
          if (iVar3 == 0) {
            iVar3 = FUN_005b7580(pcVar11);
            if (iVar3 == 0) goto LAB_0055d011;
            goto LAB_0055cfce;
          }
        }
        else {
          FUN_00572070();
          iVar3 = FUN_00591d90(pcVar11);
LAB_0055cfce:
          if (iVar3 == 0) goto LAB_0055d011;
        }
        iVar3 = FUN_005b8550(0x9347e41c);
        if ((iVar3 != 0) &&
           (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001,
           *(int *)(iVar3 + 0x18) == 5)) {
          iVar7 = *(int *)(iVar3 + 100);
          iVar3 = *(int *)(iVar3 + 0x60);
          if (0 < iVar3) {
            do {
              FUN_00514c70(iVar7);
              iVar7 = *(int *)(iVar7 + 4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
    }
LAB_0055d011:
    FUN_00539510(param_1);
  }
  puVar4 = param_1 + 0x39;
  puVar9 = &LAB_00522f50;
  FUN_0079a9e0(puVar4,&LAB_00522f50);
  FUN_0078bad0(puVar4,puVar9);
  FUN_005252d0(param_1[4],0x4162454c,&DAT_00890978);
  if (*(char *)(param_1 + 0x45f) == '\0') {
    iVar3 = param_1[0x15];
    if (iVar3 == 0) {
LAB_0055d08b:
      uVar2 = param_1[4];
      uVar5 = 0x552094e0;
    }
    else {
      uVar2 = FUN_0056e340();
      iVar3 = FUN_00460d20(iVar3 + 0x2a,uVar2);
      if (iVar3 != 0) goto LAB_0055d08b;
      uVar2 = param_1[4];
      uVar5 = 0x36282214;
    }
    FUN_00525220(uVar2,0x478f18d7,uVar5);
  }
  _DAT_0091ca98 = (uint)(*(char *)(param_1 + 0x463) != '\0');
  FUN_0079a9e0();
  iVar3 = FUN_0045d3a0(0);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    iVar7 = iVar3;
    FUN_0079a9e0(iVar3);
    iVar7 = FUN_00790370(iVar7);
    uVar2 = *(undefined4 *)(iVar7 + 8);
    uVar5 = 1;
    iVar7 = iVar7 + 0xc;
    FUN_0079a9e0(iVar7,uVar2,1);
    FUN_00798380(iVar7,uVar2,uVar5);
  }
  if (DAT_0091ca8c == 2) {
    FUN_0078c730(0);
    uVar2 = FUN_0078c8d0();
    FUN_0083d9c0(uVar2);
    FUN_00572e80(2,0);
    DAT_0091ca8c = 0;
  }
  FUN_00572e80(1,0);
  param_1[0x36] = 0xc407210;
  *(undefined1 *)(param_1 + 0x37) = 1;
  DAT_0091ca78 = param_1;
  FUN_00513290();
  FUN_007ec4d2(&LAB_0054af60,0,0,0);
  pcVar11 = (char *)param_1[4];
  if (pcVar11 != (char *)0x0) {
    pcVar6 = pcVar11;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 != pcVar11 + 1) {
      if (DAT_0091d218 < 1) {
        iVar3 = FUN_005b5b70(pcVar11);
        if (iVar3 == 0) {
          iVar3 = FUN_005b7580(pcVar11);
          if (iVar3 == 0) goto LAB_0055d207;
          goto LAB_0055d1be;
        }
      }
      else {
        FUN_00572070();
        iVar3 = FUN_00591d90(pcVar11);
LAB_0055d1be:
        if (iVar3 == 0) goto LAB_0055d207;
      }
      iVar3 = FUN_005b8550(0x28462c80);
      if ((iVar3 != 0) &&
         (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001, *(int *)(iVar3 + 0x18) == 5
         )) {
        iVar7 = *(int *)(iVar3 + 100);
        iVar3 = *(int *)(iVar3 + 0x60);
        if (0 < iVar3) {
          do {
            FUN_00514c70(iVar7);
            iVar7 = *(int *)(iVar7 + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
LAB_0055d207:
  pcVar11 = (char *)param_1[4];
  if (pcVar11 == (char *)0x0) goto LAB_0055d2b1;
  pcVar6 = pcVar11;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == pcVar11 + 1) goto LAB_0055d2b1;
  if (DAT_0091d218 < 1) {
    iVar3 = FUN_005b5b70(pcVar11);
    if (iVar3 == 0) {
      iVar3 = FUN_005b7580(pcVar11);
      if (iVar3 == 0) goto LAB_0055d2b1;
      goto LAB_0055d26e;
    }
  }
  else {
    FUN_00572070();
    iVar3 = FUN_00591d90(pcVar11);
LAB_0055d26e:
    if (iVar3 == 0) goto LAB_0055d2b1;
  }
  iVar3 = FUN_005b8550(0xb51549b8);
  if ((iVar3 != 0) &&
     (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001, *(int *)(iVar3 + 0x18) == 5)) {
    iVar7 = *(int *)(iVar3 + 100);
    iVar3 = *(int *)(iVar3 + 0x60);
    if (0 < iVar3) {
      do {
        FUN_00514c70(iVar7);
        iVar7 = *(int *)(iVar7 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
LAB_0055d2b1:
  DAT_008f32bc = 0xffffffff;
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  iVar3 = FUN_007a1fa0();
  *(undefined1 *)(iVar3 + 0x58) = 0;
  if (*(int *)(DAT_0091cf90 + 0x13c) != 0) {
    FUN_0079bac0();
    iVar3 = FUN_0078bcc0();
    if (iVar3 != 0) {
      FUN_0079bac0();
      iVar3 = FUN_0078bcc0();
      FUN_0078bc60(1,iVar3 + 0x28);
      puVar9 = local_40;
      puVar10 = &LAB_00522680;
      local_10 = 1;
      puVar4 = param_1;
      FUN_0079bac0(puVar9,&LAB_00522680,param_1);
      FUN_0079c470(puVar9,puVar10,puVar4);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

