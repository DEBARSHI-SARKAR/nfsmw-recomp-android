/* speed.exe 0056a1d0 FUN_0056a1d0; analysis pseudocode, not buildable source.
 */

uint FUN_0056a1d0(char param_1)

{
  uint uVar1;
  char local_c [12];
  
  builtin_strncpy(local_c,"/\\|`~#%+*=",10);
  uVar1 = 0;
  do {
    if (param_1 == local_c[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return uVar1 & 0xffffff00;
}

