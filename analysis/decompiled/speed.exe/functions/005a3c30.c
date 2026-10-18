/* speed.exe 005a3c30 FUN_005a3c30; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00454640 FUN_00454640
 * calls 005999f0 FUN_005999f0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 007c4b80 FUN_007c4b80
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00511330 FUN_00511330
 */

int __thiscall FUN_005a3c30(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873688;
  local_c = ExceptionList;
  switch(param_2) {
  case 0:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("pursuit_length_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("pursuit_length");
    }
    break;
  case 1:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_involved_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_involved");
    }
    break;
  case 2:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_damaged_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_damaged");
    }
    break;
  case 3:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_destroyed_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cops_destroyed");
    }
    break;
  case 4:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("tire_spikes_dodged_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("tire_spikes_dodged");
    }
    break;
  case 5:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("roadblocks_dodged_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("roadblocks_dodged");
    }
    break;
  case 6:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("helis_involved_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("helis_involved");
    }
    break;
  case 7:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cost_to_state_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("cost_to_state");
    }
    break;
  case 8:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("total_infractions_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("total_infractions");
    }
    break;
  case 9:
    if (param_3 == '\0') {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("bounty_in_pursuit");
    }
    else {
      ExceptionList = &local_c;
      uVar1 = FUN_00454640("bounty");
    }
    break;
  default:
    uVar1 = 0;
    ExceptionList = &local_c;
  }
  FUN_0051e1a0(uVar1,0,0);
  local_4 = 0;
  iVar4 = 0x10;
  if ((local_1c != 0) && (iVar2 = FUN_00511330(), iVar2 == 0xf)) {
    if (param_3 == '\0') {
      iVar2 = *(int *)(param_1 + 0xb68 + param_2 * 8);
    }
    else {
      iVar2 = FUN_005999f0(param_2);
    }
    iVar5 = 0;
    iVar3 = FUN_00511330();
    if (0 < iVar3) {
      do {
        iVar3 = FUN_00454810(0xf9a7d5f7,iVar5);
        if (param_2 == 0) {
          if (iVar3 == 0) {
            FUN_006269b0(4);
          }
        }
        else if (iVar3 == 0) {
          FUN_006269b0(4);
        }
        iVar3 = FUN_007c4b80();
        if (iVar3 <= iVar2) {
          iVar4 = iVar5 + 1;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_00511330();
      } while (iVar5 < iVar3);
    }
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar4;
}

