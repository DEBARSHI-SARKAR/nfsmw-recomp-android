/* speed.exe 007a9e10 FUN_007a9e10; analysis pseudocode, not buildable source.
 * calls 0075bad0 FUN_0075bad0
 * calls 00516b50 FUN_00516b50
 * calls 00591e90 FUN_00591e90
 */

void FUN_007a9e10(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00516b50("GarageMain.fng");
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00591e90("GarageMain.fng");
  }
  *(undefined4 *)(iVar2 + 0x54) = 1;
  if (*(char *)(*(int *)(iVar2 + 0x2c) + 0x620) != '\0') {
    FUN_0075bad0(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x624));
  }
  return;
}

