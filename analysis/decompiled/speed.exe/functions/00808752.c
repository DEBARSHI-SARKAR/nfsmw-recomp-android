/* speed.exe 00808752 FUN_00808752; analysis pseudocode, not buildable source.
 * calls 00808752 FUN_00808752
 */

void FUN_00808752(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  
  while( true ) {
    puVar1 = (uint *)(param_1 + param_2 * 0xc);
    if ((*puVar1 & 1) == 0) {
      FUN_00808752(param_1,*puVar1 >> 1 & 0x7f,param_3,param_4,param_5 * 2,param_6 + 1);
    }
    else {
      *(int *)(param_3 + (*puVar1 >> 1 & 0x7f) * 4) = param_5 * 2;
      *(char *)((*puVar1 >> 1 & 0x7f) + param_4) = (char)param_6 + '\x01';
    }
    if ((puVar1[1] & 1) != 0) break;
    param_6 = param_6 + 1;
    param_2 = puVar1[1] >> 1 & 0x7f;
    param_5 = param_5 * 2 + 1;
  }
  puVar1 = (uint *)(param_1 + 4 + param_2 * 0xc);
  *(int *)(param_3 + (*puVar1 >> 1 & 0x7f) * 4) = param_5 * 2 + 1;
  *(char *)((*puVar1 >> 1 & 0x7f) + param_4) = (char)param_6 + '\x01';
  return;
}

