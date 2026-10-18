/* speed.exe 00766720 FUN_00766720; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_00766720(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = 1 << (param_3 & 0x1f);
  return ((param_1[2] - param_2[2]) + iVar1 | (param_1[1] - param_2[1]) + iVar1 |
         (*param_1 - *param_2) + iVar1) >> (param_3 + 1 & 0x1f) == 0;
}

