/* speed.exe 004fbee0 FUN_004fbee0; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbee0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00915180 = 0;
  DAT_00915184 = 0;
  DAT_00915188 = 0;
  DAT_0091518c = 0;
  _DAT_00915190 = 0;
  puVar2 = &DAT_00915b70;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00915fb0 = FUN_004662e0(0x44,0x40,"eStreamingPackSlotPool",0);
  return;
}

