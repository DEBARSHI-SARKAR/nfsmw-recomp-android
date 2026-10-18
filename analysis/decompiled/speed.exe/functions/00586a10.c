/* speed.exe 00586a10 FUN_00586a10; analysis pseudocode, not buildable source.
 * calls 005867d0 FUN_005867d0
 * calls 00515d70 FUN_00515d70
 * calls 00586830 FUN_00586830
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_00586a10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x28);
  local_8 = iVar3;
  if (*(int *)(param_1 + 8) == 0) goto LAB_00586a36;
  local_c = *(int *)(param_1 + 8) + -4;
  do {
    iVar5 = 0;
    if (param_1 == -8) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 4;
    }
    if (local_c == iVar1) {
      return;
    }
    if (iVar3 == 0) {
LAB_00586b4b:
      FUN_00586830();
    }
    else {
      if (param_1 == -0x10) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0xc;
      }
      if (iVar3 == iVar1) goto LAB_00586b4b;
      if (*(int *)(iVar3 + 0xc) != 0) {
        iVar5 = *(int *)(iVar3 + 0xc) + -4;
      }
      FUN_005867d0();
      iVar1 = *(int *)(local_c + 0xc);
      while( true ) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = iVar1 + -4;
        }
        if (local_c == -0xc) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_c + 8;
        }
        if (iVar1 == iVar4) break;
        if (*(int *)(iVar5 + 0x8c) == 0) {
          FUN_00515d70(*(undefined4 *)(iVar1 + 0xc),&DAT_008941f8,iVar5 + 0xc);
        }
        else {
          FUN_00515c00(*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar5 + 0x8c));
        }
        if (*(int *)(iVar5 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4) + -4;
        }
        if (iVar3 == -0xc) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar3 + 8;
        }
        if (iVar5 == iVar4) {
          if (*(int *)(iVar1 + 4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar1 + 4) + -4;
          }
          if (local_c == -0xc) {
            iVar2 = 0;
          }
          else {
            iVar2 = local_c + 8;
          }
          if (iVar4 != iVar2) break;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (*(int *)(local_8 + 4) == 0) {
        local_8 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_8 + 4) + -4;
        local_8 = iVar3;
      }
    }
    if (*(int *)(local_c + 4) == 0) {
LAB_00586a36:
      local_c = 0;
    }
    else {
      local_c = *(int *)(local_c + 4) + -4;
    }
  } while( true );
}

