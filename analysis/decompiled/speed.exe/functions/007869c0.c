/* speed.exe 007869c0 FUN_007869c0; analysis pseudocode, not buildable source.
 * calls 00784ec0 FUN_00784ec0
 * calls 00781e10 FUN_00781e10
 */

void __thiscall FUN_007869c0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 != iVar1) {
    if ((param_1[1] != 0) && (iVar1 != 0)) {
      FUN_00781e10(iVar1);
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = param_2;
  }
  if ((param_1[1] == 0) && (*param_1 != 0)) {
    iVar1 = FUN_00784ec0(*param_1);
    param_1[1] = iVar1;
    param_1[2] = iVar1 + 0x40;
    param_1[3] = iVar1 + 0x50;
  }
  return;
}

