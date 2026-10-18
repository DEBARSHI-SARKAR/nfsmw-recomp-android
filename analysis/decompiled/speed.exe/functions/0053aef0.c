/* speed.exe 0053aef0 FUN_0053aef0; analysis pseudocode, not buildable source.
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 005922b0 FUN_005922b0
 * calls 0056bc00 FUN_0056bc00
 * calls 005b1360 FUN_005b1360
 * calls 005fb850 FUN_005fb850
 * calls 0079bac0 FUN_0079bac0
 * calls 005faa20 FUN_005faa20
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00586760 FUN_00586760
 * calls 005dc920 FUN_005dc920
 * calls 005a5790 FUN_005a5790
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 005dc930 FUN_005dc930
 * calls 0056e560 FUN_0056e560
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005fab40 FUN_005fab40
 * calls 0078bcc0 FUN_0078bcc0
 * calls 005b8400 FUN_005b8400
 * calls 00576a20 FUN_00576a20
 * calls 005fb710 FUN_005fb710
 * calls 00576790 FUN_00576790
 * calls 0083a670 FUN_0083a670
 * calls 005af1c0 FUN_005af1c0
 * calls 0056bc10 FUN_0056bc10
 * calls 005fba70 FUN_005fba70
 * calls 00592710 FUN_00592710
 * calls 00514c70 FUN_00514c70
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053aef0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  float10 fVar15;
  char *pcVar16;
  undefined4 *local_2c;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  iVar13 = 0;
  local_3 = 0;
  local_20 = 0;
  local_1 = 0;
  do {
    local_2c = _malloc(0x2c);
    if (local_2c == (undefined4 *)0x0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      puVar8 = local_2c + 3;
      *local_2c = &PTR_FUN_0089d348;
      *puVar8 = puVar8;
      local_2c[4] = puVar8;
      local_2c[5] = 0;
      local_2c[9] = 0;
      local_2c[8] = 0;
      local_2c[7] = 0;
      local_2c[6] = 0;
      *(undefined1 *)(local_2c + 10) = 1;
    }
    iVar13 = iVar13 + 1;
    FUN_00515e20(&local_20,0x20,"option_%d",iVar13);
    pcVar16 = *(char **)(param_1 + 0x10);
    uVar5 = FUN_005af1c0(&local_20);
    if (pcVar16 == (char *)0x0) {
LAB_0053b013:
      iVar7 = 0;
    }
    else {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 == pcVar16 + 1) goto LAB_0053b013;
      if (DAT_0091d218 < 1) {
        iVar7 = FUN_005b5b70(pcVar16);
        if (iVar7 == 0) {
          iVar7 = FUN_005b7580(pcVar16);
          if (iVar7 == 0) goto LAB_0053b013;
          goto LAB_0053aff5;
        }
      }
      else {
        FUN_00572070();
        iVar7 = FUN_00591d90(pcVar16);
LAB_0053aff5:
        if (iVar7 == 0) goto LAB_0053b013;
      }
      iVar7 = FUN_005b8550(uVar5);
      if ((iVar7 == 0) || (*(int *)(iVar7 + 0x18) != 2)) goto LAB_0053b013;
    }
    puVar8 = _malloc(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *puVar8 = &PTR_FUN_0089c2bc;
      puVar8[3] = iVar7;
      piVar9 = puVar8 + 1;
    }
    puVar8 = (undefined4 *)local_2c[4];
    *puVar8 = piVar9;
    local_2c[4] = piVar9;
    *piVar9 = (int)(local_2c + 3);
    piVar9[1] = (int)puVar8;
    FUN_005922b0(local_2c);
  } while (iVar13 < 10);
  iVar13 = 0;
  do {
    puVar8 = _malloc(0x18);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = &PTR_FUN_0089cad8;
      puVar8[3] = iVar13;
    }
    iVar7 = puVar8[3];
    if (iVar7 == 0) {
      puVar8[4] = 0xb94fd70e;
      puVar8[5] = 0x2521e5eb;
    }
    else if (iVar7 == 1) {
      puVar8[4] = 0x34fa2c1;
      puVar8[5] = 0xe9638d3e;
    }
    else if (iVar7 == 2) {
      puVar8[4] = 0x6f547e4c;
      puVar8[5] = 0xaaab31e9;
    }
    puVar1 = *(undefined4 **)(param_1 + 0xe4);
    piVar9 = puVar8 + 1;
    *puVar1 = piVar9;
    iVar13 = iVar13 + 1;
    *(int **)(param_1 + 0xe4) = piVar9;
    puVar8[2] = puVar1;
    *piVar9 = param_1 + 0xe0;
  } while (iVar13 < 3);
  uVar14 = 0;
  iVar13 = FUN_005dc920();
  if (iVar13 != 0) {
    do {
      iVar13 = FUN_005dc930(uVar14);
      uVar5 = FUN_005fab40(0);
      cVar2 = FUN_00576790(4,uVar5);
      if (cVar2 != '\0') {
        uVar5 = FUN_005fab40();
        cVar2 = FUN_00576a20(uVar5);
        if (cVar2 != '\0') {
          iVar7 = FUN_005faa20();
          if (iVar7 == 1) {
            piVar9 = _malloc(0x14);
            if (piVar9 == (int *)0x0) {
              piVar9 = (int *)0x0;
              iVar13 = param_1 + 0xe8;
            }
            else {
              piVar9[2] = iVar13;
              *(undefined1 *)(piVar9 + 3) = 1;
              piVar9[4] = 0;
              iVar13 = param_1 + 0xe8;
            }
          }
          else {
            iVar7 = FUN_005faa20();
            if (iVar7 == 0) {
              piVar9 = _malloc(0x14);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
                iVar13 = param_1 + 0xf0;
              }
              else {
                piVar9[2] = iVar13;
                *(undefined1 *)(piVar9 + 3) = 1;
                piVar9[4] = 0;
                iVar13 = param_1 + 0xf0;
              }
            }
            else {
              iVar7 = FUN_005faa20();
              if (iVar7 != 2) goto LAB_0053b1e7;
              piVar9 = _malloc(0x14);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9[2] = iVar13;
                *(undefined1 *)(piVar9 + 3) = 1;
                piVar9[4] = 0;
              }
              iVar13 = param_1 + 0xf8;
            }
          }
          puVar8 = *(undefined4 **)(iVar13 + 4);
          *puVar8 = piVar9;
          *(int **)(iVar13 + 4) = piVar9;
          piVar9[1] = (int)puVar8;
          *piVar9 = iVar13;
        }
      }
LAB_0053b1e7:
      uVar14 = uVar14 + 1;
      uVar10 = FUN_005dc920();
    } while (uVar14 < uVar10);
  }
  FUN_0079bac0();
  iVar13 = FUN_0078bcc0();
  iVar13 = iVar13 + 0x90;
  FUN_0083a670(iVar13,&DAT_0089dcd0,0);
  iVar7 = FUN_0083abc0();
  FUN_0083a670(iVar13,&DAT_0089dccc,0);
  bVar3 = FUN_0083abc0();
  FUN_0083a670(iVar13,&DAT_0089dda0,0);
  bVar4 = FUN_0083abc0();
  FUN_005fb710(iVar7);
  if (*(int *)(param_1 + 0xe0) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(param_1 + 0xe0) + -4;
  }
  *(int *)(param_1 + 0x100) = iVar13;
  iVar13 = FUN_005faa20();
  if (*(int *)(*(int *)(param_1 + 0x100) + 0xc) != iVar13) {
    do {
      if (*(int *)(param_1 + 0x100) == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(*(int *)(param_1 + 0x100) + 4);
      }
      puVar8 = (undefined4 *)*piVar9;
      if (puVar8 == (undefined4 *)(param_1 + 0xe0)) {
        puVar8 = *(undefined4 **)(param_1 + 0xe0);
      }
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = puVar8 + -1;
      }
      *(undefined4 **)(param_1 + 0x100) = puVar8;
      iVar13 = FUN_005faa20();
    } while (*(int *)(*(int *)(param_1 + 0x100) + 0xc) != iVar13);
  }
  pcVar16 = *(char **)(param_1 + 0x10);
  iVar13 = *(int *)(*(int *)(param_1 + 0x100) + 0x14);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar11 = FUN_005b5b70(pcVar16);
        if (iVar11 == 0) {
          iVar11 = FUN_005b7580(pcVar16);
          if (iVar11 == 0) goto LAB_0053b374;
          goto LAB_0053b346;
        }
      }
      else {
        FUN_00572070();
        iVar11 = FUN_00591d90(pcVar16);
LAB_0053b346:
        if (iVar11 == 0) goto LAB_0053b374;
      }
      iVar11 = FUN_005b8550(0xceb82625);
      if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) == 1)) && (*(int *)(iVar11 + 0x24) != iVar13))
      {
        *(int *)(iVar11 + 0x24) = iVar13;
        *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) | 0x2400000;
      }
    }
  }
LAB_0053b374:
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0056bc10();
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  FUN_00592710(puVar8);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x110) = 0;
  iVar13 = FUN_005faa20();
  if (iVar13 == 0) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x108);
  }
  else if (iVar13 == 1) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x104);
  }
  else if (iVar13 == 2) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x10c);
  }
  iVar13 = FUN_005fab40();
  while (iVar13 != iVar7) {
    iVar13 = FUN_005faa20();
    if (iVar13 == 0) {
      piVar9 = (int *)**(undefined4 **)(param_1 + 0x110);
      if (piVar9 == (int *)(param_1 + 0xf0)) {
        piVar9 = *(int **)(param_1 + 0xf0);
      }
LAB_0053b4bf:
      *(int **)(param_1 + 0x110) = piVar9;
    }
    else {
      if (iVar13 == 1) {
        piVar9 = (int *)**(undefined4 **)(param_1 + 0x110);
        if (piVar9 == (int *)(param_1 + 0xe8)) {
          piVar9 = *(int **)(param_1 + 0xe8);
        }
        goto LAB_0053b4bf;
      }
      if (iVar13 == 2) {
        piVar9 = (int *)**(undefined4 **)(param_1 + 0x110);
        if (piVar9 == (int *)(param_1 + 0xf8)) {
          piVar9 = *(int **)(param_1 + 0xf8);
        }
        goto LAB_0053b4bf;
      }
    }
    iVar13 = FUN_005fab40();
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x110) + 8);
  pcVar16 = "TRACKNAME_";
  uVar12 = FUN_0056e560();
  cVar2 = FUN_0056bc00(uVar12,pcVar16,uVar5);
  if (cVar2 == '\0') {
    uVar5 = FUN_005fba70();
    FUN_00515e20(&local_20,0x20,uVar5);
  }
  else {
    uVar5 = FUN_0056bc10(uVar12);
    FUN_00515e20(&local_20,0x20,uVar5);
  }
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  FUN_00592710(puVar8);
  *(uint *)(param_1 + 0x118) = (uint)bVar4;
  FUN_00515e20(&local_20,0x20,&DAT_0089d764,(uint)bVar4);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  FUN_00592710(puVar8);
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053b67e;
          goto LAB_0053b644;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053b644:
        if (iVar13 == 0) goto LAB_0053b67e;
      }
      iVar13 = FUN_005b8550(0x4709e252);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053b67e:
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053b70c;
          goto LAB_0053b6d8;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053b6d8:
        if (iVar13 == 0) goto LAB_0053b70c;
      }
      iVar13 = FUN_005b8550(0x4b4e388a);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053b70c:
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0056bc10();
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  FUN_005a5790(puVar8);
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053b80e;
          goto LAB_0053b7d4;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053b7d4:
        if (iVar13 == 0) goto LAB_0053b80e;
      }
      iVar13 = FUN_005b8550(0x4709e253);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053b80e:
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053b89c;
          goto LAB_0053b868;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053b868:
        if (iVar13 == 0) goto LAB_0053b89c;
      }
      iVar13 = FUN_005b8550(0x4b4e388b);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053b89c:
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar5 = FUN_0056bc10(0x8569a26a);
    fVar15 = (float10)FUN_005fb850(uVar5);
    fVar15 = fVar15 * (float10)_DAT_00890d60;
  }
  else {
    uVar5 = FUN_0056bc10(0x867dcfd9);
    fVar15 = (float10)FUN_005fb850(uVar5);
    fVar15 = fVar15 * (float10)_DAT_0089dcc8;
  }
  FUN_00515e20(&local_20,0x20,"%$0.1f %s",(double)fVar15);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  FUN_005a5790(puVar8);
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053ba02;
          goto LAB_0053b9c8;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053b9c8:
        if (iVar13 == 0) goto LAB_0053ba02;
      }
      iVar13 = FUN_005b8550(0x4709e254);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053ba02:
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053ba90;
          goto LAB_0053ba5c;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053ba5c:
        if (iVar13 == 0) goto LAB_0053ba90;
      }
      iVar13 = FUN_005b8550(0x4b4e388c);
      if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
        FUN_005b8400();
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
  }
LAB_0053ba90:
  *(uint *)(param_1 + 0x114) = (uint)bVar3;
  FUN_00515e20(&local_20,0x20,&DAT_0089d764,(uint)bVar3);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  iVar13 = FUN_005faa20();
  if (iVar13 != 1) {
    FUN_0056bc10();
  }
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  iVar13 = FUN_005faa20();
  if ((iVar13 == 1) && (*(char *)(DAT_0091cf90 + 0x141) == '\0')) {
    FUN_00592710(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bbd5;
            goto LAB_0053bb9b;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bb9b:
          if (iVar13 == 0) goto LAB_0053bbd5;
        }
        iVar13 = FUN_005b8550(0x4709e255);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053bbd5:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bd98;
            goto LAB_0053bc3c;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bc3c:
          if (iVar13 == 0) goto LAB_0053bd98;
        }
        iVar13 = FUN_005b8550(0x4b4e388d);
        if (iVar13 != 0) {
          uVar5 = 0x6ebbfb68;
LAB_0053bd7f:
          iVar13 = FUN_005b1360(uVar5);
          if (iVar13 != 0) {
            FUN_005b8400();
            *(undefined4 *)(iVar13 + 0x10) = 0;
          }
        }
      }
    }
  }
  else {
    FUN_005a5790(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bd06;
            goto LAB_0053bccc;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bccc:
          if (iVar13 == 0) goto LAB_0053bd06;
        }
        iVar13 = FUN_005b8550(0x4709e255);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053bd06:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bd98;
            goto LAB_0053bd64;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bd64:
          if (iVar13 == 0) goto LAB_0053bd98;
        }
        iVar13 = FUN_005b8550(0x4b4e388d);
        if (iVar13 != 0) {
          uVar5 = 0x163c76;
          goto LAB_0053bd7f;
        }
      }
    }
  }
LAB_0053bd98:
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(DAT_0091cf90 + 0x142);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0056bc10();
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  if (*(char *)(DAT_0091cf90 + 0x141) == '\0') {
    FUN_00592710(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bfe3;
            goto LAB_0053bfa9;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bfa9:
          if (iVar13 == 0) goto LAB_0053bfe3;
        }
        iVar13 = FUN_005b8550(0x4709e256);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053bfe3:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c078;
            goto LAB_0053c044;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c044:
          if (iVar13 == 0) goto LAB_0053c078;
        }
        iVar13 = FUN_005b8550(0x4b4e388e);
        if (iVar13 != 0) {
          uVar5 = 0x6ebbfb68;
          goto LAB_0053c05f;
        }
      }
    }
  }
  else {
    FUN_005a5790(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053bebe;
            goto LAB_0053be84;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053be84:
          if (iVar13 == 0) goto LAB_0053bebe;
        }
        iVar13 = FUN_005b8550(0x4709e256);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053bebe:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c078;
            goto LAB_0053bf20;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053bf20:
          if (iVar13 == 0) goto LAB_0053c078;
        }
        iVar13 = FUN_005b8550(0x4b4e388e);
        if (iVar13 != 0) {
          uVar5 = 0x163c76;
LAB_0053c05f:
          iVar13 = FUN_005b1360(uVar5);
          if (iVar13 != 0) {
            FUN_005b8400();
            *(undefined4 *)(iVar13 + 0x10) = 0;
          }
        }
      }
    }
  }
LAB_0053c078:
  *(undefined1 *)(param_1 + 0x11d) = *(undefined1 *)(DAT_0091cf90 + 0x15f);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0056bc10();
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  if (*(char *)(DAT_0091cf90 + 0x141) == '\0') {
    FUN_00592710(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c2c8;
            goto LAB_0053c28e;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c28e:
          if (iVar13 == 0) goto LAB_0053c2c8;
        }
        iVar13 = FUN_005b8550(0x4709e257);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053c2c8:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c358;
            goto LAB_0053c324;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c324:
          if (iVar13 == 0) goto LAB_0053c358;
        }
        iVar13 = FUN_005b8550(0x4b4e388f);
        if (iVar13 != 0) {
          uVar5 = 0x6ebbfb68;
          goto LAB_0053c33f;
        }
      }
    }
  }
  else {
    FUN_005a5790(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c19f;
            goto LAB_0053c165;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c165:
          if (iVar13 == 0) goto LAB_0053c19f;
        }
        iVar13 = FUN_005b8550(0x4709e257);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053c19f:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c358;
            goto LAB_0053c201;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c201:
          if (iVar13 == 0) goto LAB_0053c358;
        }
        iVar13 = FUN_005b8550(0x4b4e388f);
        if (iVar13 != 0) {
          uVar5 = 0x163c76;
LAB_0053c33f:
          iVar13 = FUN_005b1360(uVar5);
          if (iVar13 != 0) {
            FUN_005b8400();
            *(undefined4 *)(iVar13 + 0x10) = 0;
          }
        }
      }
    }
  }
LAB_0053c358:
  *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(DAT_0091cf90 + 0x143);
  puVar8 = _malloc(0x18);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar8 + 3;
    *puVar8 = &PTR_FUN_0089d344;
    *puVar1 = puVar1;
    puVar8[4] = puVar1;
    *(undefined1 *)(puVar8 + 5) = 1;
  }
  FUN_0056bc10();
  FUN_0051dcf0();
  FUN_005868e0(puVar8);
  if (*(char *)(DAT_0091cf90 + 0x141) == '\0') {
    FUN_00592710(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c5ae;
            goto LAB_0053c575;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c575:
          if (iVar13 == 0) goto LAB_0053c5ae;
        }
        iVar13 = FUN_005b8550(0x4709e258);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x6ebbfb68), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053c5ae:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c642;
            goto LAB_0053c609;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c609:
          if (iVar13 == 0) goto LAB_0053c642;
        }
        iVar13 = FUN_005b8550(0x4b4e3890);
        if (iVar13 != 0) {
          uVar5 = 0x6ebbfb68;
          goto LAB_0053c624;
        }
      }
    }
  }
  else {
    FUN_005a5790(puVar8);
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c482;
            goto LAB_0053c449;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c449:
          if (iVar13 == 0) goto LAB_0053c482;
        }
        iVar13 = FUN_005b8550(0x4709e258);
        if ((iVar13 != 0) && (iVar13 = FUN_005b1360(0x163c76), iVar13 != 0)) {
          FUN_005b8400();
          *(undefined4 *)(iVar13 + 0x10) = 0;
        }
      }
    }
LAB_0053c482:
    pcVar16 = *(char **)(param_1 + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar6 = pcVar16;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (pcVar6 != pcVar16 + 1) {
        if (DAT_0091d218 < 1) {
          iVar13 = FUN_005b5b70(pcVar16);
          if (iVar13 == 0) {
            iVar13 = FUN_005b7580(pcVar16);
            if (iVar13 == 0) goto LAB_0053c642;
            goto LAB_0053c4e5;
          }
        }
        else {
          FUN_00572070();
          iVar13 = FUN_00591d90(pcVar16);
LAB_0053c4e5:
          if (iVar13 == 0) goto LAB_0053c642;
        }
        iVar13 = FUN_005b8550(0x4b4e3890);
        if (iVar13 != 0) {
          uVar5 = 0x163c76;
LAB_0053c624:
          iVar13 = FUN_005b1360(uVar5);
          if (iVar13 != 0) {
            FUN_005b8400();
            *(undefined4 *)(iVar13 + 0x10) = 0;
          }
        }
      }
    }
  }
LAB_0053c642:
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 != (char *)0x0) {
    pcVar6 = pcVar16;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar16 + 1) {
      if (DAT_0091d218 < 1) {
        iVar13 = FUN_005b5b70(pcVar16);
        if (iVar13 == 0) {
          iVar13 = FUN_005b7580(pcVar16);
          if (iVar13 == 0) goto LAB_0053c6f4;
          goto LAB_0053c6ab;
        }
      }
      else {
        FUN_00572070();
        iVar13 = FUN_00591d90(pcVar16);
LAB_0053c6ab:
        if (iVar13 == 0) goto LAB_0053c6f4;
      }
      iVar13 = FUN_005b8550(0x28462c80);
      if ((iVar13 != 0) &&
         (*(uint *)(iVar13 + 0x1c) = *(uint *)(iVar13 + 0x1c) | 0x2400001,
         *(int *)(iVar13 + 0x18) == 5)) {
        iVar7 = *(int *)(iVar13 + 100);
        iVar13 = *(int *)(iVar13 + 0x60);
        if (0 < iVar13) {
          do {
            FUN_00514c70(iVar7);
            iVar7 = *(int *)(iVar7 + 4);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
    }
  }
LAB_0053c6f4:
  pcVar16 = *(char **)(param_1 + 0x10);
  if (pcVar16 == (char *)0x0) goto LAB_0053c79f;
  pcVar6 = pcVar16;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if (pcVar6 == pcVar16 + 1) goto LAB_0053c79f;
  if (DAT_0091d218 < 1) {
    iVar13 = FUN_005b5b70(pcVar16);
    if (iVar13 == 0) {
      iVar13 = FUN_005b7580(pcVar16);
      if (iVar13 == 0) goto LAB_0053c79f;
      goto LAB_0053c75b;
    }
  }
  else {
    FUN_00572070();
    iVar13 = FUN_00591d90(pcVar16);
LAB_0053c75b:
    if (iVar13 == 0) goto LAB_0053c79f;
  }
  iVar13 = FUN_005b8550(0xb51549b8);
  if ((iVar13 != 0) &&
     (*(uint *)(iVar13 + 0x1c) = *(uint *)(iVar13 + 0x1c) | 0x2400001, *(int *)(iVar13 + 0x18) == 5)
     ) {
    iVar7 = *(int *)(iVar13 + 100);
    iVar13 = *(int *)(iVar13 + 0x60);
    if (0 < iVar13) {
      do {
        FUN_00514c70(iVar7);
        iVar7 = *(int *)(iVar7 + 4);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
LAB_0053c79f:
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  return;
}

