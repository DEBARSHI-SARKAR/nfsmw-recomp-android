/* speed.exe 0056a230 FUN_0056a230; analysis pseudocode, not buildable source.
 */

uint FUN_0056a230(char param_1)

{
  uint uVar1;
  char local_4 [4];
  
  builtin_strncpy(local_4,":;()",4);
  uVar1 = 0;
  do {
    if (param_1 == local_4[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return uVar1 & 0xffffff00;
}

