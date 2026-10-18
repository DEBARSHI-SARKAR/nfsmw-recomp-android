/* speed.exe 00585f90 FUN_00585f90; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 00460bc0 FUN_00460bc0
 * calls 0056bb30 FUN_0056bb30
 * calls 00585e90 FUN_00585e90
 */

short * FUN_00585f90(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,float *param_6,undefined4 param_7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  float10 fVar6;
  short local_108 [64];
  undefined1 local_88 [132];
  
  psVar5 = local_108;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar5[0] = 0;
    psVar5[1] = 0;
    psVar5 = psVar5 + 2;
  }
  sVar1 = *param_1;
  for (uVar4 = 0; ((sVar1 != 0x24 && (sVar1 != 0)) && (uVar4 < 0x80)); uVar4 = uVar4 + 2) {
    *(short *)((int)local_108 + uVar4) = sVar1;
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  FUN_0056bb30(local_88,0x80,local_108);
  uVar2 = FUN_00460bc0(local_88,1,0);
  uVar2 = FUN_00503400(uVar2);
  fVar6 = (float10)FUN_00585e90(uVar2,param_2,param_3,param_4,param_5,param_7);
  *param_6 = (float)fVar6;
  return param_1 + 1;
}

