/* speed.exe 0056f0c0 FUN_0056f0c0; analysis pseudocode, not buildable source.
 * calls 006530a0 FUN_006530a0
 */

void FUN_0056f0c0(void)

{
  uint *puVar1;
  char cVar2;
  
  cVar2 = FUN_006530a0(4);
  if ((cVar2 != '\0') && ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0x12 & 1) == 0)) {
    puVar1 = (uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac);
    *puVar1 = *puVar1 | 0x40000;
  }
  return;
}

