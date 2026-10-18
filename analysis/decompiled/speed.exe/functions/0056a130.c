/* speed.exe 0056a130 FUN_0056a130; analysis pseudocode, not buildable source.
 */

uint FUN_0056a130(char param_1)

{
  uint uVar1;
  char local_18 [24];
  
  builtin_strncpy(local_18,"=/?\\;\',!#~%`&*()+[]|:\"<>",0x18);
  uVar1 = 0;
  do {
    if (param_1 == local_18[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return uVar1 & 0xffffff00;
}

