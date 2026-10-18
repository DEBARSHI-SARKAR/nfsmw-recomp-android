/* speed.exe 008355b2 FUN_008355b2; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 */

undefined4 * FUN_008355b2(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = &DAT_009c3598;
  while( true ) {
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) break;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
    if (0x1f < uVar4) {
      puVar2 = _malloc(0x1c);
      if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[6] = 0;
      return puVar2;
    }
  }
  return &DAT_009c3218 + uVar4 * 7;
}

