/* speed.exe 007b2bd0 FUN_007b2bd0; analysis pseudocode, not buildable source.
 * calls 007a1db0 FUN_007a1db0
 * calls 007a1af0 FUN_007a1af0
 * calls 007a1b10 FUN_007a1b10
 * calls 007a1b50 FUN_007a1b50
 * calls 0045a430 FUN_0045a430
 * calls 007a1c10 FUN_007a1c10
 * calls 006530a0 FUN_006530a0
 * calls 007a1cf0 FUN_007a1cf0
 * calls 007a1dd0 FUN_007a1dd0
 * calls 007a1df0 FUN_007a1df0
 * calls 007a1b30 FUN_007a1b30
 * calls 007a1e30 FUN_007a1e30
 * calls 007a1e50 FUN_007a1e50
 * calls 007a1d50 FUN_007a1d50
 * calls 007a1c90 FUN_007a1c90
 * calls 007a1d90 FUN_007a1d90
 * calls 007a1c50 FUN_007a1c50
 * calls 007a1cb0 FUN_007a1cb0
 * calls 007a1e10 FUN_007a1e10
 * calls 007a1d10 FUN_007a1d10
 * calls 0051e1a0 FUN_0051e1a0
 * calls 007a1c30 FUN_007a1c30
 * calls 007a1bf0 FUN_007a1bf0
 * calls 007a1d70 FUN_007a1d70
 * calls 005816b0 FUN_005816b0
 * calls 007a1cd0 FUN_007a1cd0
 * calls 007a1c70 FUN_007a1c70
 * calls 007a1d30 FUN_007a1d30
 */

undefined4 FUN_007b2bd0(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883108;
  local_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_c;
  FUN_0051e1a0(*(undefined4 *)(DAT_009b9ec4 + 4),0,0);
  local_4 = 0;
  switch(param_1) {
  case 0:
    switch(param_2) {
    case 0:
switchD_007b2cf0_caseD_0:
      uVar4 = 0xad6a0504;
      goto switchD_007b2c12_default;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1d70(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1d90(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1db0(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1dd0(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  case 1:
    switch(param_2) {
    case 0:
      uVar4 = 0xa1a5e9e5;
      goto switchD_007b2c12_default;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1af0(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1b10(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1b30(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1b50(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  case 2:
    switch(param_2) {
    case 0:
      goto switchD_007b2cf0_caseD_0;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1cf0(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1d10(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1d30(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1d50(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  case 3:
    switch(param_2) {
    case 0:
switchD_007b2ed0_caseD_0:
      uVar4 = 0x98ed935e;
      goto switchD_007b2c12_default;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1df0(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1e10(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1e30(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1e50(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  case 4:
    iVar2 = FUN_005816b0();
    if (((iVar2 == 0x34) && (cVar1 = FUN_006530a0(4), cVar1 != '\0')) && (param_2 == 4)) {
      if (param_3 == 2) {
        local_4 = 0xffffffff;
        FUN_0045a430();
        ExceptionList = local_c;
        return 0xb95d4df;
      }
    }
    else if (4 < param_2) goto switchD_007b2c12_default;
                    /* WARNING: Could not recover jumptable at 0x007b2e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&PTR_LAB_007b2fac)[param_2])();
    return uVar4;
  case 5:
    switch(param_2) {
    case 0:
      uVar4 = 0x9e8f71ad;
      goto switchD_007b2c12_default;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1bf0(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1c10(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1c30(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1c50(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  case 6:
    switch(param_2) {
    case 0:
      goto switchD_007b2ed0_caseD_0;
    case 1:
      puVar3 = (undefined4 *)FUN_007a1c70(param_3);
      break;
    case 2:
      puVar3 = (undefined4 *)FUN_007a1c90(param_3);
      break;
    case 3:
      puVar3 = (undefined4 *)FUN_007a1cb0(param_3);
      break;
    case 4:
      puVar3 = (undefined4 *)FUN_007a1cd0(param_3);
      break;
    default:
      goto switchD_007b2c12_default;
    }
    break;
  default:
    goto switchD_007b2c12_default;
  }
  uVar4 = *puVar3;
switchD_007b2c12_default:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar4;
}

