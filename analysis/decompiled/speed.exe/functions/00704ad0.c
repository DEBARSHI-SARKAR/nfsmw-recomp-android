/* speed.exe 00704ad0 FUN_00704ad0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00704ad0(int *param_1)

{
  int iVar1;
  
  if (DAT_00993cc8 != 0) {
    iVar1 = param_1[1];
    if ((iVar1 == 2) || (iVar1 == 3)) {
      if (*(float *)(DAT_00993cc8 + 0x13c) < _DAT_00890dd0 !=
          (*(float *)(DAT_00993cc8 + 0x13c) == _DAT_00890dd0)) {
        (**(code **)(*param_1 + 0xc))(1);
        param_1[10] = 0x3f000000;
        return;
      }
      (**(code **)(*param_1 + 0xc))(0);
      param_1[10] = 0x3f4ccccd;
    }
    else if (iVar1 == 0) {
      param_1[10] = 0x3f800000;
      return;
    }
  }
  return;
}

