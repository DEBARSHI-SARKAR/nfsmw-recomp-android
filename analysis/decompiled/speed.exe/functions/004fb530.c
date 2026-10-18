/* speed.exe 004fb530 FUN_004fb530; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __thiscall FUN_004fb530(int *param_1,int param_2,int param_3)

{
  if ((*(byte *)(param_3 + 0x11) & 0x20) == 0) {
    (*(code *)param_1[2])
              (*(int *)(param_3 + 0x14) + (*param_1 - 1U) & ~(*param_1 - 1U),param_3,param_2);
  }
  FUN_004655f0(*(undefined4 *)(param_3 + 0x14));
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) - *(int *)(param_3 + 8);
  param_1[0xc] = param_1[0xc] + -1;
  param_1[0xd] = param_1[0xd] - *(int *)(param_3 + 8);
  return;
}

