/* speed.exe 0072dac0 FUN_0072dac0; analysis pseudocode, not buildable source.
 * calls 00660ee0 FUN_00660ee0
 */

void __thiscall FUN_0072dac0(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  int local_4;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  local_4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0xc) = 2;
  if (*(int *)(param_2 + 0x1c) == local_4) {
    FUN_00660ee0(*(undefined4 *)(param_2 + 0x4c),*(int *)(param_2 + 0x10) * 0x40 + 0x30 + param_1,
                 *(undefined4 *)(param_2 + 0x14),local_4,&LAB_0072c360,param_2,0);
    return;
  }
  local_10 = DAT_008f815c;
  local_c = 0x7ffffff;
  local_8 = 1;
  FUN_00660ee0(*(undefined4 *)(param_2 + 0x4c),*(int *)(param_2 + 0x10) * 0x40 + 0x30 + param_1,
               *(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0x1c),&LAB_0072c360,param_2,
               &local_10);
  return;
}

