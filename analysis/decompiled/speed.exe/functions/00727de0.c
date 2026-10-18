/* speed.exe 00727de0 FUN_00727de0; analysis pseudocode, not buildable source.
 * calls 004fcda0 FUN_004fcda0
 * calls 00658dd0 FUN_00658dd0
 */

void __thiscall FUN_00727de0(int param_1,int param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  DAT_00915fd8 = DAT_00915fd8 + 1;
  FUN_004fcda0(0);
  local_8 = *(undefined4 *)(param_2 + 0x4c);
  local_4 = *(undefined4 *)(param_2 + 0x54);
  FUN_00658dd0(&local_8,&local_4,0x2087,param_2);
  *(undefined4 *)(param_2 + 0x54) = local_4;
  *(undefined4 *)(param_2 + 0x4c) = local_8;
  *(undefined4 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 0x40) = 0;
  DAT_00915fd8 = DAT_00915fd8 + -1;
  FUN_004fcda0(1);
  return;
}

