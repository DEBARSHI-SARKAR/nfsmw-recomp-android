/* speed.exe 00601320 FUN_00601320; analysis pseudocode, not buildable source.
 * calls 005f3480 FUN_005f3480
 * calls 005fd820 FUN_005fd820
 * calls 005eeb90 FUN_005eeb90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00601320(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,float param_5)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  
  FUN_005eeb90();
  fVar2 = param_5 * _DAT_00890958;
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  *(undefined4 *)(param_1 + 0x48) = param_2[2];
  *(undefined4 *)(param_1 + 0x50) = *param_3;
  *(undefined4 *)(param_1 + 0x54) = param_3[1];
  *(undefined4 *)(param_1 + 0x58) = param_3[2];
  *(float *)(param_1 + 0x5c) = fVar2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_4 + 0x2c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_4 + 0x3c);
  *(undefined2 *)(param_1 + 0x4e) = 0;
  FUN_005fd820();
  piVar1 = *(int **)(DAT_0091e00c + 0x84);
  piVar3 = *(int **)(DAT_0091e00c + 0x80);
  if (piVar3 != piVar1) {
    do {
      if (*piVar3 == param_1) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) goto LAB_006013dc;
  }
  param_2 = (undefined4 *)param_1;
  FUN_005f3480(&param_2);
LAB_006013dc:
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) | 2;
  return;
}

