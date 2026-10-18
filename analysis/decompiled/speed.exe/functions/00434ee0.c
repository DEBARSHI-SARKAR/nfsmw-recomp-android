/* speed.exe 00434ee0 FUN_00434ee0; analysis pseudocode, not buildable source.
 * calls 0042da90 FUN_0042da90
 * calls 00434ee0 FUN_00434ee0
 * calls 004305d0 FUN_004305d0
 * calls 0042dfc0 FUN_0042dfc0
 * calls 00432ce0 FUN_00432ce0
 */

void FUN_00434ee0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 5;
    if (iVar1 < 0x21) {
LAB_00434f63:
      if (1 < iVar1) {
        FUN_004305d0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x20 < (int)(param_2 - param_1 & 0xffffffe0U)) {
          FUN_0042dfc0(param_1,param_2,0,0);
        }
        FUN_00432ce0(param_1,param_2);
        return;
      }
      goto LAB_00434f63;
    }
    FUN_0042da90(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xffffffe0U) < (int)(param_2 - local_4 & 0xffffffe0U)) {
      FUN_00434ee0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_00434ee0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

