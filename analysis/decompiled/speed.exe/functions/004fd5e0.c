/* speed.exe 004fd5e0 FUN_004fd5e0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_004fd5e0(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_2 < *param_1) || (param_1[1] <= param_2)) {
    return param_2;
  }
  puVar1 = param_1 + 2;
  iVar2 = 0;
  if (0 < (int)*puVar1) {
    do {
      if ((param_1[3] <= param_2) && (param_2 < param_1[4])) {
        return param_1[5] + param_2;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 3;
    } while (iVar2 < (int)*puVar1);
  }
  return param_2;
}

