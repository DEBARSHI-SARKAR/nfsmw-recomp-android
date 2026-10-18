/* speed.exe 00633ef0 FUN_00633ef0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633ef0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00920394;
  if (DAT_00920394 < DAT_00920390) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        _DAT_0092039c = puVar1;
        (**(code **)*puVar1)(1);
        puVar1 = DAT_00920394;
      }
      _DAT_0092039c = (undefined4 *)0x0;
    } while (puVar1 < DAT_00920390);
  }
  DAT_00920390 = (undefined4 *)DAT_0092038c;
  DAT_00920394 = (undefined4 *)DAT_0092038c;
  return;
}

