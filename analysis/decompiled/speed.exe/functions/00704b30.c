/* speed.exe 00704b30 FUN_00704b30; analysis pseudocode, not buildable source.
 * calls 00700db0 FUN_00700db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00704b30(int *param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 local_4;
  
  iVar1 = DAT_00993cc8;
  if (_DAT_008b0e5c <= (float)param_1[9]) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[3];
    param_1[3] = iVar2 + 1;
  }
  param_1[3] = iVar2;
  if (*(int *)(iVar1 + 0x1d4) == 2) {
    (**(code **)(*param_1 + 0xc))(999);
    return;
  }
  local_4 = 0x3f800000;
  if ((float)param_1[0xd] <= _DAT_008b0e78) {
    local_4 = 0;
  }
  FUN_00700db0(local_4);
  if (*(int *)(extraout_EDX + 0x1d4) == 0) {
    if (*(float *)(extraout_EDX + 0x13c) < _DAT_00890dd0 !=
        (*(float *)(extraout_EDX + 0x13c) == _DAT_00890dd0)) {
      (**(code **)(*param_1 + 0xc))(1);
      return;
    }
    (**(code **)(*param_1 + 0xc))(0);
    param_1[10] = 0x3f4ccccd;
    return;
  }
  if ((float)param_1[0x11] * _DAT_00899d6c < (float)param_1[0xd]) {
    (**(code **)(*param_1 + 0xc))(2);
  }
  return;
}

