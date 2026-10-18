/* speed.exe 00480ce0 FUN_00480ce0; analysis pseudocode, not buildable source.
 * calls 0047cc50 FUN_0047cc50
 */

void FUN_00480ce0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_0091102c = 0;
  FUN_0047cc50();
  puVar2 = &DAT_00919694;
  do {
    if ((((puVar2 != (undefined4 *)0x44) && (puVar1 = (undefined4 *)*puVar2, puVar1 != puVar2)) &&
        (puVar1 != (undefined4 *)0x0)) && (puVar1 + -1 != (int *)0x0)) {
      (**(code **)(puVar1[-1] + 0x34))();
    }
    puVar2 = puVar2 + 0x1c;
  } while ((int)puVar2 < 0x919775);
  return;
}

