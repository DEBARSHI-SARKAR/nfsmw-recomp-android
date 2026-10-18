/* speed.exe 007e94f0 FUN_007e94f0; analysis pseudocode, not buildable source.
 * calls 007e94c0 FUN_007e94c0
 * calls 007e94f0 FUN_007e94f0
 */

void FUN_007e94f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1[1] != 0) && (iVar1 = param_1[1] + (int)param_1, iVar1 != 0)) {
    FUN_007e94f0(iVar1);
  }
  if ((*param_1 & 0x800) != 0) {
    uVar2 = param_1[2];
    if (uVar2 != 0) {
      uVar2 = uVar2 + (int)param_1;
    }
    FUN_007e94c0(uVar2);
  }
  if ((*param_1 & 0x400) != 0) {
    FUN_007e94c0(param_1);
  }
  return;
}

