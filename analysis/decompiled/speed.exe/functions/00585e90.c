/* speed.exe 00585e90 FUN_00585e90; analysis pseudocode, not buildable source.
 * calls 00582660 FUN_00582660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00585e90(int param_1,float param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  float fVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_1 + 0x44);
  fVar2 = -(_DAT_008933d4 * (float)(int)*(short *)(param_1 + 0x46));
  iVar3 = FUN_00582660(param_2,fVar2,(float)(int)sVar1 + param_2,
                       fVar2 + (float)(int)*(short *)(param_1 + 0x46),0x3f800000,0,0,0x3f800000,
                       0x3f800000,param_4,param_6);
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0xb0) = param_1;
  }
  return (float10)(int)sVar1;
}

