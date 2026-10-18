/* speed.exe 00709c80 FUN_00709c80; analysis pseudocode, not buildable source.
 */

uint FUN_00709c80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*DAT_009933e8;
  while( true ) {
    if (puVar1 == DAT_009933e8) {
      return (uint)puVar1 & 0xffffff00;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

