/* speed.exe 00585d60 FUN_00585d60; analysis pseudocode, not buildable source.
 * calls 00582660 FUN_00582660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00585d60(int param_1,int param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(int)*(short *)(*(int *)(param_1 + 8) + 0x44);
  fVar2 = (float)(int)*(short *)(*(int *)(param_1 + 8) + 0x46);
  fVar3 = (float)*(byte *)(param_2 + 2);
  if (fVar3 < _DAT_00890e98) {
    fVar3 = _DAT_00890e98;
  }
  param_3 = (float)(int)*(char *)(param_2 + 9) + param_3;
  param_4 = (float)(int)*(char *)(param_2 + 10) + *(float *)(param_1 + 0x28) + param_4;
  FUN_00582660(param_3,param_4,param_3 + fVar3,(float)*(byte *)(param_2 + 3) + param_4,0x3f800000,
               (float)(int)(*(ushort *)(param_2 + 4) - 1) / fVar1,
               (float)(int)(*(ushort *)(param_2 + 6) - 1) / fVar2,
               (float)(*(byte *)(param_2 + 2) + 1 + (uint)*(ushort *)(param_2 + 4)) / fVar1,
               (float)(*(byte *)(param_2 + 3) + 1 + (uint)*(ushort *)(param_2 + 6)) / fVar2,param_5,
               param_7);
  return;
}

