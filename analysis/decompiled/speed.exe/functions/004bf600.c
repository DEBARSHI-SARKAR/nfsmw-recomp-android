/* speed.exe 004bf600 FUN_004bf600; analysis pseudocode, not buildable source.
 * calls 004f4a30 FUN_004f4a30
 * calls 004b6650 FUN_004b6650
 */

void __fastcall FUN_004bf600(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086bb28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896e44;
  local_4 = 0;
  piVar3 = &DAT_009121d8;
  do {
    if (*piVar3 != 0) {
      FUN_004b6650(*piVar3);
      *piVar3 = 0;
      piVar1 = param_1 + 10;
      iVar2 = 4;
      do {
        if (*piVar1 != 0) {
          *piVar1 = 0;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x9121e8);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00896af0;
  FUN_004f4a30();
  ExceptionList = local_c;
  return;
}

