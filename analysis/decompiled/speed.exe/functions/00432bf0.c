/* speed.exe 00432bf0 FUN_00432bf0; analysis pseudocode, not buildable source.
 * calls 0042dd40 FUN_0042dd40
 * calls 00426060 FUN_00426060
 * calls 0042df10 FUN_0042df10
 * calls 00430650 FUN_00430650
 * calls 00432bf0 FUN_00432bf0
 */

void FUN_00432bf0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00432c87:
      if (1 < iVar1) {
        FUN_0042df10(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00426060(param_1,param_2,param_4,0,0);
        }
        FUN_00430650(param_1,param_2,param_4);
        return;
      }
      goto LAB_00432c87;
    }
    FUN_0042dd40(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_00432bf0(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00432bf0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

