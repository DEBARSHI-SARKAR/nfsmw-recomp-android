/* speed.exe 0057d0f0 FUN_0057d0f0; analysis pseudocode, not buildable source.
 */

void FUN_0057d0f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0092fd8c;
  if (DAT_0092fd8c != DAT_0092fd8c + DAT_0092fd94) {
    do {
      (**(code **)(*(int *)*puVar1 + 0xc))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_0092fd8c + DAT_0092fd94);
  }
  return;
}

