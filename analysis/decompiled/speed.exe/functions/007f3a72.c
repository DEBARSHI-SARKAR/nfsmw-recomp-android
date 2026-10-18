/* speed.exe 007f3a72 FUN_007f3a72; analysis pseudocode, not buildable source.
 * calls 007f39e4 FUN_007f39e4
 * calls 007f3952 FUN_007f3952
 */

void FUN_007f3a72(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_009bb420 == '\0') {
    DAT_009bb420 = '\x01';
    puVar1 = &DAT_009081e8;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
    } while ((int)puVar1 < 0x908248);
    puVar1 = &DAT_00907fe4;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0x9081e4);
    puVar2 = &DAT_0090822c;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
    } while ((int)puVar2 < 0x908244);
    puVar1 = &DAT_009080e5;
    do {
      *(undefined4 *)(puVar1 + -5) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0x9081e5);
    FUN_007f39e4(2,1);
    FUN_007f3952(0,1);
  }
  return;
}

