/* speed.exe 00752d20 FUN_00752d20; analysis pseudocode, not buildable source.
 * calls 007483e0 FUN_007483e0
 * calls 00748380 FUN_00748380
 * calls 004647c0 FUN_004647c0
 * calls 00752940 FUN_00752940
 */

int __thiscall
FUN_00752d20(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = param_2;
  piVar4 = piVar1;
  for (iVar2 = 0xc4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_007483e0(piVar1,param_3,param_4);
  FUN_00752940(piVar1,param_3 != 0);
  FUN_00748380(piVar1,param_3,param_5);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x32c) = *param_2 * 0xd0 + DAT_009b09d8;
  *(int *)(param_1 + 0x6d0) = DAT_00904a04;
  DAT_00904a04 = DAT_00904a04 + 1;
  *(int *)(param_1 + 0x34c) = param_1 + 0x374;
  *(int *)(param_1 + 0x350) = param_1 + 0x3f0;
  *(int *)(param_1 + 0x348) = param_1 + 0x354;
  FUN_004647c0(param_1 + 0x330,"%s(%d)",*(undefined4 *)(param_1 + 0x32c),
               *(undefined4 *)(param_1 + 0x6d0));
  return param_1;
}

