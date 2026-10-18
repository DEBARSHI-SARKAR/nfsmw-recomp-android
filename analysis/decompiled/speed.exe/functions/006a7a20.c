/* speed.exe 006a7a20 FUN_006a7a20; analysis pseudocode, not buildable source.
 * calls 004560d0 FUN_004560d0
 * calls 006f44e0 FUN_006f44e0
 * calls 0041ad40 FUN_0041ad40
 * calls 006a7820 FUN_006a7820
 * calls 00401d70 FUN_00401d70
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall
FUN_006a7a20(int param_1,int param_2,undefined4 param_3,float *param_4,float *param_5,
            undefined4 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar7 = (float10)FUN_005c5e80(param_4[2] * param_4[2] +
                                param_4[1] * param_4[1] + *param_4 * *param_4);
  if (fVar7 <= (float10)_DAT_0089096c) {
    return 0;
  }
  fVar7 = (float10)FUN_005c5e80(*param_4 * *param_4 +
                                param_4[2] * param_4[2] + param_4[1] * param_4[1]);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(param_6);
  FUN_006a7820(param_2,uVar3,param_6);
  fVar1 = *(float *)(param_1 + 0x88);
  fVar2 = *(float *)(param_1 + 0x8c);
  iVar4 = FUN_004560d0();
  if (iVar4 != 0) {
    if (fVar1 <= (float)fVar7) {
      if (fVar2 < fVar1 == (fVar2 == fVar1)) {
        fVar7 = (float10)FUN_00401d70(((float)fVar7 - fVar1) / (fVar2 - fVar1),0x3dcccccd,0x3f800000
                                     );
        iVar6 = 0;
        fStack_c = (float)(fVar7 * (float10)*param_5);
        fStack_8 = (float)(fVar7 * (float10)param_5[1]);
        fStack_4 = (float)(fVar7 * (float10)param_5[2]);
        if (param_7 != 0) {
          piVar5 = (int *)FUN_0041ad40(param_7);
          if (piVar5 != (int *)0x0) {
            iVar6 = (**(code **)(*piVar5 + 0x70))();
          }
        }
        FUN_006f44e0(iVar4,param_3,&fStack_c,*(undefined4 *)(param_2 + 4),iVar6 != 0,0);
        *(undefined1 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 0x3e4ccccd;
        return 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xdc) = 1;
  return 0;
}

