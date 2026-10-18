/* speed.exe 005fb420 FUN_005fb420; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

char * __thiscall FUN_005fb420(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar2 = (undefined4 *)FUN_00454810(0xe244f26b,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  pcVar3 = (char *)*puVar2;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 == '*')) {
    pcVar3 = pcVar3 + 1;
  }
  return pcVar3;
}

