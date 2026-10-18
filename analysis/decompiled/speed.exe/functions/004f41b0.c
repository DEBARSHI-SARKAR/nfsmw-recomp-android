/* speed.exe 004f41b0 FUN_004f41b0; analysis pseudocode, not buildable source.
 * calls 004e9960 FUN_004e9960
 * calls 004f16f0 FUN_004f16f0
 * calls 004e90f0 FUN_004e90f0
 * calls 004e24b0 FUN_004e24b0
 * calls 004e3520 FUN_004e3520
 * calls 004e9ab0 FUN_004e9ab0
 * calls 004e33b0 FUN_004e33b0
 * calls 004e9420 FUN_004e9420
 */

void __fastcall FUN_004f41b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  param_1[0xe] = param_1[0x15];
  FUN_004e24b0();
  FUN_004e90f0();
  iVar3 = 0;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        FUN_004f16f0(iVar3,iVar1,iVar4);
        iVar1 = *piVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  FUN_004e9420();
  local_8 = 0xd;
  do {
    param_1 = param_1 + 1;
    iVar3 = 0;
    if (0 < *param_1) {
      do {
        FUN_004e33b0();
        FUN_004e3520();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_004e9ab0();
  FUN_004e9960();
  return;
}

