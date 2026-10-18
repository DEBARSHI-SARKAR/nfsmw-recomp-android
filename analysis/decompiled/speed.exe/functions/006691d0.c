/* speed.exe 006691d0 FUN_006691d0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_006691d0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int **)(param_1 + 0x5c) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))(), cVar1 == '\0')) {
    return 1;
  }
  if ((*(int **)(param_1 + 0x60) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 4))(), cVar1 == '\0')) {
    return 1;
  }
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) &&
     (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 4))(), piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00669212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 0x5c))();
    return uVar3;
  }
  return 0;
}

