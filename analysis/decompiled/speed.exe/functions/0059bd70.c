/* speed.exe 0059bd70 FUN_0059bd70; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00593410 FUN_00593410
 * calls 00593250 FUN_00593250
 * calls 00510680 FUN_00510680
 */

void __thiscall FUN_0059bd70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0045d3a0(0);
  if (iVar1 == 0) {
    return;
  }
  local_8 = param_1[6];
  if (local_8 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_8 + 4;
  }
  iVar1 = FUN_0045d3a0(iVar1);
  local_c = param_1[7];
  iVar1 = iVar1 + -1;
  if (param_2 == -1) {
    iVar5 = param_1[8];
    iVar1 = iVar1 - iVar5;
    if ((char)param_1[0x25] == '\0') {
      iVar2 = (param_1[9] + -1) * iVar5;
      if ((iVar2 <= iVar1) && (iVar1 < param_1[9] * iVar5)) {
        iVar1 = iVar1 - iVar2;
      }
LAB_0059bde9:
      local_c = local_c - iVar5;
    }
    else if (iVar1 < local_c) goto LAB_0059bde9;
    if (-1 < iVar1) {
      iVar5 = 0;
      while( true ) {
        if (param_1[6] == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = param_1[6] + 4;
        }
        iVar2 = FUN_0045d3a0(iVar2);
        if (iVar2 + (-1 - iVar1) <= iVar5) break;
        if (*(int *)(local_8 + 8) == 0) {
          local_8 = 0;
          iVar5 = iVar5 + 1;
        }
        else {
          local_8 = *(int *)(local_8 + 8) + -4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  else if (param_2 == 1) {
    iVar5 = param_1[8];
    iVar1 = iVar1 + iVar5;
    if ((char)param_1[0x25] == '\0') {
      if ((iVar5 <= iVar1) && (iVar1 < iVar5 * 2)) {
        iVar1 = iVar1 + (param_1[9] + -1) * iVar5;
      }
LAB_0059bed6:
      local_c = local_c + iVar5;
    }
    else {
      iVar5 = FUN_0045d3a0(0);
      if (iVar5 <= iVar1) {
        iVar5 = param_1[9];
        iVar2 = param_1[8];
        iVar3 = FUN_0045d3a0(0);
        iVar4 = FUN_00510680();
        if ((iVar4 / iVar2 + 1) * iVar5 < ((iVar3 + -1) / iVar2 + 1) * iVar5) {
          iVar1 = FUN_0045d3a0(0);
          iVar1 = iVar1 + -1;
        }
      }
      iVar5 = FUN_0045d3a0(0);
      if (iVar5 + local_c <= iVar1) {
        iVar5 = param_1[8];
        goto LAB_0059bed6;
      }
    }
    iVar5 = FUN_0045d3a0(0);
    if (iVar1 < iVar5) {
      param_2 = 0;
      while( true ) {
        if (param_1[6] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[6] + 4;
        }
        iVar5 = FUN_0045d3a0(iVar5);
        if ((iVar1 - iVar5) + 1 <= param_2) break;
        if (*(int *)(local_8 + 4) == 0) {
          param_2 = param_2 + 1;
          local_8 = 0;
        }
        else {
          local_8 = *(int *)(local_8 + 4) + -4;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  if (local_8 == param_1[6]) goto LAB_0059bf94;
  iVar5 = param_1[8];
  if (iVar1 < local_c) {
    iVar1 = iVar1 / iVar5;
LAB_0059bf79:
    local_c = iVar1 * iVar5;
  }
  else if (param_1[9] * iVar5 + local_c < iVar1) {
    iVar1 = (iVar1 / iVar5 - param_1[9]) + 1;
    goto LAB_0059bf79;
  }
  FUN_00593250(local_8,local_c);
  FUN_00593410();
  *(undefined1 *)(param_1 + 1) = 1;
LAB_0059bf94:
  (**(code **)(*param_1 + 8))();
  return;
}

