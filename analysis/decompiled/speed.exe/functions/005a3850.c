/* speed.exe 005a3850 FUN_005a3850; analysis pseudocode, not buildable source.
 * calls 00599a50 FUN_00599a50
 */

void __thiscall FUN_005a3850(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  if (param_2 != 1) {
    if (param_2 == -1) {
      do {
        uVar3 = uVar4 - 1;
        if ((int)uVar3 < 0) {
          uVar4 = 6;
switchD_005a38cf_switchD:
          switch(uVar3) {
          case 0:
            uVar2 = 0;
            break;
          case 1:
            uVar2 = 1;
            break;
          case 2:
            goto switchD_005a38cf_caseD_2;
          case 3:
            uVar2 = 3;
            break;
          case 4:
            uVar2 = 4;
            break;
          case 5:
            uVar2 = 5;
            break;
          default:
            uVar2 = 6;
          }
        }
        else {
          uVar4 = uVar3;
          if (uVar3 < 7) goto switchD_005a38cf_switchD;
switchD_005a38cf_caseD_2:
          uVar2 = 2;
        }
        cVar1 = FUN_00599a50(uVar2);
      } while (cVar1 == '\0');
    }
    *(uint *)(param_1 + 0xc) = uVar4;
    return;
  }
  do {
    uVar3 = uVar4 + 1;
    if ((int)uVar3 < 7) {
      uVar4 = uVar3;
      if (uVar3 < 7) goto switchD_005a386c_switchD;
switchD_005a386c_caseD_2:
      uVar2 = 2;
    }
    else {
      uVar4 = 0;
switchD_005a386c_switchD:
      switch(uVar3) {
      default:
        uVar2 = 0;
        break;
      case 1:
        uVar2 = 1;
        break;
      case 2:
        goto switchD_005a386c_caseD_2;
      case 3:
        uVar2 = 3;
        break;
      case 4:
        uVar2 = 4;
        break;
      case 5:
        uVar2 = 5;
        break;
      case 6:
        uVar2 = 6;
      }
    }
    cVar1 = FUN_00599a50(uVar2);
    if (cVar1 != '\0') {
      *(uint *)(param_1 + 0xc) = uVar4;
      return;
    }
  } while( true );
}

