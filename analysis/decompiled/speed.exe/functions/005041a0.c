/* speed.exe 005041a0 FUN_005041a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005041a0(void)

{
  float fVar1;
  undefined4 *puVar2;
  
  fVar1 = (float)DAT_00925ae8 * _DAT_00890984;
  puVar2 = DAT_00916a40;
  if ((undefined4 **)DAT_00916a40 != &DAT_00916a40) {
    do {
      if (*(char *)((int)puVar2 + 0x26) == '\x02') {
        if (*(int *)(puVar2[2] + 0xc) == 0) {
          *(undefined1 *)((int)puVar2 + 0x26) = 3;
          puVar2[10] = fVar1;
        }
      }
      else if ((*(char *)((int)puVar2 + 0x26) == '\x03') &&
              ((float)puVar2[8] < fVar1 - (float)puVar2[10])) {
        *(undefined1 *)((int)puVar2 + 0x26) = 1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_00916a40);
  }
  return;
}

