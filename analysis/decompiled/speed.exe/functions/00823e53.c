/* speed.exe 00823e53 FUN_00823e53; analysis pseudocode, not buildable source.
 */

uint FUN_00823e53(int param_1)

{
  int *piVar1;
  
  if (((-1 < param_1) && (param_1 < (int)(uint)DAT_009c2044)) &&
     (piVar1 = (int *)(DAT_009c21f8 + param_1 * 8), *piVar1 != 0)) {
    return -(uint)((char)piVar1[1] != '\0') & 0xffffffee;
  }
  return 0xfffffff8;
}

