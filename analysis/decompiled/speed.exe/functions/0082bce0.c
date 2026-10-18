/* speed.exe 0082bce0 FUN_0082bce0; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 007ec4d2 FUN_007ec4d2
 * calls 0082bee0 FUN_0082bee0
 */

void FUN_0082bce0(void)

{
  undefined4 *puVar1;
  
  if (DAT_009c29a8 != (undefined4 *)0x0) {
    (**(code **)*DAT_009c29a8)(1);
  }
  puVar1 = (undefined4 *)FUN_00829480(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0082bee0();
    *puVar1 = &PTR_FUN_008c5fd8;
    puVar1[1] = FUN_00862d36;
    puVar1[2] = _printf;
    puVar1[3] = 0;
    FUN_007ec4d2(&LAB_0082b9b0,5,100,0);
    DAT_009c29a8 = puVar1;
    return;
  }
  DAT_009c29a8 = (undefined4 *)0x0;
  return;
}

