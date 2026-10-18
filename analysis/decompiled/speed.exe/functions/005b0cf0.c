/* speed.exe 005b0cf0 FUN_005b0cf0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005b0cf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x514c);
  do {
    if (*piVar2 == param_2) {
      return *(undefined4 *)(param_1 + 0x5150 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x20);
  return 0;
}

