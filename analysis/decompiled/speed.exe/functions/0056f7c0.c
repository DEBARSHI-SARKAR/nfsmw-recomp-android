/* speed.exe 0056f7c0 FUN_0056f7c0; analysis pseudocode, not buildable source.
 * calls 0056f410 FUN_0056f410
 */

void __thiscall FUN_0056f7c0(int param_1,undefined4 param_2,int param_3,char param_4)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_0056f410(param_2);
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + *psVar1;
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + psVar1[1];
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + psVar1[2];
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + psVar1[3];
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + psVar1[4];
  *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + psVar1[5];
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + psVar1[6];
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + psVar1[7];
  if (param_4 != '\0') {
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
  }
  *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + 1;
  return;
}

