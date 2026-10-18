/* speed.exe 0066a020 FUN_0066a020; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0066a020(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x110) == '\0') && (*(int **)(param_1 + 0x114) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x34))();
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x48))(), cVar1 == '\0')) {
      return 1;
    }
    if ((*(int **)(param_1 + 0x114) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x1c))(), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}

