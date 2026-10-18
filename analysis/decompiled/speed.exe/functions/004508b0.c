/* speed.exe 004508b0 FUN_004508b0; analysis pseudocode, not buildable source.
 * calls 0044ff50 FUN_0044ff50
 */

void FUN_004508b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = &DAT_0090dba8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x90dca8);
  piVar2 = &DAT_0090dbb0;
  do {
    if (piVar2[-4] != 0) {
      *(undefined4 *)(piVar2[-4] + 0x68) = 0;
    }
    if (*piVar2 != 0) {
      *(undefined4 *)(*piVar2 + 0x68) = 0;
    }
    if (piVar2[4] != 0) {
      *(undefined4 *)(piVar2[4] + 0x68) = 0;
    }
    if (piVar2[8] != 0) {
      *(undefined4 *)(piVar2[8] + 0x68) = 0;
    }
    if (piVar2[0xc] != 0) {
      *(undefined4 *)(piVar2[0xc] + 0x68) = 0;
    }
    if (piVar2[0x10] != 0) {
      *(undefined4 *)(piVar2[0x10] + 0x68) = 0;
    }
    if (piVar2[0x14] != 0) {
      *(undefined4 *)(piVar2[0x14] + 0x68) = 0;
    }
    if (piVar2[0x18] != 0) {
      *(undefined4 *)(piVar2[0x18] + 0x68) = 0;
    }
    piVar2 = piVar2 + 0x20;
  } while ((int)piVar2 < 0x90dcb0);
  FUN_0044ff50(0);
  return;
}

