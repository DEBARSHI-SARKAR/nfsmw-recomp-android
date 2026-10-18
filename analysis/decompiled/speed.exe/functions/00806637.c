/* speed.exe 00806637 FUN_00806637; analysis pseudocode, not buildable source.
 */

void FUN_00806637(void)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar2 = &DAT_009c64a0;
  do {
    puVar2 = (undefined8 *)((int)puVar2 + -2);
    *(undefined2 *)puVar2 = 0;
  } while (puVar2 != &DAT_009c6480);
  DAT_009c6498._6_2_ = 0xffff;
  DAT_009c6490._4_2_ = 0xffff;
  DAT_009c6488._2_2_ = 0xffff;
  DAT_009c6480._0_2_ = 0xffff;
  puVar3 = (undefined2 *)((int)&DAT_009c64a0 + 4);
  puVar4 = &DAT_0090b418;
  do {
    uVar1 = *puVar4;
    puVar3[1] = uVar1;
    *puVar3 = uVar1;
    puVar3[-1] = uVar1;
    puVar3[-2] = uVar1;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 1;
  } while ((int)puVar3 < 0x9c64d5);
  DAT_009c64d8._6_2_ = 8;
  DAT_009c64d8._4_2_ = 8;
  DAT_009c64d8._2_2_ = 8;
  DAT_009c64d8._0_2_ = 8;
  return;
}

