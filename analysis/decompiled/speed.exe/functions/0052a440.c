/* speed.exe 0052a440 FUN_0052a440; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005b7780 FUN_005b7780
 * calls 00573840 FUN_00573840
 * calls 00587d30 FUN_00587d30
 * calls 00525940 FUN_00525940
 */

void __thiscall
FUN_0052a440(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 != 0xc407210) {
    FUN_00587d30(param_2,param_3,param_4,param_5);
  }
  if (param_2 < 0xd05fc3a4) {
    if (param_2 == 0xd05fc3a3) {
      (**(code **)(**(int **)(param_1 + 0x38) + 4))
                (*(undefined4 *)(param_1 + 0x10),0xd05fc3a3,param_3,param_4,param_5);
      return;
    }
    if (param_2 == 0xc407210) {
      if (*DAT_0091cadc != -0xd8) {
        for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          FUN_005b7780(0x8cb81f09,0,iVar1,0xfffffffc,0);
        }
      }
      (**(code **)(**(int **)(param_1 + 0x38) + 4))
                (*(undefined4 *)(param_1 + 0x10),0xc407210,param_3,param_4,param_5);
    }
    else if (param_2 == 0x911ab364) {
      FUN_00573840(0x911ab364,param_3,param_4,param_5);
      FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      return;
    }
  }
  else if ((param_2 == 0xe1fde1d1) && (*(int *)(param_1 + 0x138) == -0x6ee54c9c)) {
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffff7ff;
    *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24) = 0xffffffff;
    FUN_00525940();
    return;
  }
  return;
}

