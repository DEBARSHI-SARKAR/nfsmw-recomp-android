/* speed.exe 00828976 FUN_00828976; analysis pseudocode, not buildable source.
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 008284c6 FUN_008284c6
 */

void __thiscall FUN_00828976(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  float *pfVar3;
  int iVar4;
  short sVar5;
  int local_8;
  
  iVar1 = param_1[0x355];
  iVar4 = param_1[0x351];
  if (iVar1 != 0) {
    param_1[0x353] = *param_2;
    local_8 = param_3;
    if (iVar1 <= param_3) {
      local_8 = iVar1;
    }
    param_3 = local_8;
    if (0 < local_8) {
      while( true ) {
        if (param_3 < iVar4) {
          iVar4 = param_3;
        }
        (*(code *)PTR_FID_conflict__memcpy_0090c700)
                  (param_1[0x353],param_1 + (0x351 - param_1[0x351]),iVar4 << 2);
        param_3 = param_3 - iVar4;
        param_1[0x351] = param_1[0x351] - iVar4;
        param_1[0x353] = param_1[0x353] + iVar4 * 4;
        if (param_3 < 1) break;
        FUN_008284c6(param_1);
        iVar4 = 0x1b0;
        param_1[0x351] = 0x1b0;
        if (param_1[0x359] == 1) {
          puVar2 = (undefined1 *)*param_1;
          param_1[0x352] = (int)(puVar2 + -1);
          if (param_1[0x358] != 0) {
            *(undefined1 *)((int)param_1 + 0xd52) = *puVar2;
            *(undefined1 *)((int)param_1 + 0xd53) = puVar2[-1];
            *(undefined1 *)(param_1 + 0x354) = puVar2[2];
            *(undefined1 *)((int)param_1 + 0xd51) = puVar2[1];
            iVar1 = param_1[0x352] + 4 + (short)param_1[0x354] * 2;
            *param_1 = iVar1;
            param_1[0x352] = iVar1;
            puVar2 = puVar2 + 3;
            *param_1 = *param_1 + 1;
            sVar5 = 0;
            pfVar3 = (float *)(param_1 + *(short *)((int)param_1 + 0xd52) + 0x1a1);
            if (0 < (short)param_1[0x354]) {
              do {
                *pfVar3 = (float)(int)CONCAT11(*puVar2,puVar2[1]);
                pfVar3 = pfVar3 + 1;
                puVar2 = puVar2 + 2;
                sVar5 = sVar5 + 1;
              } while (sVar5 < (short)param_1[0x354]);
            }
            param_1[0x358] = 0;
          }
          if (*(char *)param_1[0x352] == -0x12) {
            param_1[0x358] = 1;
          }
          param_1[2] = 8;
          param_1[1] = (uint)*(byte *)*param_1;
          *param_1 = (int)((byte *)*param_1 + 1);
        }
      }
    }
    param_1[0x355] = param_1[0x355] - local_8;
  }
  return;
}

