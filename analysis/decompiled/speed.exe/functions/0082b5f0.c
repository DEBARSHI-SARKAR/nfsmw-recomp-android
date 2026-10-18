/* speed.exe 0082b5f0 FUN_0082b5f0; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 00862e25 FUN_00862e25
 */

void FUN_0082b5f0(void)

{
  undefined4 *puVar1;
  
  if (DAT_009c29ac != (undefined4 *)0x0) {
    (**(code **)*DAT_009c29ac)(1);
  }
  puVar1 = (undefined4 *)FUN_00829480(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_008c5df8;
    FUN_00862e25(&LAB_0082e7e0);
    DAT_009c29ac = puVar1;
    return;
  }
  DAT_009c29ac = (undefined4 *)0x0;
  return;
}

