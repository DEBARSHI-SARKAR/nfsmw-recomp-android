/* speed.exe 005ad440 FUN_005ad440; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_005ad440(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  while (cVar1 != '\0') {
    param_1 = *(int *)(param_1 + 8);
    cVar1 = *(char *)(param_1 + 4);
  }
  return *(undefined4 *)(param_1 + 8);
}

