/* speed.exe 005bdda0 FUN_005bdda0; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void FUN_005bdda0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\0') {
    FUN_005b5840();
    return;
  }
  if ((cVar1 != '\x01') && (cVar1 != '\x03')) {
    return;
  }
  FUN_005b9d10();
  return;
}

