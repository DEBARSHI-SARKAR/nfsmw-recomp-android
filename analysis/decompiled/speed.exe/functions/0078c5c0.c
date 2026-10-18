/* speed.exe 0078c5c0 FUN_0078c5c0; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_0078c5c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 5;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0x11);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0xffffffff;
  puVar1 = param_1 + 0x44;
  iVar2 = 6;
  do {
    *puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0x161);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x25a) = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined1 *)((int)param_1 + 0x975) = 0;
  puVar1 = (undefined4 *)((int)param_1 + 0x55);
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

