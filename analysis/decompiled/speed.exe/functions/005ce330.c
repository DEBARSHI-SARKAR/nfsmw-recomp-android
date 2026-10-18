/* speed.exe 005ce330 FUN_005ce330; analysis pseudocode, not buildable source.
 * calls 005c60e0 FUN_005c60e0
 * calls 005c6780 FUN_005c6780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ce330(uint *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_24 [36];
  
  fVar1 = (float)(int)(param_1[2] & DAT_008f5928);
  if ((int)(param_1[2] & DAT_008f5928) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar2 = (float)(int)(param_1[1] & DAT_008f5928);
  if ((int)(param_1[1] & DAT_008f5928) < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  fVar3 = (float)(int)(*param_1 & DAT_008f5928);
  if ((int)(*param_1 & DAT_008f5928) < 0) {
    fVar3 = fVar3 + _DAT_00891214;
  }
  FUN_005c6780(fVar3 * _DAT_0091dd54,fVar2 * _DAT_0091dd54,fVar1 * _DAT_0091dd54,local_24);
  FUN_005c60e0(local_24,param_2);
  return;
}

