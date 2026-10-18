/* speed.exe 0044d770 FUN_0044d770; analysis pseudocode, not buildable source.
 * calls 0045da70 FUN_0045da70
 * calls 007c4b80 FUN_007c4b80
 * calls 00460ca0 FUN_00460ca0
 * calls 0046e710 FUN_0046e710
 * calls 00460bf0 FUN_00460bf0
 * calls 005d59f0 FUN_005d59f0
 */

void FUN_0044d770(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  if (((DAT_0092cd84 != 0) && (*DAT_0092cd7c != 0)) &&
     (piVar1 = (int *)FUN_005d59f0(&LAB_004037e0), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))();
    uVar3 = FUN_007c4b80();
  }
  FUN_0045da70(0x3f7d70a4);
  uVar2 = FUN_007c4b80();
  switch(uVar3) {
  case 0:
  case 1:
    switch(uVar2) {
    case 0:
      pcVar4 = "ArrestM01";
      break;
    case 1:
      pcVar4 = "ArrestM16";
      break;
    case 2:
      pcVar4 = "ArrestF02";
      break;
    case 3:
      pcVar4 = "ArrestF18";
      break;
    case 4:
      pcVar4 = "ArrestM01b";
      break;
    case 5:
      pcVar4 = "ArrestM16b";
      break;
    case 6:
      pcVar4 = "ArrestF02b";
      break;
    default:
      pcVar4 = "ArrestF18b";
    }
    goto LAB_0044d967;
  case 2:
    switch(uVar2) {
    case 0:
    case 1:
      pcVar4 = "ArrestM04";
      break;
    case 2:
    case 3:
      pcVar4 = "ArrestF23";
      break;
    case 4:
    case 5:
      pcVar4 = "ArrestM04b";
      break;
    default:
      pcVar4 = "ArrestF23b";
    }
    FUN_00460ca0(param_2,pcVar4,param_3);
    break;
  case 3:
    break;
  default:
    goto switchD_0044d7d4_default;
  }
  switch(uVar2) {
  case 0:
    FUN_00460ca0(param_2,"ArrestM07",param_3);
    break;
  case 1:
    FUN_00460ca0(param_2,"ArrestM14",param_3);
    break;
  case 2:
  case 3:
    pcVar4 = "ArrestF14";
    goto LAB_0044d914;
  case 4:
    FUN_00460ca0(param_2,"ArrestM07b",param_3);
    break;
  case 5:
    FUN_00460ca0(param_2,"ArrestM14b",param_3);
    break;
  default:
    pcVar4 = "ArrestF14b";
LAB_0044d914:
    FUN_00460ca0(param_2,pcVar4,param_3);
switchD_0044d7d4_default:
    if (6 < uVar2) {
      pcVar4 = "ArrestF07b";
      goto LAB_0044d967;
    }
  }
  switch((&switchD_0044d922::switchdataD_0044d9f0)[uVar2]) {
  case (undefined *)0x44d929:
    pcVar4 = "ArrestM06";
    break;
  case (undefined *)0x44d931:
    pcVar4 = "ArrestM19";
    break;
  case (undefined *)0x44d939:
    pcVar4 = "ArrestF06";
    break;
  case (undefined *)0x44d941:
    pcVar4 = "ArrestF07";
    break;
  case (undefined *)0x44d949:
    pcVar4 = "ArrestM06b";
    break;
  case (undefined *)0x44d951:
    pcVar4 = "ArrestM19b";
    break;
  case (undefined *)0x44d959:
    pcVar4 = "ArrestF06b";
  }
LAB_0044d967:
  FUN_00460ca0(param_2,pcVar4,param_3);
  uVar3 = FUN_00460bf0(param_2);
  FUN_0046e710(uVar3);
  *param_1 = 0;
  return;
}

