/* speed.exe 006701a0 FUN_006701a0; analysis pseudocode, not buildable source.
 */

void FUN_006701a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_0092c510 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(DAT_0092c510 + -200);
  }
  while (puVar1 = puVar2, puVar1 != (undefined4 *)&DAT_0092c448) {
    if (puVar1[0x32] == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(puVar1[0x32] + -200);
    }
    if (*(char *)(puVar1 + 0x12) != '\0') {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

