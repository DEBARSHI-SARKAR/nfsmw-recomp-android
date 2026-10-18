/* speed.exe 00728790 FUN_00728790; analysis pseudocode, not buildable source.
 * calls 006626b0 FUN_006626b0
 * calls 00727c40 FUN_00727c40
 * calls 00727e60 FUN_00727e60
 */

void __thiscall FUN_00728790(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[8];
  while (iVar1 != 0) {
    FUN_006626b0();
    iVar1 = param_1[8];
  }
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar2 = *param_1;
    while (*(short *)(iVar2 + 8) != param_2) {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x5c;
      if (param_1[1] <= iVar1) {
        FUN_00727c40();
        return;
      }
    }
    FUN_00727e60(iVar2);
  }
  FUN_00727c40();
  return;
}

