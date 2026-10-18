/* speed.exe 007bd060 FUN_007bd060; analysis pseudocode, not buildable source.
 * calls 00576b30 FUN_00576b30
 * calls 00747a50 FUN_00747a50
 * calls 007af4f0 FUN_007af4f0
 * calls 007a6d80 FUN_007a6d80
 * calls 007b1740 FUN_007b1740
 * calls 007b7670 FUN_007b7670
 * calls 00575b00 FUN_00575b00
 * calls 007a4e50 FUN_007a4e50
 * calls 007aed20 FUN_007aed20
 * calls 007b5ef0 FUN_007b5ef0
 * calls 00460bf0 FUN_00460bf0
 * calls 007b3f00 FUN_007b3f00
 * calls 00516c90 FUN_00516c90
 * calls 00747ac0 FUN_00747ac0
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_007bd060(int *param_1)

{
  uint uVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  bool bVar4;
  byte bVar5;
  int ***pppiVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int ****ppppiVar14;
  bool bVar15;
  byte bVar16;
  undefined4 uVar17;
  int **local_34;
  int local_30;
  int local_28;
  int ***local_20;
  int ***local_1c;
  void *local_18;
  void *pvStack_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = &LAB_00883708;
  pvStack_14 = ExceptionList;
  uVar1 = param_1[0x52];
  iVar10 = 0;
  uVar13 = 0;
  bVar5 = 0;
  bVar4 = false;
  local_34 = (int **)0x0;
  if (uVar1 < 0x404) {
    if (uVar1 == 0x403) {
      ExceptionList = &pvStack_14;
      param_1[0x57] = 0x1e8d885f;
      iVar10 = 0x192d84da;
      bVar5 = 1;
      goto LAB_007bd30f;
    }
    if (uVar1 < 0x305) {
      if (uVar1 == 0x304) {
        ExceptionList = &pvStack_14;
        param_1[0x57] = -0x2cd8d65a;
        iVar10 = 0x3f23165c;
        uVar13 = 0x83;
      }
      else if (uVar1 == 0x101) {
        ExceptionList = &pvStack_14;
        param_1[0x57] = 0x6134c218;
        cVar7 = FUN_00575b00();
        uVar13 = 0x17;
        iVar10 = (-(uint)(cVar7 != '\0') & 0xacad18c4) + 0x28c24f6;
      }
      else if (uVar1 == 0x104) {
        ExceptionList = &pvStack_14;
        param_1[0x57] = 0x4d4a88d;
        cVar7 = FUN_00575b00();
        uVar13 = 0x3f;
        iVar10 = (-(uint)(cVar7 != '\0') & 0xf0e5b6dc) + 0x28f7092;
      }
      else {
        ExceptionList = &pvStack_14;
        if (uVar1 == 0x105) {
          ExceptionList = &pvStack_14;
          param_1[0x57] = 0x61e8f83c;
          cVar7 = FUN_00575b00();
          uVar13 = 0x3e;
          iVar10 = (-(uint)(cVar7 != '\0') & 0xac8ddefd) + 0x79165861;
        }
      }
    }
    else if (uVar1 == 0x307) {
      if (DAT_009b9eb0 == '\0') {
        ExceptionList = &pvStack_14;
        FUN_00516c90(0x13fd3296,param_1[4],0);
        FUN_007b7670();
      }
      else {
        ExceptionList = &pvStack_14;
        FUN_007a6d80();
        FUN_00516c90(0x8cb81f09,param_1[4],0);
      }
      bVar15 = DAT_009ba080 != 0;
      if (bVar15) {
        local_34 = *(int ***)(DAT_009ba080 + 0xc);
      }
      param_1[0x57] = 0x78980a6b;
      cVar7 = FUN_00575b00();
      uVar13 = 0x84;
      iVar10 = (-(uint)(cVar7 != '\0') & 0x89167a40) + 0x28f88bc;
      if (bVar15) goto LAB_007bd221;
    }
    else {
      ExceptionList = &pvStack_14;
      if (uVar1 == 0x402) {
        ExceptionList = &pvStack_14;
        param_1[0x57] = -0x26dd703a;
        iVar10 = -0x7eb7aac;
        bVar5 = 0;
        goto LAB_007bd30f;
      }
    }
  }
  else {
    ExceptionList = &pvStack_14;
    switch(uVar1) {
    case 0x404:
      ExceptionList = &pvStack_14;
      param_1[0x57] = 0x1c619fd8;
      iVar10 = -0x8cad8fa;
      bVar5 = 2;
      break;
    case 0x405:
      ExceptionList = &pvStack_14;
      param_1[0x57] = -0x63e476cb;
      iVar10 = 0x1223cc89;
      bVar5 = 3;
      break;
    case 0x406:
      ExceptionList = &pvStack_14;
      param_1[0x57] = 0x7956f7b0;
      iVar10 = -0x43bb4435;
      bVar5 = 4;
      break;
    case 0x407:
      ExceptionList = &pvStack_14;
      param_1[0x57] = 0x2d5bff0f;
      iVar10 = 0x694ca0ca;
      bVar5 = 5;
      break;
    case 0x408:
      ExceptionList = &pvStack_14;
      param_1[0x57] = 0x209a9158;
      iVar10 = 0x1b3a8dd3;
      bVar5 = 6;
      break;
    case 0x409:
      ExceptionList = &pvStack_14;
      param_1[0x57] = -0x32fa82df;
      iVar10 = 0x1ba508fc;
      bVar5 = 7;
      break;
    default:
      goto switchD_007bd274_default;
    }
LAB_007bd30f:
    uVar13 = 0x4d;
    bVar4 = true;
    if (DAT_009ba080 != 0) {
      local_34 = *(int ***)(DAT_009ba080 + 0xc);
      goto LAB_007bd221;
    }
  }
switchD_007bd274_default:
  local_34 = (int **)FUN_007aed20(uVar13);
LAB_007bd221:
  local_20 = (int ***)&local_20;
  local_c = 0;
  bVar16 = bVar5;
  if (!bVar4) {
    bVar16 = 0;
  }
  local_1c = local_20;
  FUN_007af4f0(uVar13,&local_20,bVar16);
  local_28 = 0;
  local_30 = 1;
  iVar11 = iVar10;
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar6 = local_20;
      pppiVar2 = (int ***)*local_20;
      pppiVar3 = (int ***)local_20[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      ppppiVar14 = (int ****)(local_20 + -1);
      uVar13 = FUN_007b5ef0(param_1[0x52],local_20[4]);
      iVar12 = iVar11;
      if (bVar4) {
        if (((*(byte *)((int)pppiVar6[2] + 5) & 0x1f) == bVar5) &&
           (cVar7 = FUN_00576b30(*pppiVar6[2]), cVar7 != '\0')) goto LAB_007bd44e;
        (*(code *)**ppppiVar14)(1);
      }
      else {
        uVar9 = FUN_00460bf0("CARBONFIBRE");
        iVar8 = FUN_00747a50(uVar9);
        iVar12 = iVar10;
        if (iVar8 != 0) {
          uVar17 = 0;
          uVar9 = FUN_00460bf0("CARBONFIBRE",0);
          iVar8 = FUN_00747ac0(uVar9,uVar17);
          if (iVar8 != 0) {
            if (param_1[0x52] == 0x104) {
              cVar7 = FUN_00575b00();
              iVar12 = (-(uint)(cVar7 != '\0') & 0xbc2f8810) + 0x68495926;
            }
            else {
              iVar12 = iVar11;
              if (param_1[0x52] == 0x105) {
                cVar7 = FUN_00575b00();
                iVar12 = (-(uint)(cVar7 != '\0') & 0xd109cc11) + 0xfc618215;
              }
            }
          }
        }
LAB_007bd44e:
        bVar16 = *(byte *)((int)pppiVar6[2] + 5);
        uVar9 = FUN_007a4e50(ppppiVar14,0);
        FUN_007b1740(ppppiVar14,iVar12,bVar16 >> 5,0,uVar13,uVar9);
        if (((int ***)local_34 != (int ***)0x0) && (pppiVar6[2] == local_34)) {
          local_28 = local_30;
        }
        local_30 = local_30 + 1;
      }
      iVar11 = iVar12;
    } while ((int ****)local_20 != &local_20);
  }
  iVar10 = DAT_009b9e84;
  if (DAT_009b9e84 == 0) {
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(local_28);
  }
  else {
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(iVar10);
    DAT_009b9e84 = 0;
  }
  (**(code **)(*param_1 + 0xc))();
  local_10 = (undefined1 *)0xffffffff;
  FUN_007b3f00();
  ExceptionList = local_18;
  return;
}

