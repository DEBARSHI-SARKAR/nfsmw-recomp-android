/* speed.exe 0081a42f FUN_0081a42f; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081a42f(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  if (*(char *)(param_1 + 0xf) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0xe) * 0xc);
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return 0;
}

