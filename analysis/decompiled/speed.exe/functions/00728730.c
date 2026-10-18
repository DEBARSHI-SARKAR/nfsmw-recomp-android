/* speed.exe 00728730 FUN_00728730; analysis pseudocode, not buildable source.
 * calls 006626b0 FUN_006626b0
 * calls 00727c40 FUN_00727c40
 * calls 00727e60 FUN_00727e60
 * calls 007239b0 FUN_007239b0
 */

void __fastcall FUN_00728730(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[8];
  while (iVar2 != 0) {
    FUN_006626b0();
    iVar2 = param_1[8];
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*param_1 + 0xc + iVar3);
      if ((iVar1 == 3) || (iVar1 == 4)) {
        FUN_00727e60(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  FUN_007239b0();
  FUN_00727c40();
  return;
}

