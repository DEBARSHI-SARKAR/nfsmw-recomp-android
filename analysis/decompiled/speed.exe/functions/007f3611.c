/* speed.exe 007f3611 FUN_007f3611; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f3611(undefined1 param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  
  if (in_EAX == 0) {
    puVar1 = &DAT_00907fe4;
    do {
      *puVar1 = param_1;
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0x9081e4);
    return;
  }
  if (in_EAX == 1) {
    puVar1 = &DAT_00907fe4;
    do {
      if (puVar1[1] != '\0') {
        *puVar1 = param_1;
      }
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0x9081e4);
    return;
  }
  (&DAT_00907fe4)[in_EAX * 8] = param_1;
  return;
}

