/* speed.exe 00693af0 FUN_00693af0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00693af0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 100) == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + -0xc) + 0x88))();
    if ((cVar1 != '\0') && (*(char *)(param_1 + -0x27) == '\0')) {
      return 0;
    }
  }
  return 1;
}

