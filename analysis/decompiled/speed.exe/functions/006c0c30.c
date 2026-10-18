/* speed.exe 006c0c30 FUN_006c0c30; analysis pseudocode, not buildable source.
 * calls 00728ce0 FUN_00728ce0
 * calls 00728c90 FUN_00728c90
 * calls 00501480 FUN_00501480
 */

void FUN_006c0c30(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00728ce0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00728c90(param_1);
    piVar2 = (int *)(iVar1 + 0x28);
    iVar1 = 4;
    do {
      if (*piVar2 != 0) {
        FUN_00501480();
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

