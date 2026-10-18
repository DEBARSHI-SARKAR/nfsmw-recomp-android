/* speed.exe 00659930 FUN_00659930; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00659930(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if (iVar1 < param_1[4]) {
    iVar2 = iVar1;
    while (iVar2 < *param_1 + 0x28) {
      if ((param_1[2] != 0) && (param_1[2] <= iVar2)) {
        return;
      }
      iVar2 = iVar2 + 1 + (uint)(*(byte *)((iVar2 - iVar1) + 0x118 + (int)param_1) >> 4);
      if (param_1[4] <= iVar2) {
        return;
      }
    }
  }
  return;
}

