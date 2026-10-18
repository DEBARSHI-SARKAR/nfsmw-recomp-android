/* speed.exe 00730bf0 FUN_00730bf0; analysis pseudocode, not buildable source.
 * calls 00464050 FUN_00464050
 * calls 0072c370 FUN_0072c370
 * calls 00727e60 FUN_00727e60
 * calls 00730390 FUN_00730390
 * calls 00464080 FUN_00464080
 * calls 0072c410 FUN_0072c410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_00730bf0(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00730390();
  iVar1 = FUN_00464050(7);
  while (iVar1 < param_2) {
    iVar1 = param_1[1];
    iVar3 = 0;
    if (iVar1 < 1) {
LAB_00730c53:
      if ((param_3 == '\0') || (iVar1 = FUN_0072c410(), iVar1 == 0)) break;
      FUN_0072c370(iVar1);
    }
    else {
      iVar2 = *param_1;
      do {
        if (((*(int *)(iVar2 + 0xc) == 3) && (*(char *)(iVar2 + 0xb) == '\0')) &&
           ((iVar3 == 0 || (*(int *)(iVar2 + 0x38) < *(int *)(iVar3 + 0x38))))) {
          iVar3 = iVar2;
        }
        iVar2 = iVar2 + 0x5c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((iVar3 == 0) || (FUN_00727e60(iVar3), *(int *)(iVar3 + 0x54) == 0)) goto LAB_00730c53;
    }
    iVar1 = FUN_00464050(7);
  }
  _DAT_00902140 = 0xffffffff;
  iVar1 = FUN_00464080(7);
  return param_2 <= iVar1;
}

