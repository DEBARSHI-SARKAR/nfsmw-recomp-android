/* speed.exe 007fbca3 FUN_007fbca3; analysis pseudocode, not buildable source.
 * calls 007fe7f5 FUN_007fe7f5
 * calls 007fca71 FUN_007fca71
 */

/* WARNING: Removing unreachable block (ram,0x007fbd95) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fbca3(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  
  while( true ) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        iVar2 = *(int *)(param_1 + 0x1b4) * *(int *)(param_1 + 0x1b0);
        dVar1 = (double)iVar2;
        if (iVar2 < 0) {
          dVar1 = dVar1 + _DAT_008c3870;
        }
        *(int *)(param_1 + 0x1a8) = param_3;
        dVar1 = (SQRT(dVar1) / (double)((uint)(*(int *)(param_1 + 0x1a4) * param_3) / 100)) *
                _DAT_008c3868;
        if (dVar1 <= _DAT_008c3860) {
          if (dVar1 <= _DAT_008c3868) {
            if (dVar1 <= _DAT_008c3858) {
              if (dVar1 <= _DAT_008c3850) {
                *(undefined4 *)(param_1 + 0x1a0) = 6;
              }
              else {
                *(undefined4 *)(param_1 + 0x1a0) = 5;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x1a0) = 4;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x1a0) = 8;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x1a0) = 0;
        }
      }
      else if (param_2 == 5) {
        *(int *)(param_1 + 0x4940) = param_3;
      }
      else if (param_2 == 6) {
        *(int *)(param_1 + 0x4944) = param_3;
      }
      else if (param_2 == 7) {
        FUN_007fe7f5(*(undefined4 *)(param_1 + 0x29c),param_3,*(undefined4 *)(param_1 + 0x254));
        FUN_007fe7f5(*(undefined4 *)(param_1 + 0x29c),param_3,*(undefined4 *)(param_1 + 0x24c));
      }
      else if (param_2 == 8) {
        *(int *)(param_1 + 0x4948) = param_3;
      }
      else if (param_2 == 9) {
        *(int *)(param_1 + 0x494c) = param_3;
        FUN_007fca71(*(undefined4 *)(param_1 + 0x29c),param_3);
      }
      return;
    }
    if (param_3 != 9) break;
    param_3 = 0x46;
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(int *)(param_1 + 0x1a0) = param_3;
  return;
}

