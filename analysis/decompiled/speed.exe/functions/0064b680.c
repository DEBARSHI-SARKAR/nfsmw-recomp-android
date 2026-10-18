/* speed.exe 0064b680 FUN_0064b680; analysis pseudocode, not buildable source.
 * calls 00735620 FUN_00735620
 * calls 006e8d20 FUN_006e8d20
 */

uint FUN_0064b680(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00735620();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  iVar2 = FUN_006e8d20();
  return (uint)(iVar2 == 4);
}

