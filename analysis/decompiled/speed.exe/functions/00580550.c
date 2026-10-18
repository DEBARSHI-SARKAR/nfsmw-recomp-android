/* speed.exe 00580550 FUN_00580550; analysis pseudocode, not buildable source.
 * calls 0056e6e0 FUN_0056e6e0
 * calls 0056e800 FUN_0056e800
 * calls 00722840 FUN_00722840
 */

void __thiscall
FUN_00580550(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_7 != (int *)0x0) {
    iVar2 = *param_7;
    uVar3 = (uint)(iVar2 == 1);
    if (param_2 != -1) {
      piVar1 = (int *)(param_1 + 0xa14 + param_2 * 8);
      *piVar1 = *piVar1 + uVar3;
    }
    if (param_6 != 0) {
      *(uint *)(param_1 + 0xa24) = uVar3;
    }
    *(float *)(param_1 + 0xa00) = (float)param_7[0x29] + *(float *)(param_1 + 0xa00);
    *(uint *)(param_1 + 0xa08) = *(int *)(param_1 + 0xa08) + (uint)(*param_7 == 1);
    *(uint *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + (uint)(iVar2 != 1);
    uVar3 = FUN_0056e6e0(param_2,param_3,param_4,param_5,param_7);
    param_7[0x2f] = uVar3 & 0xff;
    FUN_00722840(param_3);
    FUN_0056e800();
  }
  return;
}

