/* speed.exe 0081f7cb FUN_0081f7cb; analysis pseudocode, not buildable source.
 */

uint FUN_0081f7cb(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (((((int)param_1 < 0) || (uVar1 = param_1 & 0xff, (int)DAT_009c218c <= (int)uVar1)) ||
      (puVar2 = (uint *)(uVar1 * 0x90 + DAT_009c21f4), *(char *)((int)puVar2 + 0x6d) == '\0')) ||
     (*puVar2 != param_1)) {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}

