/* speed.exe 004121d0 FUN_004121d0; analysis pseudocode, not buildable source.
 * calls 00411fe0 FUN_00411fe0
 */

char __fastcall FUN_004121d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    return '\x01';
  }
  cVar1 = FUN_00411fe0();
  return '\x01' - (cVar1 != '\0');
}

