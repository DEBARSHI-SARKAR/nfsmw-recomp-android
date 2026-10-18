/* speed.exe 00730d20 FUN_00730d20; analysis pseudocode, not buildable source.
 * calls 007218b0 FUN_007218b0
 * calls 007303d0 FUN_007303d0
 * calls 007247e0 FUN_007247e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00730d20(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  float10 fVar6;
  int *local_38;
  float local_34;
  int local_2c;
  int local_28;
  float local_10;
  float local_c;
  
  local_34 = 999.0;
  local_28 = 0;
  pcVar4 = (char *)(param_1 + 0xdc);
  do {
    cVar2 = FUN_007303d0();
    if (((cVar2 == '\0') ||
        (((*(char *)(param_1 + 0x193) != '\0' && (cVar2 = FUN_007303d0(), cVar2 != '\0')) ||
         (*pcVar4 == '\0')))) ||
       ((pcVar4[1] == '\0' ||
        (_DAT_008b2b10 <
         SQRT(*(float *)(pcVar4 + -0xc) * *(float *)(pcVar4 + -0xc) +
              *(float *)(pcVar4 + -0x10) * *(float *)(pcVar4 + -0x10)))))) break;
    local_2c = 0;
    if (0 < *(int *)(param_1 + 0x2c0)) {
      local_38 = (int *)(param_1 + 0x2c4);
      do {
        iVar1 = *local_38;
        if (*(int *)(iVar1 + 0x58) != 0) {
          iVar3 = (int)*(short *)(iVar1 + 8);
          cVar2 = (((char)(iVar3 / 100) + (char)(*(short *)(iVar1 + 8) >> 7)) -
                  (char)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + '@';
          if (('@' < cVar2) && (cVar2 < 'U')) {
            cVar2 = (char)(iVar3 / 100) + '@';
            if (((('@' < cVar2) &&
                 (((cVar2 < 'U' && (0 < iVar3 % 100)) && (iVar3 % 100 < DAT_00903164)))) ||
                (cVar2 = FUN_007218b0(iVar3), cVar2 != '\0')) && (*(int *)(iVar1 + 0xc) != 4)) {
              local_10 = *(float *)(pcVar4 + -0x10) * _DAT_00890dc4 + *(float *)(pcVar4 + -0x1c);
              local_c = *(float *)(pcVar4 + -0xc) * _DAT_00890dc4 + *(float *)(pcVar4 + -0x18);
              fVar5 = (float10)FUN_007247e0(pcVar4 + -0x1c,0x4479c000);
              fVar6 = (float10)FUN_007247e0(&local_10,0x4479c000);
              fVar5 = (float10)(float)fVar5 -
                      ((float10)(float)fVar5 - fVar6) * (float10)_DAT_00890fc8 *
                      (float10)_DAT_00895074;
              if (fVar5 < (float10)local_34) {
                local_34 = (float)fVar5;
              }
            }
          }
        }
        local_2c = local_2c + 1;
        local_38 = local_38 + 1;
      } while (local_2c < *(int *)(param_1 + 0x2c0));
    }
    local_28 = local_28 + 1;
    pcVar4 = pcVar4 + 100;
  } while (local_28 < 2);
  if (_DAT_008b27cc <= local_34) {
    DAT_009ae35c = 0;
    return;
  }
  DAT_009ae35c = 1;
  return;
}

