/* speed.exe 0056a080 FUN_0056a080; analysis pseudocode, not buildable source.
 */

uint FUN_0056a080(char param_1)

{
  uint uVar1;
  char local_1c [28];
  
  builtin_strncpy(local_1c,"-=/?\\;\',.!@#~%`&*()_+[]|:\"<>",0x1c);
  uVar1 = 0;
  do {
    if (param_1 == local_1c[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x1c);
  return uVar1 & 0xffffff00;
}

