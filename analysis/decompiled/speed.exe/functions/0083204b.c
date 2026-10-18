/* speed.exe 0083204b FUN_0083204b; analysis pseudocode, not buildable source.
 * calls 00831f67 FUN_00831f67
 * calls 00833fc8 FUN_00833fc8
 * calls 00834519 FUN_00834519
 * calls 00834169 FUN_00834169
 */

void FUN_0083204b(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((DAT_009c29ec == 0) && (DAT_009c29ec = 1, param_1 < 8)) &&
      (iVar1 = (&DAT_009c2ac0)[param_1], -1 < iVar1)) && (iVar1 < 0x10)) {
    FUN_00833fc8(param_1);
    iVar2 = FUN_00834519(iVar1);
    FUN_00831f67(iVar1);
    if (iVar2 != 0) {
      FUN_00834169(param_1);
    }
  }
  DAT_009c29ec = 0;
  return;
}

