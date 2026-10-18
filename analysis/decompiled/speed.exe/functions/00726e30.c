/* speed.exe 00726e30 FUN_00726e30; analysis pseudocode, not buildable source.
 * calls 0045fbd0 FUN_0045fbd0
 * calls 00726d20 FUN_00726d20
 * calls 0045fba0 FUN_0045fba0
 * calls 0045fed0 FUN_0045fed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00726e30(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,char param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_0045fba0(local_20,local_30,param_1 + 0x30);
  iVar6 = 1;
  if ('\x01' < *(char *)(param_1 + 9)) {
    iVar5 = param_1 + 0x40;
    do {
      FUN_0045fbd0(local_20,local_30,iVar5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(char *)(param_1 + 9));
  }
  iVar6 = FUN_0045fed0(local_20,local_30,param_5,param_6);
  if ((iVar6 != 0) && (cVar4 = FUN_00726d20(param_3,param_4,&local_40), cVar4 != '\0')) {
    fVar1 = local_40 - *param_3;
    fVar3 = local_3c - param_3[1];
    fVar2 = local_38 - param_3[2];
    if (((param_7 != '\0') ||
        (fVar1 * *(float *)(param_1 + 0x70) +
         fVar2 * *(float *)(param_1 + 0x78) + fVar3 * *(float *)(param_1 + 0x74) < _DAT_00890968))
       && (fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3), fVar1 < *param_2)) {
      *param_2 = fVar1;
      if (param_8 != (float *)0x0) {
        *param_8 = local_40;
        param_8[1] = local_3c;
        param_8[2] = local_38;
      }
      return 1;
    }
  }
  return 0;
}

