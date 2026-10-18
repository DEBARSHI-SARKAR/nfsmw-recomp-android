/* speed.exe 004b5d70 FUN_004b5d70; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 * calls 0045dd10 FUN_0045dd10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5d70(void)

{
  short sVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = _DAT_00912828 - *DAT_00912134;
  local_10 = 0.0;
  local_c = 0.0;
  local_4 = _DAT_0091282c - DAT_00912134[1];
  FUN_0045f3c0(&local_10,&local_8);
  sVar1 = FUN_0045dd10(local_10 * *DAT_00912130 + local_c * DAT_00912130[1]);
  sVar1 = 0x4000 - sVar1;
  if (local_10 * DAT_00912130[1] - local_c * *DAT_00912130 < _DAT_00890968) {
    sVar1 = -1 - sVar1;
  }
  _DAT_00912138 = CONCAT22(DAT_00912138_2,sVar1);
  return;
}

