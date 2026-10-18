/* speed.exe 00841160 FUN_00841160; analysis pseudocode, not buildable source.
 * calls 00851aa0 FUN_00851aa0
 * calls 00844970 FUN_00844970
 * calls 008401f0 FUN_008401f0
 */

void FUN_00841160(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  if (unaff_ESI[2] != 0x6f66666c) {
    unaff_ESI[2] = 0x6f66666c;
    puVar2 = unaff_ESI + 0x629;
    iVar1 = 0x20;
    do {
      if (puVar2[-1] == 3) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00851aa0(*unaff_ESI);
  FUN_00844970();
  FUN_008401f0();
  unaff_ESI[7] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[0x749] = 0;
  unaff_ESI[8] = 0xffffffff;
  unaff_ESI[0x74c] = 1;
  puVar2 = unaff_ESI + 0x568;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

