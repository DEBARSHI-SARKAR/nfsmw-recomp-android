/* speed.exe 006c6f30 FUN_006c6f30; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006be800 FUN_006be800
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c6f30(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  if (param_1 == 0) {
    iVar1 = *(int *)(DAT_00982a20 + 4);
    local_40 = *param_2;
    local_3c = param_2[1];
    local_38 = param_2[2];
    local_50 = param_2[3];
    local_4c = param_2[4];
    local_48 = param_2[5];
    FUN_006be800(param_3,&local_40,&local_50);
    local_30 = (local_50 + local_40) * _DAT_008933d4;
    local_2c = (local_4c + local_3c) * _DAT_008933d4;
    local_28 = (local_48 + local_38) * _DAT_008933d4;
    thunk_FUN_006bd940(local_20,(&DAT_009195e0)[iVar1 * 0x1c] + 0x80,&local_30);
    uVar2 = FUN_007c4b80();
    return uVar2;
  }
  return 0;
}

