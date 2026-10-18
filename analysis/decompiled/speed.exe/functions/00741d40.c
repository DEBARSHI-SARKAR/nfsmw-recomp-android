/* speed.exe 00741d40 FUN_00741d40; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00740fa0 FUN_00740fa0
 */

void __thiscall FUN_00741d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,8);
  param_2 = 0;
  FUN_0078a3a0(&param_2,0x20);
  iVar1 = *(int *)(param_1 + 8 + (char)local_4 * 4);
  if (((iVar1 != 0) &&
      (((*(char *)(DAT_0091cf90 + 0x141) != '\0' || (DAT_00926064 != 0)) && (DAT_009b10a5 == '\0')))
      ) && (param_2 != *(int *)(iVar1 + 0x1228))) {
    FUN_00740fa0(5);
  }
  return;
}

