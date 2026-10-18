/* speed.exe 007b8f10 FUN_007b8f10; analysis pseudocode, not buildable source.
 * calls 007af220 FUN_007af220
 * calls 005814e0 FUN_005814e0
 * calls 0056f250 FUN_0056f250
 * calls 005816b0 FUN_005816b0
 * calls 00652ad0 _malloc
 * calls 005251e0 FUN_005251e0
 * calls 007a4cd0 FUN_007a4cd0
 * calls 007a4e50 FUN_007a4e50
 * calls 007a4df0 FUN_007a4df0
 * calls 00516c90 FUN_00516c90
 * calls 0056f100 FUN_0056f100
 * calls 00573140 FUN_00573140
 * calls 007b1740 FUN_007b1740
 * calls 00575b00 FUN_00575b00
 * calls 007af8d0 FUN_007af8d0
 * calls 005251a0 FUN_005251a0
 * calls 00677fe0 FUN_00677fe0
 * calls 007aeca0 FUN_007aeca0
 * calls 00672e80 FUN_00672e80
 * calls 0045a430 FUN_0045a430
 * calls 004e4ea0 FUN_004e4ea0
 * calls 007b5ef0 FUN_007b5ef0
 * calls 007aeb90 FUN_007aeb90
 * calls 0067c570 FUN_0067c570
 * calls 007afae0 FUN_007afae0
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_007b8f10(int *param_1)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int ***pppiVar10;
  int *piVar11;
  int ****ppppiVar12;
  bool bVar13;
  float10 fVar14;
  int ***pppiStack_dc;
  int ***pppiStack_d8;
  int ***pppiStack_d4;
  int iStack_d0;
  char *pcStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int ***pppiStack_c0;
  undefined4 uStack_bc;
  void **ppvStack_b8;
  void **ppvStack_b4;
  int iStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  int ***pppiStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  int **ppiStack_94;
  int local_80;
  void *apvStack_78 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [44];
  undefined4 uStack_2c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_008834c8;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) &&
     (ExceptionList = &pvStack_14, DAT_009b9e8d == '\0')) {
    pcStack_98 = (char *)param_1[4];
    ppiStack_94 = (int **)0x0;
    uStack_9c = 0xde511657;
    iStack_a0 = 0x7b8f61;
    ExceptionList = &pvStack_14;
    FUN_00516c90();
  }
  pppiVar10 = (int ***)0x1;
  piVar11 = param_1 + 0x72;
  local_80 = 3;
  do {
    iVar3 = param_1[4];
    pcStack_98 = "DETAIL_TEXT_LINE%d";
    uStack_9c = 0x7b8f82;
    ppiStack_94 = (int **)pppiVar10;
    uStack_9c = FUN_00573140();
    pppiStack_a4 = (int ***)0x7b8f89;
    iStack_a0 = iVar3;
    iVar3 = FUN_005251e0();
    piVar11[-3] = iVar3;
    iVar3 = param_1[4];
    pcStack_a8 = "PERFORMANCE_DETAILS_ICON%d";
    pcStack_ac = (char *)0x7b8f9a;
    pppiStack_a4 = pppiVar10;
    pcStack_ac = (char *)FUN_00573140();
    ppvStack_b4 = (void **)0x7b8fa1;
    iStack_b0 = iVar3;
    iVar3 = FUN_005251a0();
    *piVar11 = iVar3;
    piVar11 = piVar11 + 1;
    pppiVar10 = (int ***)((int)pppiVar10 + 1);
    local_80 = local_80 + -1;
  } while (local_80 != 0);
  ppiStack_94 = (int **)0x0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_9c = DAT_009b9ec4[2];
  pcStack_98 = (char *)0x0;
  iStack_a0 = 0x7b8fe4;
  FUN_004e4ea0();
  ppiStack_94 = (int **)local_58;
  pcStack_98 = (char *)*DAT_009b9ec4;
  local_c = 0;
  uStack_9c = 0x7b900f;
  FUN_005814e0();
  ppiStack_94 = (int **)&local_70;
  pcStack_98 = local_58;
  uStack_9c = 0x7b901e;
  FUN_0067c570();
  local_c = 0xffffffff;
  ppiStack_94 = (int **)0x7b9034;
  FUN_0045a430();
  uVar8 = local_68;
  ppiStack_94 = (int **)&local_64;
  pcStack_98 = &DAT_009b9ec8;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_9c = 0x7b9063;
  FUN_0067c570();
  iStack_b0 = param_1[4];
  ppiStack_94 = (int **)0x43200000;
  pcStack_98 = (char *)uVar8;
  uStack_9c = local_5c;
  iStack_a0 = 0;
  pppiStack_a4 = (int ***)0x3f800000;
  pcStack_a8 = (char *)0x0;
  pcStack_ac = "ACCELERATION";
  ppvStack_b4 = (void **)0x7b9096;
  (**(code **)(param_1[0x75] + 0x28))();
  ppvStack_b4 = (void **)0x0;
  uStack_bc = DAT_009b9ec4[2];
  ppvStack_b8 = (void **)0x0;
  pppiStack_c0 = (int ***)0x7b90c4;
  FUN_004e4ea0();
  ppvStack_b4 = apvStack_78;
  ppvStack_b8 = (void **)*DAT_009b9ec4;
  uStack_2c = 2;
  uStack_bc = 0x7b90f1;
  FUN_005814e0();
  ppvStack_b4 = (void **)&stack0xffffff7c;
  ppvStack_b8 = apvStack_78;
  uStack_bc = 0x7b9100;
  FUN_0067c570();
  uStack_2c = 0xffffffff;
  ppvStack_b4 = (void **)0x7b9113;
  FUN_0045a430();
  ppvStack_b4 = (void **)&stack0xffffff70;
  ppvStack_b8 = (void **)&DAT_009b9ec8;
  iStack_a0 = 0;
  uStack_bc = 0x7b9142;
  FUN_0067c570();
  iStack_d0 = param_1[4];
  ppvStack_b4 = (void **)0x43200000;
  ppvStack_b8 = (void **)iStack_a0;
  uStack_bc = 0;
  pppiStack_c0 = (int ***)0x0;
  uStack_c4 = 0x3f800000;
  uStack_c8 = 0;
  pcStack_cc = "HANDLING";
  pppiStack_d4 = (int ***)0x7b9175;
  (**(code **)(param_1[0x86] + 0x28))();
  pppiStack_d4 = (int ***)&pppiStack_a4;
  pppiStack_d8 = (int ***)&DAT_009b9ec8;
  pppiStack_a4 = (int ***)0x0;
  iStack_a0 = 0;
  uStack_9c = 0;
  pppiStack_dc = (int ***)0x7b919c;
  FUN_0067c570();
  iVar3 = param_1[4];
  iVar4 = param_1[0x97];
  pppiStack_d4 = (int ***)0x43200000;
  pppiStack_d8 = (int ***)0x0;
  pppiStack_c0 = pppiStack_a4;
  pppiStack_dc = (int ***)0x0;
  fVar14 = (float10)FUN_007af220();
  pppiStack_d8 = (int ***)(float)fVar14;
  pppiStack_dc = pppiStack_c0;
  (**(code **)(iVar4 + 0x28))(iVar3,"TOPSPEED",0,0x3f800000,0);
  iVar3 = 4;
  switch(param_1[0x52]) {
  case 0x201:
    iVar3 = 4;
    param_1[0x57] = -0x67ac265a;
    break;
  case 0x202:
    iVar3 = 3;
    param_1[0x57] = 0x29aa74ba;
    break;
  case 0x203:
    iVar3 = 2;
    param_1[0x57] = 0x6e101aa7;
    break;
  case 0x204:
    iVar3 = 6;
    param_1[0x57] = 0x4ce19aa4;
    break;
  case 0x205:
    iVar3 = 0;
    param_1[0x57] = 0x5aa9137;
    break;
  case 0x206:
    iVar3 = 1;
    param_1[0x57] = -0x6e668118;
    break;
  case 0x207:
    iVar3 = 5;
    cVar2 = FUN_007afae0();
    param_1[0x57] = (-(uint)(cVar2 != '\0') & 0x4a4912a1) + 0xbb6812bb;
  }
  pppiStack_d8 = (int ***)&pppiStack_d8;
  local_6c = 5;
  pppiStack_d4 = pppiStack_d8;
  cVar2 = FUN_00575b00();
  if ((cVar2 == '\0') ||
     ((((*(byte *)(DAT_0091cf90 + 300) & 1) == 0 && (DAT_009b9e8d == '\0')) ||
      (iVar4 = FUN_005816b0(), iVar4 == 0x29)))) {
    FUN_007af8d0(iVar3,&pppiStack_d8);
  }
  else {
    uVar8 = 0;
    cVar2 = FUN_00575b00();
    if (cVar2 == '\0') {
      uVar8 = FUN_007b5ef0(param_1[0x52],7);
    }
    puVar5 = _malloc(0x2c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_008b7518;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 7;
      puVar5[6] = iVar3;
      *(undefined1 *)(puVar5 + 7) = 1;
      puVar5[8] = 1;
      puVar5[9] = 0;
      *(undefined1 *)(puVar5 + 10) = 1;
    }
    FUN_007b1740(puVar5,0xb8c8c0d4,7,0,uVar8,0);
    cVar2 = FUN_007a4df0(puVar5);
    if (cVar2 == '\0') {
      iVar4 = FUN_007aeca0(puVar5);
      if (iVar4 != 0) {
        puVar5[8] = puVar5[8] & 0xf | 0x20;
      }
    }
    else {
      puVar5[8] = puVar5[8] & 0xf | 0x10;
    }
  }
  iVar4 = 1;
  if ((int ****)pppiStack_d8 != &pppiStack_d8) {
    do {
      pppiVar10 = (int ***)*pppiStack_d8;
      pppiVar1 = (int ***)pppiStack_d8[1];
      ppppiVar12 = (int ****)(pppiStack_d8 + -1);
      *pppiVar1 = (int **)pppiVar10;
      pppiVar10[1] = (int **)pppiVar1;
      switch(iVar3) {
      case 0:
      case 2:
      case 5:
      case 6:
        iVar9 = 3;
        break;
      case 1:
      case 3:
      case 4:
        iVar9 = 4;
        break;
      default:
        iVar9 = -1;
      }
      pppiStack_dc = (int ***)pppiStack_d8[4];
      iVar6 = FUN_00672e80(&DAT_009b9ec8,iVar3);
      uVar8 = FUN_007b5ef0(param_1[0x52],(int)pppiStack_dc + (iVar9 - iVar6));
      uVar7 = FUN_007a4e50(ppppiVar12,0);
      FUN_007b1740(ppppiVar12,0xb8c8c0d4,iVar4,0,uVar8,uVar7);
      iVar4 = iVar4 + 1;
    } while ((int ****)pppiStack_d8 != &pppiStack_d8);
  }
  if (((((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xd & 1) == 0) ||
       ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0)) &&
      ((*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x90dc) == '\0' ||
       (iVar4 = FUN_005816b0(), iVar4 == 0x29)))) ||
     (cVar2 = FUN_00677fe0(&DAT_009b9ec8,iVar3), cVar2 == '\0')) goto LAB_007b9570;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_008b7518;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 7;
    puVar5[6] = iVar3;
    *(undefined1 *)(puVar5 + 7) = 1;
    puVar5[8] = 1;
    puVar5[9] = 0;
    *(undefined1 *)(puVar5 + 10) = 1;
  }
  FUN_007b1740(puVar5,0xb8c8c0d4,7,0,0,0);
  if (puVar5 == (undefined4 *)0x0) {
LAB_007b9555:
    iVar4 = FUN_007aeca0(puVar5);
    if (iVar4 != 0) {
      puVar5[8] = puVar5[8] & 0xf | 0x20;
    }
  }
  else {
    if (*(char *)(puVar5 + 7) == '\0') {
      uVar8 = puVar5[4];
      pppiStack_dc = (int ***)FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 4));
      uVar7 = FUN_005816b0(uVar8);
      iVar4 = FUN_0056f250(uVar7,uVar8);
      bVar13 = iVar4 == puVar5[3];
LAB_007b9553:
      if (!bVar13) goto LAB_007b9555;
    }
    else {
      if (*(char *)(puVar5 + 10) == '\0') {
        iVar4 = puVar5[6];
        iVar9 = FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 4));
        bVar13 = puVar5[5] == *(int *)(iVar9 + 0x118 + iVar4 * 4);
        goto LAB_007b9553;
      }
      cVar2 = FUN_007a4cd0(puVar5[6]);
      if (cVar2 == '\0') goto LAB_007b9555;
    }
    puVar5[8] = puVar5[8] & 0xf | 0x10;
  }
LAB_007b9570:
  cVar2 = FUN_00575b00();
  if ((cVar2 == '\0') || (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0 && (DAT_009b9e8d == '\0')))) {
    iVar4 = FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 4));
    uVar8 = *(undefined4 *)(iVar4 + 0x118 + iVar3 * 4);
    pppiStack_a4 = (int ***)&PTR_FUN_008b7518;
    pcStack_98 = (char *)0x0;
    ppiStack_94 = (int **)0x0;
    iVar3 = FUN_007aeb90(&pppiStack_a4);
    if (iVar3 != 0) {
      uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x14);
    }
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(uVar8);
  }
  else {
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(1);
  }
  (**(code **)(*param_1 + 0xc))();
  local_70 = 0xffffffff;
  if ((int ****)pppiStack_dc != &pppiStack_dc) {
    do {
      pppiVar10 = (int ***)*pppiStack_dc;
      pppiVar1 = (int ***)pppiStack_dc[1];
      *pppiVar1 = (int **)pppiVar10;
      pppiVar10[1] = (int **)pppiVar1;
      if ((int ****)(pppiStack_dc + -1) != (int ****)0x0) {
        (*(code *)*pppiStack_dc[-1])(1);
      }
    } while ((int ****)pppiStack_dc != &pppiStack_dc);
  }
  ExceptionList = apvStack_78[0];
  return;
}

