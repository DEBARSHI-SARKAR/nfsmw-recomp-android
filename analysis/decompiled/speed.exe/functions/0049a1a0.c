/* speed.exe 0049a1a0 FUN_0049a1a0; analysis pseudocode, not buildable source.
 * calls 0048da30 FUN_0048da30
 * calls 00499990 FUN_00499990
 * calls 00494210 FUN_00494210
 * calls 00499aa0 FUN_00499aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a1a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  iVar3 = param_1;
  FUN_00499990(param_1,local_20,&param_1);
  iVar4 = param_2;
  FUN_00499aa0(param_2,local_10,param_1);
  uVar8 = 0;
  uVar7 = 0x3f800000;
  uVar6 = 0;
  fVar5 = (float10)FUN_0048da30(local_10,local_20,0,0x3f800000,0);
  FUN_00494210((float)(fVar5 * (float10)_DAT_00890974),uVar6,uVar7,uVar8);
  fVar1 = *(float *)(iVar3 + 0x30);
  fVar2 = *(float *)(iVar4 + 0x30);
  *(undefined4 *)(extraout_ECX + 0x34) = 0;
  *(float *)(extraout_ECX + 0x30) = fVar1 - fVar2;
  *(float *)(extraout_ECX + 0x38) = *(float *)(iVar3 + 0x38) - *(float *)(iVar4 + 0x38);
  return;
}

