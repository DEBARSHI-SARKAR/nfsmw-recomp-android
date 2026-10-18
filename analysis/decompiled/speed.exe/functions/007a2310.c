/* speed.exe 007a2310 FUN_007a2310; analysis pseudocode, not buildable source.
 * calls 00633d80 FUN_00633d80
 * calls 00626d70 FUN_00626d70
 * calls 00572ff0 FUN_00572ff0
 * calls 00516a90 FUN_00516a90
 * calls 00476f30 FUN_00476f30
 * calls 00476ff0 FUN_00476ff0
 * calls 00633d90 FUN_00633d90
 * calls 00633dc0 FUN_00633dc0
 * calls 00476e70 FUN_00476e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a2310(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float local_c;
  int *local_8;
  float local_4;
  
  iVar4 = 0;
  iVar5 = 1;
  if ((((DAT_0091cf90[300] & 4U) != 0) && (*DAT_0091cf90 == '\x02')) &&
     (iVar2 = FUN_00516a90(), iVar2 != 0)) {
    iVar4 = FUN_00572ff0(*(undefined4 *)(iVar2 + 0x20));
    iVar5 = iVar4 + 1;
  }
  if (iVar4 < iVar5) {
    piVar3 = (int *)(param_1 + 0x60 + iVar4 * 4);
    iVar5 = iVar5 - iVar4;
    do {
      if (*piVar3 != 0) {
        cVar1 = FUN_00633d80();
        while (cVar1 == '\0') {
          if ((*(char *)(param_1 + 0x78) != '\0') || (DAT_00926134 != '\0')) {
            FUN_00633dc0(&local_8);
            cVar1 = FUN_00626d70();
            if (cVar1 == '\0') {
              local_c = 0.0;
LAB_007a23dd:
              if (local_8 == (int *)0x0) goto LAB_007a23c4;
              iVar4 = *local_8;
            }
            else {
              if (local_8 != (int *)0x0) {
                local_c = (float)local_8[2];
                goto LAB_007a23dd;
              }
              local_c = 0.0;
LAB_007a23c4:
              iVar4 = 0;
            }
            switch(iVar4) {
            case 0x19:
              iVar4 = 0x1d;
              break;
            case 0x1a:
              iVar4 = 0x1e;
              break;
            case 0x1b:
              iVar4 = 0x1f;
              break;
            case 0x1c:
              iVar4 = 0x20;
            }
            switch(iVar4) {
            case 0x1d:
              *(float *)(param_1 + 0x7c) = local_c;
              FUN_00476e70(local_c);
              DAT_009b9e58 = DAT_00905e24;
              break;
            case 0x1e:
              local_4 = -local_c;
              *(float *)(param_1 + 0x7c) = local_4;
              FUN_00476e70(local_4);
              DAT_009b9e58 = DAT_00905e24;
              break;
            case 0x1f:
              *(float *)(param_1 + 0x80) = local_c;
              FUN_00476f30(local_c);
              DAT_009b9e58 = DAT_00905e24;
              break;
            case 0x20:
              local_4 = -local_c;
              *(float *)(param_1 + 0x80) = local_4;
              FUN_00476f30(local_4);
              DAT_009b9e58 = DAT_00905e24;
              break;
            case 0x2b:
            case 0x2c:
              if ((local_8 == (int *)0x0) || (*local_8 != 0x2b)) {
                DAT_009ba398 = -local_c;
              }
              else {
                DAT_009ba39c = local_c;
              }
              DAT_009b9e58 = DAT_00905e24;
              if (ABS(DAT_009ba398) <= ABS(DAT_009ba39c)) {
                if (ABS(DAT_009ba39c) <= ABS(DAT_009ba398)) {
                  if ((DAT_009ba39c == _DAT_00890968) && (DAT_009ba398 == _DAT_00890968)) {
                    *(undefined4 *)(param_1 + 0x84) = 0;
                  }
                }
                else {
                  *(float *)(param_1 + 0x84) = DAT_009ba39c;
                }
              }
              else {
                *(float *)(param_1 + 0x84) = DAT_009ba398;
              }
              FUN_00476ff0(*(undefined4 *)(param_1 + 0x84));
              break;
            case 0x88:
              FUN_00476e70(0);
              FUN_00476f30(0);
              FUN_00476ff0(0);
              DAT_009b9e58 = DAT_00905e24;
            }
            if (0 < DAT_009b9e58) {
              if ((DAT_009b9e5d != '\0') &&
                 ((local_8 == (int *)0x0 || ((*local_8 != 0x1f && (*local_8 != 0x20)))))) {
                FUN_00476f30(0);
              }
              DAT_009b9e5d = '\0';
            }
          }
          FUN_00633d90();
          cVar1 = FUN_00633d80();
        }
      }
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

