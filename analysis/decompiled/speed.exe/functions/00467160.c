/* speed.exe 00467160 FUN_00467160; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 006bcda0 FUN_006bcda0
 * calls 006bcdb0 FUN_006bcdb0
 * calls 0045db30 FUN_0045db30
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00467160(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  float10 fVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  
  thunk_FUN_006bd940(&local_20,param_1,param_2);
  if (_DAT_00890968 == local_18) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    return;
  }
  fVar1 = _DAT_0089096c / local_18;
  uVar4 = *(ushort *)(param_1 + 0xc4) >> 1;
  fVar5 = (float10)FUN_0045db30(uVar4);
  fVar6 = (float10)FUN_0045dbf0(uVar4);
  iVar2 = FUN_006bcdb0();
  iVar3 = FUN_006bcda0();
  *param_3 = (local_20 * fVar1) / (float)((float10)(float)fVar5 / fVar6);
  param_3[1] = (fVar1 * local_1c) /
               (((float)iVar2 * (float)((float10)(float)fVar5 / fVar6)) / (float)iVar3);
  return;
}

