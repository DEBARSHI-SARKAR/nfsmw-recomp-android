/* speed.exe 00717dc0 FUN_00717dc0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00701510 FUN_00701510
 * calls 0045da70 FUN_0045da70
 * calls 00715b90 FUN_00715b90
 * calls 004cb460 FUN_004cb460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00717dc0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  int iStack_14;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00993cc8;
  if (DAT_00993cc8 == 0) {
    return;
  }
  fVar4 = (float10)FUN_00715b90();
  if (fVar4 < (float10)_DAT_008b0e5c) {
switchD_00717e04_caseD_8:
    local_10 = 0x10;
    goto switchD_00717e04_caseD_3;
  }
  if (*(int *)(iVar1 + 0x1e8) < 1) {
    cVar2 = FUN_00701510();
    if (cVar2 == '\0') {
      fVar4 = (float10)FUN_0045da70(0x3f800000);
      if ((float10)_DAT_008b0e70 < fVar4) {
        if (0 < *(int *)(iVar1 + 0x14c)) goto switchD_00717e04_caseD_10;
        if (1000 < *(int *)(iVar1 + 0x150)) goto switchD_00717e04_caseD_4;
      }
      iVar3 = FUN_004cb460(0x9a);
      if ((iVar3 < 1) && (iVar3 = FUN_004cb460(0x3a), iVar3 < 1)) {
        iVar3 = FUN_004cb460(0xb2);
        local_10 = 1;
        if (iVar3 < 1) goto switchD_00717e04_caseD_3;
      }
    }
switchD_00717e04_caseD_40:
    local_10 = 2;
  }
  else {
    switch(*(int *)(iVar1 + 0x1e8)) {
    case 1:
    case 2:
      cVar2 = FUN_00701510();
      local_10 = (cVar2 != '\0') + 1;
      break;
    case 4:
    case 0x80:
switchD_00717e04_caseD_4:
      local_10 = 8;
      break;
    case 8:
      goto switchD_00717e04_caseD_8;
    case 0x10:
    case 0x20:
switchD_00717e04_caseD_10:
      local_10 = 4;
      break;
    case 0x40:
      goto switchD_00717e04_caseD_40;
    }
  }
switchD_00717e04_caseD_3:
  local_c = ((*(uint *)(iVar1 + 0x54) >> 0xb & 1) != 0) + 1;
  uStack_8 = (**(code **)(*param_1 + 0x34))();
  uStack_4 = (**(code **)(*param_1 + 0x38))();
  iStack_14 = param_1[3];
  FUN_00713b20(0x14,&iStack_14,&PTR_s_Setup_AttmptVehStp_00901bec,&DAT_0099256c,param_1);
  return;
}

