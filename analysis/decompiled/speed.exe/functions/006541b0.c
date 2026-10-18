/* speed.exe 006541b0 FUN_006541b0; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 00460c70 FUN_00460c70
 * calls 00460c50 FUN_00460c50
 */

void FUN_006541b0(undefined1 *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  uVar1 = param_2 >> 3;
  if (param_3 != 0) {
    iVar5 = 4;
    local_24 = 7;
    uVar2 = FUN_0056bb20();
    switch(uVar2) {
    case 1:
      if ((param_2 & 4) == 0) {
        pcVar3 = "--h--\'--";
      }
      else {
        pcVar3 = "00h00\'00";
      }
      break;
    default:
      iVar5 = 3;
      local_24 = 6;
      pcVar3 = "00:00:00";
      if ((param_2 & 4) == 0) {
        pcVar3 = "--:--:--";
      }
      break;
    case 6:
    case 7:
    case 0xd:
      iVar5 = 3;
      local_24 = 6;
      if ((param_2 & 4) == 0) {
        pcVar3 = "--.--.--";
      }
      else {
        pcVar3 = "00.00.00";
      }
    }
    FUN_00460c70(param_1,pcVar3);
    pcVar3 = param_1 + 1;
    iVar6 = 2;
    iVar7 = param_3;
    do {
      if ((iVar7 % 10 == 0) && (iVar7 < 10)) {
        *pcVar3 = ' ';
      }
      else {
        *pcVar3 = (char)(iVar7 % 10) + '0';
      }
      pcVar3 = pcVar3 + -1;
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 / 10;
    } while (iVar6 != 0);
    pcVar3 = param_1 + iVar5 + 1;
    iVar5 = 2;
    do {
      *pcVar3 = (char)(param_4 % 10) + '0';
      pcVar3 = pcVar3 + -1;
      iVar5 = iVar5 + -1;
      param_4 = param_4 / 10;
    } while (iVar5 != 0);
    pcVar3 = param_1 + local_24 + 1;
    iVar5 = 2;
    do {
      *pcVar3 = (char)(param_5 % 10) + '0';
      pcVar3 = pcVar3 + -1;
      iVar5 = iVar5 + -1;
      param_5 = param_5 / 10;
    } while (iVar5 != 0);
    if ((((param_2 & 1) != 0) || ((param_2 & 2) != 0)) && (9 < param_3)) {
      iVar5 = FUN_00460c50(param_1);
      FUN_00460c70(local_20,param_1);
      if ((uVar1 & 1) == 0) {
        local_20[iVar5 + -1] = 0;
      }
      FUN_00460c70(param_1 + 1,local_20);
    }
    goto LAB_00654669;
  }
  uVar2 = FUN_0056bb20();
  if (param_4 == 0) {
    if (param_5 == 0) {
      switch(uVar2) {
      case 1:
        if ((param_2 & 4) == 0) {
          puVar4 = &DAT_008a8b0c;
        }
        else {
          puVar4 = &DAT_008a8b14;
        }
        break;
      case 2:
        if ((param_2 & 4) == 0) {
          puVar4 = &DAT_008a8b1c;
        }
        else {
          puVar4 = &DAT_008a8b24;
        }
        break;
      default:
        puVar4 = &DAT_008a8af4;
        if ((param_2 & 4) == 0) {
          puVar4 = &DAT_008a8aec;
        }
        break;
      case 5:
      case 6:
      case 7:
      case 0xc:
      case 0xd:
        if ((param_2 & 4) == 0) {
          puVar4 = &DAT_008a8afc;
        }
        else {
          puVar4 = &DAT_008a8b04;
        }
      }
      FUN_00460c70(param_1,puVar4);
      pcVar3 = param_1 + 3;
      iVar5 = 2;
      do {
        *pcVar3 = (char)(param_6 % 10) + '0';
        pcVar3 = pcVar3 + -1;
        iVar5 = iVar5 + -1;
        param_6 = param_6 / 10;
      } while (iVar5 != 0);
      if (((param_2 & 1) != 0) || ((param_2 & 2) != 0)) {
        iVar5 = FUN_00460c50(param_1);
        FUN_00460c70(local_20,param_1);
        if ((uVar1 & 1) == 0) {
          local_20[iVar5 + -1] = 0;
        }
        goto LAB_0065464c;
      }
    }
    else {
      switch(uVar2) {
      case 1:
        if ((param_2 & 4) == 0) {
          pcVar3 = "--\"--";
        }
        else {
          pcVar3 = "00\"00";
        }
        break;
      case 2:
        if ((param_2 & 4) == 0) {
          pcVar3 = "--:--";
        }
        else {
          pcVar3 = "00:00";
        }
        break;
      default:
        pcVar3 = "00.00";
        if ((param_2 & 4) == 0) {
          pcVar3 = "--.--";
        }
        break;
      case 5:
      case 6:
      case 7:
      case 0xc:
      case 0xd:
        if ((param_2 & 4) == 0) {
          pcVar3 = "--,--";
        }
        else {
          pcVar3 = "00,00";
        }
      }
      FUN_00460c70(param_1,pcVar3);
      pcVar3 = param_1 + 1;
      iVar7 = 2;
      iVar5 = param_5;
      do {
        if ((iVar5 % 10 == 0) && (iVar5 < 10)) {
          *pcVar3 = ' ';
        }
        else {
          *pcVar3 = (char)(iVar5 % 10) + '0';
        }
        pcVar3 = pcVar3 + -1;
        iVar7 = iVar7 + -1;
        iVar5 = iVar5 / 10;
      } while (iVar7 != 0);
      pcVar3 = param_1 + 4;
      iVar5 = 2;
      do {
        *pcVar3 = (char)(param_6 % 10) + '0';
        pcVar3 = pcVar3 + -1;
        iVar5 = iVar5 + -1;
        param_6 = param_6 / 10;
      } while (iVar5 != 0);
      if ((((param_2 & 1) != 0) || ((param_2 & 2) != 0)) && (9 < param_5)) {
        iVar5 = FUN_00460c50(param_1);
        FUN_00460c70(local_20,param_1);
        if ((uVar1 & 1) == 0) {
          local_20[iVar5 + -1] = 0;
        }
LAB_0065464c:
        FUN_00460c70(param_1 + 1,local_20);
      }
    }
  }
  else {
    switch(uVar2) {
    case 1:
      if ((param_2 & 4) == 0) {
        pcVar3 = "--\'--\"--";
      }
      else {
        pcVar3 = "00\'00\"00";
      }
      break;
    case 2:
      if ((param_2 & 4) == 0) {
        pcVar3 = "--:--:--";
      }
      else {
        pcVar3 = "00:00:00";
      }
      break;
    default:
      pcVar3 = "00:00.00";
      if ((param_2 & 4) == 0) {
        pcVar3 = "--:--.--";
      }
      break;
    case 5:
    case 0xc:
      if ((param_2 & 4) == 0) {
        pcVar3 = "--:--,--";
      }
      else {
        pcVar3 = "00:00,00";
      }
      break;
    case 6:
    case 7:
    case 0xd:
      if ((param_2 & 4) == 0) {
        pcVar3 = "--.--,--";
      }
      else {
        pcVar3 = "00.00,00";
      }
    }
    FUN_00460c70(param_1,pcVar3);
    pcVar3 = param_1 + 1;
    iVar7 = 2;
    iVar5 = param_4;
    do {
      if ((iVar5 % 10 == 0) && (iVar5 < 10)) {
        *pcVar3 = ' ';
      }
      else {
        *pcVar3 = (char)(iVar5 % 10) + '0';
      }
      pcVar3 = pcVar3 + -1;
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 / 10;
    } while (iVar7 != 0);
    pcVar3 = param_1 + 4;
    iVar5 = 2;
    do {
      *pcVar3 = (char)(param_5 % 10) + '0';
      pcVar3 = pcVar3 + -1;
      iVar5 = iVar5 + -1;
      param_5 = param_5 / 10;
    } while (iVar5 != 0);
    pcVar3 = param_1 + 7;
    iVar5 = 2;
    do {
      *pcVar3 = (char)(param_6 % 10) + '0';
      pcVar3 = pcVar3 + -1;
      iVar5 = iVar5 + -1;
      param_6 = param_6 / 10;
    } while (iVar5 != 0);
    if ((((param_2 & 1) != 0) || ((param_2 & 2) != 0)) && (9 < param_4)) {
      iVar5 = FUN_00460c50(param_1);
      FUN_00460c70(local_20,param_1);
      if ((uVar1 & 1) == 0) {
        local_20[iVar5 + -1] = 0;
      }
      goto LAB_0065464c;
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar5 = FUN_00460c50(param_1);
    param_1[iVar5 + -3] = 0;
  }
LAB_00654669:
  if ((param_2 & 1) != 0) {
    *param_1 = 0x2d;
    return;
  }
  if ((param_2 & 2) != 0) {
    *param_1 = 0x2b;
  }
  return;
}

