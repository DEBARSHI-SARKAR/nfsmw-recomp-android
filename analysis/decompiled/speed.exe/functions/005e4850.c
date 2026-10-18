/* speed.exe 005e4850 FUN_005e4850; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005e4850(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short *psVar4;
  uint uVar5;
  
  fVar2 = param_2[2];
  fVar1 = *param_2;
  fVar3 = param_2[1];
  uVar5 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      psVar4 = *(short **)(*(int *)(param_1 + 0x2c4) + uVar5 * 4);
      if ((*psVar4 == 0xc) &&
         ((fVar3 - *(float *)(psVar4 + 0xc)) * (fVar3 - *(float *)(psVar4 + 0xc)) +
          (-fVar1 - *(float *)(psVar4 + 10)) * (-fVar1 - *(float *)(psVar4 + 10)) +
          (fVar2 - *(float *)(psVar4 + 8)) * (fVar2 - *(float *)(psVar4 + 8)) <= param_3 * param_3))
      {
        *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfe;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 700));
  }
  return;
}

