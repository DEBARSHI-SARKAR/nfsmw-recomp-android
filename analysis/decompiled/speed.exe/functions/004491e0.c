/* speed.exe 004491e0 FUN_004491e0; analysis pseudocode, not buildable source.
 * calls 00727170 FUN_00727170
 * calls 0045f340 FUN_0045f340
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004491e0(int param_1,int param_2,undefined4 param_3,int *param_4,float *param_5,short param_6)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_8;
  
  puVar4 = (undefined4 *)0x0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar5 = (int *)(param_1 + 0xc9c);
    while (param_2 != *piVar5) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
      if (*(int *)(param_1 + 0x14) <= iVar3) {
        return (undefined4 *)0x0;
      }
    }
    iVar3 = *(int *)(param_1 + 0xca0 + iVar3 * 8);
    if ((((iVar3 != -1) && (-1 < iVar3)) && (iVar3 < 0x15)) &&
       ("!\t@CameraCutMoment"[iVar3 * 0x1c + 3] != '\0')) {
      iVar3 = FUN_00460bf0("!\t@CameraCutMoment" + iVar3 * 0x1c + 3);
      FUN_00727170(0,iVar3);
      local_8 = -1.0;
      param_2 = 0;
      puVar6 = DAT_009aa494;
      if ((undefined4 **)DAT_009aa494 != &DAT_009aa494) {
        do {
          if (puVar6[2] == iVar3) {
            uVar2 = *(short *)(puVar6 + 8) - param_6;
            if (0x8000 < uVar2) {
              uVar2 = param_6 - *(short *)(puVar6 + 8);
            }
            fVar1 = (float)uVar2 * _DAT_00890980 * _DAT_008ec210;
            fVar7 = (float10)FUN_0045f340(puVar6 + 4,param_3);
            fVar7 = fVar7 + (float10)fVar1;
            if ((puVar4 == (undefined4 *)0x0) || (fVar7 < (float10)local_8)) {
              local_8 = (float)fVar7;
              if (param_4 != (int *)0x0) {
                *param_4 = param_2;
              }
              puVar4 = puVar6;
              if (param_5 != (float *)0x0) {
                *param_5 = (float)fVar7;
              }
            }
            param_2 = param_2 + 1;
          }
          puVar6 = (undefined4 *)*puVar6;
        } while ((undefined4 **)puVar6 != &DAT_009aa494);
      }
    }
  }
  return puVar4;
}

