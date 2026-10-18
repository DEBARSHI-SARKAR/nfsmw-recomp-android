/* speed.exe 00516fb0 FUN_00516fb0; analysis pseudocode, not buildable source.
 * calls 006e1390 FUN_006e1390
 * calls 006e1450 FUN_006e1450
 * calls 006e16f0 FUN_006e16f0
 * calls 006d8680 FUN_006d8680
 * calls 006ca110 FUN_006ca110
 * calls 006ca2a0 FUN_006ca2a0
 * calls 006e1520 FUN_006e1520
 */

void FUN_00516fb0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_009203c4 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_006ca110(iVar2);
      if (iVar1 != 0) {
        FUN_006e1390(iVar2);
        FUN_006e1520(iVar2);
        FUN_006ca2a0(iVar2);
        FUN_006e16f0(iVar2);
        FUN_006e1450(iVar2);
        FUN_006d8680(iVar2,0,200,200);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return;
}

