/* speed.exe 00571fb0 FUN_00571fb0; analysis pseudocode, not buildable source.
 * calls 00650350 FUN_00650350
 * calls 00465a70 FUN_00465a70
 */

undefined4 __fastcall FUN_00571fb0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (*piVar1 == 0x30203) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  if (*piVar1 == 0x30210) {
    uVar2 = FUN_00465a70(piVar1[5],0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    FUN_00650350(piVar1 + 3,uVar2);
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 0;
}

