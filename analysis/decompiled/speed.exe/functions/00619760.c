/* speed.exe 00619760 FUN_00619760; analysis pseudocode, not buildable source.
 * calls 00616730 FUN_00616730
 * calls 00615180 FUN_00615180
 */

int __fastcall FUN_00619760(int param_1)

{
  int in_EAX;
  int local_8 [2];
  
  if (in_EAX == 0) {
    local_8[0] = *(int *)(param_1 + 8) + -8;
    local_8[1] = 0xffffffff;
    in_EAX = FUN_00615180(param_1,&LAB_00613090,local_8,local_8[0] - *(int *)(param_1 + 0x1c));
  }
  FUN_00616730();
  return in_EAX;
}

