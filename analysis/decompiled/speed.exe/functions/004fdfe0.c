/* speed.exe 004fdfe0 FUN_004fdfe0; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045db30 FUN_0045db30
 * calls 006bdb50 FUN_006bdb50
 * calls 006bd920 FUN_006bd920
 */

undefined1 FUN_004fdfe0(int param_1,float *param_2,float *param_3,short *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  undefined1 local_55;
  undefined1 local_50 [76];
  
  local_55 = 1;
  switch(param_1 + -3) {
  case 0:
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_3[2] = 1.0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[3] = 0.0;
    if (*param_4 != 0) {
      fVar4 = (float10)FUN_0045dbf0(*param_4);
      FUN_0045db30(*param_4);
      param_2[2] = (float)extraout_ST0;
      *param_2 = 0.0;
      param_2[1] = (float)fVar4;
      param_2[3] = 0.0;
      param_3[1] = (float)-extraout_ST0;
      *param_3 = 0.0;
      param_3[2] = (float)fVar4;
      param_3[3] = 0.0;
      return 1;
    }
    break;
  default:
    local_55 = 0;
    break;
  case 2:
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_3[2] = 1.0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[3] = 0.0;
    if (*param_4 != 0) {
      fVar4 = (float10)FUN_0045dbf0(*param_4);
      fVar5 = (float10)FUN_0045db30(*param_4);
      param_2[2] = (float)-fVar5;
      *param_2 = (float)fVar4;
      param_2[1] = 0.0;
      param_2[3] = 0.0;
      *param_3 = (float)fVar5;
      param_3[2] = (float)fVar4;
      param_3[1] = 0.0;
      param_3[3] = 0.0;
      return 1;
    }
    break;
  case 3:
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_3[1] = 1.0;
    *param_3 = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    if (*param_4 != 0) {
      fVar4 = (float10)FUN_0045dbf0(*param_4);
      fVar5 = (float10)FUN_0045db30(*param_4);
      param_2[1] = (float)fVar5;
      *param_2 = (float)fVar4;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      *param_3 = (float)-fVar5;
      param_3[1] = (float)fVar4;
      param_3[2] = 0.0;
      param_3[3] = 0.0;
      return 1;
    }
    break;
  case 5:
    if (param_5 == (float *)0x0) {
      return 0;
    }
    fVar1 = *param_5;
    fVar2 = param_5[4];
    fVar3 = param_5[8];
    param_2[3] = 0.0;
    *param_2 = fVar1;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    fVar1 = param_5[1];
    fVar2 = param_5[5];
    fVar3 = param_5[9];
    param_3[3] = 0.0;
    *param_3 = fVar1;
    param_3[1] = fVar2;
    param_3[2] = fVar3;
    if (*param_4 != 0) {
      FUN_006bdb50(local_50,*param_4);
      FUN_006bd920(param_2,local_50,param_2);
      FUN_006bd920(param_3,local_50,param_3);
      return 1;
    }
  }
  return local_55;
}

