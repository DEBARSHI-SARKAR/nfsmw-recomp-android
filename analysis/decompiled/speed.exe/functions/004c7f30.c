/* speed.exe 004c7f30 FUN_004c7f30; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 007ec59c FUN_007ec59c
 * calls 007ececc FUN_007ececc
 * calls 007ec1b2 FUN_007ec1b2
 * calls 004c48c0 FUN_004c48c0
 */

void FUN_004c7f30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) {
    FUN_004c48c0(param_1);
    iVar2 = piVar1[0x11];
    while (iVar2 == 1) {
      FUN_007ec59c();
      FUN_007ec298(0);
      iVar2 = piVar1[0x11];
    }
    *piVar1 = 0;
    FUN_007ec1b2();
    if (piVar1[0x5f] != 0) {
      FUN_007ececc(piVar1[0x5f],100);
    }
  }
  return;
}

