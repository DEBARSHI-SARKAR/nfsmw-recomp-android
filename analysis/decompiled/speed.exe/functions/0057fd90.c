/* speed.exe 0057fd90 FUN_0057fd90; analysis pseudocode, not buildable source.
 * calls 00634370 FUN_00634370
 * calls 00628cc0 FUN_00628cc0
 */

int FUN_0057fd90(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x735;
  if (param_1 == '\0') {
    iVar2 = 0x59f9;
  }
  FUN_00634370();
  iVar1 = FUN_00628cc0();
  return (iVar1 + 0x825) * 0x13 + iVar2;
}

